#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[15];
    char apellido[20];
    char apellidoNombre[50];

    //char auxNombre[15];
    //char auxApellido[15];

    printf("Ingrese su nombre: \n");
    fflush(stdin);
    gets(nombre);

    printf("Ingrese su apellido: \n");
    fflush(stdin);
    gets(apellido);


    strcat(apellido,nombre);

    strcpy(apellidoNombre,apellido);

    puts(apellidoNombre);






    return 0;
}
