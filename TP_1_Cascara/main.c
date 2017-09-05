#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float pedirNumero(float);
float suma(float,float);
float resta(float,float);
float division(float,float);
float multiplicacion(float, float);
int verificarEntero(float);
long long int factorial(int);

int main()
{
    char seguir='s';
    int opcion=0;
    float numero1, numero2;
    int flag1=0,flag2=0;
    float resultadoSuma, resultadoResta, resultadoDivision, resultadoMultiplicacion, resultadoFactorial;
    int auxFactorial;

    while(seguir=='s')
    {
        if(flag1==0)
        {
            printf("1- Ingresar 1er operando (A=x)\n");
        }
        else
        {
            printf("1- Ingresar 1er operando (A=%.2f)\n",numero1);
        }

        if(flag2==0)
        {
            printf("2- Ingresar 2do operando (B=y)\n");
        }
        else
        {
            printf("2- Ingresar 2do operando (B=%.2f)\n",numero2);
        }


        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                system("cls");
                numero1 = pedirNumero(numero1);
                flag1 = 1;
                system("cls");
                break;

            case 2:
                system("cls");
                numero2 = pedirNumero(numero2);
                flag2 = 1;
                system("cls");
                break;

            case 3:
                resultadoSuma = suma(numero1,numero2);
                system("cls");
                printf("El resultado de la suma es: %.2f\n",resultadoSuma);
                system("pause");
                system("cls");
                break;


            case 4:
                resultadoResta = resta(numero1, numero2);
                system("cls");
                printf("El resultado de la resta es: %.2f\n",resultadoResta);
                system("pause");
                system("cls");
                break;

            case 5:
                resultadoDivision = division(numero1, numero2);
                if(numero2 == 0)
                {
                    system("cls");
                    printf("No se puede dividir entre 0. Ingrese un valor en B mayor a 0...\n");
                    system("pause");
                }
                else
                    {
                        system("cls");
                        printf("El resultado de la division es: %.2f\n",resultadoDivision);
                        system("pause");
                        system("cls");
                    }
                break;

            case 6:
                resultadoMultiplicacion = multiplicacion(numero1, numero2);
                system("cls");
                printf("El resultado de la multiplicacion es: %.2f\n",resultadoMultiplicacion);
                system("pause");
                system("cls");
                break;

            case 7:
                auxFactorial = verificarEntero(numero1);
                if(auxFactorial == 0)
                {
                    printf("No se puede sacar el factorial del numero. Ingrese un numero entero...");
                }
                else
                    {

                    resultadoFactorial = factorial(numero1);
                    system("cls");
                    printf("El resultado del factorial es: %lld\n",resultadoFactorial);
                    system("pause");
                    system("cls");

                    }

                break;

            case 8:
                break;
            case 9:
                seguir = 'n';
                break;
        }

    }

    return 0;
}

float pedirNumero(float numero)
{
    printf("Ingrese un numero: ");
    scanf("%f",&numero);

    return numero;
}


float suma(float numeroA, float numeroB)
{
    float resultado;
    resultado = numeroA + numeroB;
    return resultado;
}

float resta(float numeroA, float numeroB)
{
    float resultado;
    resultado = numeroA - numeroB;
    return resultado;
}

float division(float numeroA, float numeroB)
{
    float resultado;
    resultado = numeroA / numeroB;
    return resultado;
}

float multiplicacion(float numeroA, float numeroB)
{
    float resultado;
    resultado= numeroA * numeroB;
    return resultado;
}

int verificarEntero(float numeroA)
{
    int auxiliarFact;
    int entero = 0;

    auxiliarFact = (int)numeroA;

    if(numeroA - auxiliarFact == 0)
    {
        entero = 1;
    }

    return entero;
}

long long int factorial(int numeroA)
{
    long long int resultado;

    if(numeroA == 0)
    {
        resultado = 1;
        return 1;
    }
    else
    {
    resultado = numeroA * factorial(numeroA-1);
    return resultado;

    }


}
