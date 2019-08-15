#include <stdio.h>
#include <conio.h>

typedef struct
{
    int id;
    char nombreYApellido[100];
    int idSucursal;
} Empleado;

typedef struct
{
    int id;
    char nombreYApellido[100];
    int idRuta;
    int conductores[100];
} Transporte;

int main()
{
    Empleado empleados[1000];
    Transporte transportes[200];
}
