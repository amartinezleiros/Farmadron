#include "Almacenes.cpp"
#include "Calendario.cpp"
#include "Iniciargestion.cpp"
#include "Pacientes.cpp"
#include "Pedidos.cpp"
#include "Rutas.cpp"
#include <math.h>

char LetraPulsada;
float q;
int main()
{

    pedidos pe;
    pacientes pa;
    calendario ca;
    iniciargestion ge;
    almacenes al;
    rutas ru;

    do
    {

        printf("Gesti%cn de FarmaDrones: Distribuci%cn de F%crmacos\n", 162, 162, 160);

        printf("     Iniciar Gesti%cn                      (Pulsar I)\n", 162);

        printf("     Alta almacen                         (Pulsar M)\n");

        printf("     Alta paciente almacen                (Pulsar A)\n");

        printf("     Ubicar pacientes                     (Pulsar U)\n");

        printf("     Nuevo Pedido                         (Pulsar N)\n");

        printf("     Lista Diaria de pedidos              (Pulsar L)\n");

        printf("     Programar rutas diarias del dron     (Pulsar P)\n");

        printf("     Representar rutas diarias del dron   (Pulsar R)\n");

        printf("     Calendario mensual de pedidos        (Pulsar C)\n");

        printf("     Salir                                (Pulsar S)\n");

        printf("Teclear una opci%cn v%clida (I|M|A|U|N|L|P|R|C|S)?\n", 162, 160);

        scanf(" %[^\n]c", &LetraPulsada);
        if (LetraPulsada == 'A' || LetraPulsada == 'a')
        {
            LetraPulsada = 'A';
        }
        else if (LetraPulsada == 'U' || LetraPulsada == 'u')
        {
            LetraPulsada = 'U';
        }
        else if (LetraPulsada == 'N' || LetraPulsada == 'n')
        {
            LetraPulsada = 'N';
        }
        else if (LetraPulsada == 'L' || LetraPulsada == 'l')
        {
            LetraPulsada = 'L';
        }
        else if (LetraPulsada == 'C' || LetraPulsada == 'c')
        {
            LetraPulsada = 'C';
        }
        else if (LetraPulsada == 'S' || LetraPulsada == 's')
        {
            LetraPulsada = 'S';
        }
        else if (LetraPulsada == 'I' || LetraPulsada == 'i')
        {
            LetraPulsada = 'I';
        }
        else if (LetraPulsada == 'M' || LetraPulsada == 'm')
        {
            LetraPulsada = 'M';
        }
        else if (LetraPulsada == 'P' || LetraPulsada == 'p')
        {
            LetraPulsada = 'P';
        }
        else if (LetraPulsada == 'R' || LetraPulsada == 'r')
        {
            LetraPulsada = 'R';
        }

        switch (LetraPulsada)
        {

        case 'A':
            pa.altaPaciente();
            break;

        case 'U':
            pa.ubicarPaciente();
            break;

        case 'N':
            pe.nuevoPedido();
            break;

        case 'L':
            pe.listarPedidos();
            break;

        case 'I':
            ge.iniciarGestion();
            break;

        case 'M':
            al.altaAlmacen();
            break;

        case 'P':
            ru.programarRutas();
            break;

        case 'R':
            ru.representarRutas();
            break;

        case 'C':
            ca.calendarioMensual();
            break;

        case 'S':
            printf("Ha finalizado el programa");
            break;
        }

    } while (LetraPulsada != 'S');

    printf("\n\n");
}
