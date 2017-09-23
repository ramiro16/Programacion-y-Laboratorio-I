typedef struct
{
    char nombre[50];
    char apellido[50];
    int edad;
    int id;
    int estado;

}eAbonado;

typedef struct
{
    int numeroReclamo;
    char motivo[100];
    char estado[100];
    int estadoReclamo;
    int tiempo;

}eReclamo;

void cargaAbonado(eAbonado[],int);
void mostrarAbonado(eAbonado[],int);
void modificarAbonado(eAbonado[],int);
void bajaAbonado(eAbonado[],int);
