#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "lib.h"

void cargaAbonado(eAbonado abonado[],int tam)
{
    int i;

    char nombre[5][30]={"Miguel","Luis","Carlos","Martha","Dora"};
    char apellido[5][30]={"Abuelo","Lopez","Garcia","Gomez","Perez"};
    int edad[]={20,61,45,28,33};
    int id[]={100,101,102,103,104,105};
    int estado[]= {1,1,1,1,1};

    for(i=0;i<tam;i++)
    {
        strcpy(abonado[i].nombre,nombre[i]);
        strcpy(abonado[i].apellido,apellido[i]);
        abonado[i].edad = edad[i];
        abonado[i].id = id[i];
        abonado[i].estado = estado[i];
    }

}

void mostrarAbonado(eAbonado abonado[], int tam)
{
    int i;

    printf("NOMBRE\tAPELLIDO\tEDAD\t\tCODIGO ID\t\n");

    for(i=0;i<tam;i++)
    {
        if(abonado[i].estado == 1)
        {
            printf("%s\t%s\t\t%d\t\t%d\n",abonado[i].nombre,abonado[i].apellido,abonado[i].edad,abonado[i].id);
        }

    }
}


void modificarAbonado(eAbonado abonado[],int tam)
{
    int i, auxId;
    char rta;

    mostrarAbonado(abonado, tam);
    printf("\nIngrese ID de persona a modificar:");
    scanf("%d",&auxId);

    for(i=0;i<tam;i++)
    {
       if(auxId == abonado[i].id)
       {
           system("cls");
           printf("Persona Encontrada!!\n\n");
           printf("Seguro que desea modificar los datos de %s %s?\n\n",abonado[i].nombre,abonado[i].apellido);
           printf("S para confirmar, N para cancelar:\n\n");
           fflush(stdin);
           rta=getch();

           if(rta == 's' || rta == 'S')
           {
               printf("Ingrese nuevo nombre: ");
               gets(abonado[i].nombre);
               printf("Ingrese nuevo apellido:");
               gets(abonado[i].apellido);

               system("cls");
               printf("Modificacion Realizada con exito!\n\n");
               system("pause");
               system("cls");
               break;
           }
           else
           {
               system("cls");
               printf("\nModificacion cancelada!!");
               system("pause");
               break;
           }

       }
        else
       {
           printf("Persona no encontrada. ID inexistente\n");
       }
    }

}


void bajaAbonado(eAbonado abonado[], int tam)
{
    int i;
    int auxId;
    char rta;

    mostrarAbonado(abonado, tam);
    printf("\nIngrese ID de abonado a dar de baja:");
    scanf("%d",&auxId);

    for(i=0;i<tam;i++)
    {
        if(auxId == abonado[i].id)
        {
            printf("Persona Encontrada!!\n\n");
            printf("Seguro que desea dar de baja a %s %s?\n\n",abonado[i].nombre,abonado[i].apellido);

            rta = getch();

            if(rta == 's' || rta == 'S')
            {
                abonado[i].estado = 0;
                printf("Se ha dado de baja correctamente.\n\n");
                break;
            }
            else
            {
                printf("Baja cancelada!!\n\n");
                system("pause");
                break;
            }
        }
    }

    if(auxId != abonado[i].id)
    {
        printf("No se ha encontrado a la persona. ID inexistente.\n\n");
    }
}
