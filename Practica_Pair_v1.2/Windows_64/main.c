#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"

/****************************************************
    Menu:
        1. Parse del archivo data.csv
        2. Listar Empleados
        3. Ordenar por nombre
        4. Agregar un elemento
        5. Elimina un elemento
        6. Listar Empleados (Desde/Hasta)
*****************************************************/


int main()
{
    int i;
    Employee* auxEmpleado;
    ArrayList* lista = al_newArrayList();

    Employee* empleado1;
    Employee* empleado2;
    Employee* empleado3;

    empleado1=employee_new(1,"Maria","Sanchez",1);
    empleado2=employee_new(2,"Pedro","Gomez",1);
    empleado3=employee_new(3,"Ignacio","Ferreyra",1);

    lista->add(lista,empleado1);
    lista->add(lista,empleado2);
    lista->add(lista,empleado3);

    for(i=0;i<lista->len(lista);i++)
    {
        auxEmpleado = (Employee*) lista->get(lista,i);
        employee_print(auxEmpleado);
    }

    return 0;
}
