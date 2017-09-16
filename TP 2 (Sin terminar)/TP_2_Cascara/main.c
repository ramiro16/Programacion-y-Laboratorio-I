#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

#define TAM 3


int main()
{
    char seguir='s';
    int opcion=0, i, auxDni, indice;
    EPersona personas[TAM];

    // Inicializador de estados en 0.------------------ //

    for(i=0;i<TAM; i++)
    {
        personas[i].estado = 0;
    }

    // -------------------------------------------------//

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:

                system("cls");


                for(i=0;i<TAM;i++)
                {
                    indice = obtenerEspacioLibre(personas);
                    printf("%d",indice);

                    if(personas[i].estado == 0)
                    {
                        printf("Ingrese nombre: ");
                        fflush(stdin);
                        gets(personas[i].nombre);

                        printf("\nIngrese edad: ");
                        scanf("%d",&personas[i].edad);

                        printf("\nIngrese DNI: ");
                        scanf("%d",&personas[i].dni);

                        personas[i].estado = 1;

                        break;
                    }

                }

                system("cls");

                break;
            case 2:

                system("cls");

                printf("Ingrese DNI de la persona que desea borrar");
                scanf("%d",&auxDni);

                for(i=0;i<TAM;i++)
                {
                    if(auxDni == personas[i].dni)
                    {
                        printf("DNI encontrado\n. Datos de la persona.\n Nombre:%s\t Edad:%d\t DNI:%d", personas[i].nombre,personas[i].edad,personas[i].dni);
                        printf("Desea eliminar los datos de la persona buscada? S/N");
                        seguir = getch();

                        if(seguir == 's')
                        {
                            personas[i].estado = 0;
                        }
                    }
                }

                system("cls");

                break;
            case 3:

                system("cls");

                for(i=0;i<TAM;i++)
                {
                    if(personas[i].estado == 1)
                    {
                    printf("Nombre:%s\tEdad:%d\tDNI:%d\n",personas[i].nombre,personas[i].edad,personas[i].dni);
                    }
                }
                break;

            case 4:
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}


int obtenerEspacioLibre(EPersona persona[] )
{
    int i;

    for(i=0; i<20; i++)
    {
        if(persona[i].estado == 0)
        {
            return i;
        }
    }

    return 1;
}
