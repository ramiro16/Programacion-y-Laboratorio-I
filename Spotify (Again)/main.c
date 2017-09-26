#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


typedef struct
{
    int idInterprete;
    char nombre[100];
    char nacionalidad[100];
    int estadoI;

}eInterprete;

typedef struct
{
    int idCancion;
    int interprete;
    char titulo[100];
    float duracion;
    int estadoC;
}eCancion;

void inicializarCanciones(eCancion[], int);
void inicializarInterprete(eInterprete[], int);
void mostrarCancion(eCancion[], int);
void mostrarInterpretes(eInterprete[], int);
void cancionesxInterprete(eInterprete[],eCancion[],int ,int);
void bajaInterprete(eInterprete[], int);
void bajarCancion(eCancion[], int);
void modificarInterprete(eInterprete[], int);
void modificarCancion(eCancion[],int);
void mostrarCancionesArgentinas(eCancion[],int,eInterprete[],int);
void mostrarCancionConInterprete(eCancion[],int, eInterprete[],int);

int main()
{
    char seguir = 's';
    int opcion;

    eCancion cancion[10];
    eInterprete interprete[5];

    while(seguir == 's')
    {
        printf("1-.Alta cancion\n");
        printf("2-.Alta interprete\n");
        printf("3-.Mostrar canciones (Todas)\n");
        printf("4-.Mostrar interpretes(Todos)\n");
        printf("5-.Lista de canciones por interprete\n");
        printf("6-.Borrar interprete\n");
        printf("7-.Borrar canciones\n");
        printf("8-.Modificar interprete\n");
        printf("9-.Modificar canciones\n");
        printf("10-.Mostrar canciones artitas argentinos\n");
        printf("11-.Mostrar Cancion con nombre de interprete\n");
        printf("12-.Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
                case 1:
                    system("cls");
                    inicializarCanciones(cancion, 10);
                    system("cls");
                    break;

                case 2:
                    system("cls");
                    inicializarInterprete(interprete, 5);
                    system("cls");
                    break;

                case 3:
                    system("cls");
                    mostrarCancion(cancion, 10);
                    printf("\n");
                    system("pause");
                    system("cls");
                    break;

                case 4:
                    system("cls");
                    mostrarInterpretes(interprete, 5);
                    system("pause");
                    system("cls");
                    break;

                case 5:
                    system("cls");
                    cancionesxInterprete(interprete,cancion, 5, 10);
                    system("pause");
                    system("cls");
                    break;
                case 6:
                    system("cls");
                    bajaInterprete(interprete,5);
                    system("pause");
                    system("cls");

                    break;
                case 7:
                    system("cls");
                    bajarCancion(cancion,10);
                    system("pause");
                    system("cls");
                    break;
                case 8:
                    system("cls");
                    modificarInterprete(interprete,5);
                    system("pause");
                    system("cls");
                    break;
                case 9:
                    system("cls");
                    modificarCancion(cancion,10);
                    system("pause");
                    system("cls");
                    break;
                case 10:
                    system("cls");
                    mostrarCancionesArgentinas(cancion,10,interprete,5);
                    system("pause");
                    system("cls");
                    break;
                case 11:
                    system("cls");
                    mostrarCancionConInterprete(cancion,10, interprete,5);
                    system("pause");
                    system("cls");

                    break;
                case 12:
                    seguir = 'n';
                    break;
        }

    }

    system("cls");

    return 0;
}


void inicializarCanciones(eCancion cancion[], int tam)
{
    int i;

    int idCancion[]={1,2,3,4,5,6,7,8,9,10};
    int interprete[]={100,101,102,103,102,101,104,100,104,103};
    char titulo[][100]={"Bajan","Vuelve","Cactus","Immigrant Song","De musica ligera","Paginas quemadas","Power Of Love","Cantata","Identity","Kashmir"};
    float duracion[]={3.04,2.38,4.12,2.41,3.41,5.01,2.21,4.07,5.03,3.02};
    int estadoC[]={1,1,1,1,1,1,1,1,1,1};

    for(i=0;i<tam;i++)
    {
        cancion[i].idCancion = idCancion[i];
        cancion[i].interprete = interprete[i];
        strcpy(cancion[i].titulo,titulo[i]);
        cancion[i].duracion=duracion[i];
        cancion[i].estadoC =estadoC[i];
    }
}

void inicializarInterprete(eInterprete interprete[], int tam)
{
    int i;
    int idInterprete[]={100,101,102,103,104};
    char nombre[][100]={"L.A.Spinetta", "Beret","Gustavo Cerati","Led Zeppelin","Mamoru Miyano"};
    char nacionalidad[][100]={"Argentina","Español","Argentina","EE.UU","Japonesa"};
    int estadoI[]={1,1,1,1,1};

    for(i=0;i<tam;i++)
    {
        interprete[i].idInterprete=idInterprete[i];
        strcpy(interprete[i].nombre,nombre[i]);
        strcpy(interprete[i].nacionalidad, nacionalidad[i]);
        interprete[i].estadoI=estadoI[i];
    }
}


void mostrarCancion(eCancion cancion[], int tam)
{
    int i;
    printf("ID ------------------ TITULO -------------- INTERPRETE ---------- DURACION\n");

    for(i=0;i<tam;i++)
    {
        if(cancion[i].estadoC == 1)
        {
            printf("\n%d\t%20s\t%20d\t%15.2f\t",cancion[i].idCancion,cancion[i].titulo,cancion[i].interprete,cancion[i].duracion);
        }
    }

}

void mostrarInterpretes(eInterprete interprete[], int tam)
{
    int i;
    printf("\nID INTERPRETE ----------- NOMBRE ----------- NACIONALIDAD\n");

    for(i=0; i<tam;i++)
    {
        if(interprete[i].estadoI == 1)
        {
            printf("%d\t%25s\t%15s\n",interprete[i].idInterprete, interprete[i].nombre, interprete[i].nacionalidad);
        }

    }

}


void cancionesxInterprete(eInterprete interprete[],eCancion cancion[],int tamI, int tamC)
{
    int k,j;

    for(j=0; j<tamI; j++)
    {
        printf("%s:\n", interprete[j].nombre);

        for(k=0;k<tamC;k++)
        {
            if(cancion[k].interprete == interprete[j].idInterprete)
            {
                printf("%s\n",cancion[k].titulo);

            }
        }
                printf("\n");//Printf Cabeza 100% negro villero

    }

}

void bajaInterprete(eInterprete interprete[], int tam)
{
    int i;
    char opcion;
    int auxId;

    mostrarInterpretes(interprete, 5);

    printf("Ingrese ID del artista a dar de baja:\n");
    scanf("%d",&auxId);

    for(i=0;i<tam;i++)
    {
        if(auxId == interprete[i].idInterprete)
        {
            printf("Dar de baja esta wea...? S/N");
            fflush(stdin);
            opcion = getch();

            if(opcion == 's'|| opcion == 'S')
            {
                interprete[i].estadoI = 0;
                printf("\n\nSe ha dado de baja %s con exito!\n\n",interprete[i].nombre);
                break;
            }
                else if(interprete[i].idInterprete != auxId);
                {
                printf("No se encontro la wea con la misma ID\n");
                }
        }
    }
}

void bajarCancion(eCancion cancion[], int tam)
{
    int i, auxID;
    char rta;

    mostrarCancion(cancion, tam);

    printf("\n\nIngrese ID de la cancion que desea dar de baja:");
    scanf("%d",&auxID);

    for(i=0; i<tam; i++)
    {
        if(auxID == cancion[i].idCancion)
        {
            printf("Desea dar de baja esta cancion %s? S/N:\n\n",cancion[i].titulo);

            fflush(stdin);
            rta = getch();

            if(rta == 's'|| rta == 'S')
            {
                cancion[i].estadoC = 0;
            }
            else if(rta == 'n'|| rta == 'N')
            {
                printf("\n\nSe ha cancelado la operacion.\n");
            }
        }
    }
}

void modificarInterprete(eInterprete interprete[], int tam)
{
    int i,aux;
    char auxCadena[30];
    char auxCadena2[30];
    char rta;

    mostrarInterpretes(interprete,tam);

    printf("\n\nIngrese ID de interprete a modificar:");
    scanf("%d",&aux);

    for(i=0;i<tam;i++)
    {
        if(interprete[i].idInterprete == aux)
        {
            printf("Seguro que desea modificar el interprete? S/N");
            rta = getch();

            if(rta == 's'|| rta == 'S')
            {
            printf("\n\nIngrese nuevo nombre para el interprete:");
            fflush(stdin);
            gets(auxCadena);
            strcpy(interprete[i].nombre,auxCadena);

            printf("\n\nIngrese modificacion en nacionalidad: ");
            fflush(stdin);
            gets(auxCadena2);
            strcpy(interprete[i].nacionalidad,auxCadena2);

            break;

            }
            else
            {
                printf("Se ha cancelado la operacion!!");
                break;
            }

        }
    }
}

void modificarCancion(eCancion cancion[], int tam)
{
    int i,aux;
    char auxCadena[30];
    char rta;

    mostrarCancion(cancion,tam);

    printf("\n\nIngrese ID de cancion a modificar:");
    scanf("%d",&aux);

    for(i=0;i<tam;i++)
    {
        if(cancion[i].idCancion == aux)
        {
            printf("Seguro que desea modificar la cancion? S/N");
            rta = getch();

            if(rta == 's'|| rta == 'S')
            {
            printf("\n\nIngrese nuevo nombre para la cancion:");
            fflush(stdin);
            gets(auxCadena);
            strcpy(cancion[i].titulo,auxCadena);

            printf("\n\nIngrese modificacion en duracion: ");
            scanf("%f",cancion[i].duracion);

            break;

            }
            else
            {
                printf("Se ha cancelado la operacion!!");
                break;
            }

        }
    }
}


void mostrarCancionesArgentinas(eCancion cancion[],int tamC, eInterprete interprete[], int tamI)
{
    int i,j;

    for(i=0;i<tamI;i++)
    {
        if(strcmp(interprete[i].nacionalidad,"Argentina")==0)
        {
            for(j=0;j<tamC;j++)
            {
                if( interprete[i].idInterprete == cancion[j].interprete)
                {
                    printf("%s ----- %s\n",interprete[i].nombre,cancion[j].titulo);
                }
            }
        }
    }
}

void mostrarCancionConInterprete(eCancion cancion[], int tamC,eInterprete interprete[], int tamI)
{
    int i,j;

    printf("TITULO DE CANCION--------------INTERPRETE\n\n");

    for(i=0;i<tamI;i++)
    {
        for(j=0;j<tamC;j++)
        {
            printf("%s\t\t\t%s\n", cancion[j].titulo,interprete[i].nombre);
            break;
        }
    }
}
