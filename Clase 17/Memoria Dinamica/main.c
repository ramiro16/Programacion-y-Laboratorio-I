#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int legajo;
    char nombre[50];
    int nota;

} eRecursante;

eRecursante* newRecursante(eRecursante*,int,int,char*);
void mostrarRecursante(eRecursante*);

int main()
{

    eRecursante* pRecursante;

    pRecursante = newRecursante(pRecursante,100,4,"Pepito");

    mostrarRecursante(pRecursante);

    return 0;
}

eRecursante* newRecursante(eRecursante* pRecursante, int legajo, int nota, char* nombre)
{
    pRecursante = (eRecursante*)malloc(sizeof(eRecursante));

    if(pRecursante != NULL)
    {
        pRecursante->legajo = legajo;
        pRecursante->nota = nota;
        strcpy(pRecursante->nombre, nombre);
    }
}

void mostrarRecursante(eRecursante* pRecursante)
{

    printf("Nombre:%s--Legajo:%d--Nota:%d", pRecursante->nombre,pRecursante->legajo,pRecursante->nota);

}
