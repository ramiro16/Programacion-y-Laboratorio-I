#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "lib.h"

#define TamA 5
#define TamR 10


void inicializarLlamada(eReclamo[],int);

void nuevaLlamada(eReclamo[],int);
void mostrarLlamada(eReclamo[],int);

int main()
{
    char seguir='s';
    int opcion=0;
    eAbonado abonado[TamA];
    eReclamo reclamo[TamR];

    while(seguir=='s')
    {
        printf("1- Alta abonado\n");
        printf("2- Modificar datos del abonado\n");
        printf("3- Baja abonado\n");
        printf("4- Nueva llamada\n");
        printf("5- Fin llamda\n");
        printf("6- Informar\n\n");

        printf("7- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                system("cls");
                cargaAbonado(abonado, TamA);
                system("cls");

                break;
            case 2:
                system("cls");
                modificarAbonado(abonado,TamA);
                system("cls");
                break;
            case 3:
                system("cls");
                bajaAbonado(abonado,TamA);
                system("pause");
                system("cls");
                break;
            case 4:
                system("cls");
                nuevaLlamada(reclamo,TamR);
                system("pause");
                system("cls");
                break;
            case 5:

                break;
            case 6:

                printf("1- Mostrar abonado\n");
                printf("2- Mostrar llamada en curso");

                switch(opcion)
                {
                    case 1:
                        system("cls");
                        mostrarAbonado(abonado,TamA);
                        system("pause");
                        system("cls");
                        break;

                    case 2:
                        system("cls");
                        mostrarLlamada(reclamo,TamR);
                        system("pause");
                        system("cls");
                        break;
                }

                break;
            case 7:
                seguir = 'n';
                break;
        }
    }

    return 0;
}

void nuevaLlamada(eReclamo reclamo[],int tam)
{
    int i;
    int numeroReclamo[10];
    char estado[10][100];
    int tiempo[10];
    char motivo[10][100];
    int estadoReclamo[10];

    int generadorNumeroReclamo = 0;
    int casereclamo;

    inicializarLlamada(reclamo,tam);

    for(i=0;i<tam;i++)
    {
      reclamo[i].numeroReclamo = generadorNumeroReclamo++;

      printf("Ingrese motivo de llamada: \n");
      printf("1-Falla 3G\n2-Falla LTE\n3-Falla Equipo\n");

      switch(casereclamo)
      {
          case 1:
            strcpy(reclamo[i].motivo,"Falla 3G");
            break;
          case 2:
            strcpy(reclamo[i].motivo,"Falla LTE");
            break;
          case 3:
            strcpy(reclamo[i].motivo,"Falla Equipo");
            break;
      }

      strcpy(reclamo[i].estado,"EN CURSO");

      reclamo[i].estadoReclamo = 1;

      break;
    }
}

void mostrarLlamada(eReclamo reclamo[], int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        if(reclamo[i].estadoReclamo = 1)
        {
            printf("Numero de reclamo:%d\n",reclamo[i].numeroReclamo);
            printf("Motivo: %s\n",reclamo[i].motivo);
            printf("Estado del reclamo. %s\n", reclamo[i].estado);

        }
    }
}

void inicializarLlamada(eReclamo reclamo[],int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        reclamo[i].estadoReclamo = 0;
    }
}
