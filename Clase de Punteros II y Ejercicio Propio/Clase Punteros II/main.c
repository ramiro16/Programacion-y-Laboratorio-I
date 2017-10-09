#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int dni;
    char nombre[15];
    float altura;
    float peso;
    int edad;

}ePersona;

int altaPersona(ePersona*,char[],int,int,float,float);

int main()
{
    char seguir='s';
    int opcion=0;
    int i;

    ePersona persona[5];

    //Variables Auxiliares

    int dni;
    int edad;
    char nombre[15];
    float altura;
    float peso;

    //Variables Auxiliares

    for(i=0;i<5;i++)
    {
        printf("Ingrese nombre de persona:");
        fflush(stdin);
        gets(nombre);

        printf("Ingrese edad de persona:");
        scanf("%d",&edad);

        printf("Ingrese DNI de persona:");
        scanf("%d",&dni);

        printf("Ingrese altura de persona:");
        scanf("%d",&altura);

        printf("Ingrese peso de persona:");
        scanf("%d",&peso);

        validacion = altaPersona(persona+i,nombre,edad,dni,altura,peso);

        if(validacion == 1)
        {
            printf("Se ha dado de alta a la persona!\n");
        }
        else
        {
            printf("No hay espacio para generar persona!\n");
        }

    }

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Ordenar personas\n");
        printf("4- Mostrar personas\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;

            default:
                system("cls");
                printf("Opcion inexistente. Ingrese nuevamente una opcion.");
                system("pause");
                system("cls");
                break;
        }
    }

    return 0;
}

int altaPersona(ePersona* punteroAPersona, char nombre[], int edad, int dni, float altura, float peso)
{
    flagRetorno = 0;

    if(punteroAPersona != NULL)
    {
        strcpy(punteroAPersona->nombre, nombre);
        punteroAPersona->edad = edad;
        punteroAPersona->dni = dni;
        punteroAPersona->altura = altura;
        punteroAPersona->peso = peso;

        flagRetorno = 1;
    }

    return flagRetorno;
}

