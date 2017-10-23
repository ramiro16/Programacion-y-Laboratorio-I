#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"


int employee_compare(void* pEmployeeA,void* pEmployeeB)
{
    return 0;
}


void employee_print(Employee* this)
{

    printf("%d---%s---%s---%d\n",this->id,this->name,this->lastName,this->isEmpty);

}


Employee* employee_new(int id, char* nombre, char* apellido, int estado)
{
    Employee* pEmpleado = (Employee*)malloc(sizeof(Employee));

    if(pEmpleado!=NULL)
    {
        pEmpleado->id = id;
        strcpy(pEmpleado->name, nombre);
        strcpy(pEmpleado->lastName, apellido);
        pEmpleado->isEmpty = estado;
    }

    return pEmpleado;

}

void employee_delete(Employee* this)
{


}

int employee_setId(Employee* this, int id)
{

    return 0;

}

int employee_getId(Employee* this)
{

    return 0;

}


