#include <stdio.h>
#include <string.h>
#include "Almacenes.h"
#include "Pacientes.h"
#include "Pedidos.h"
#include "IniciarGestion.h"

void empt_stdin(void)
{
    int c = getchar();

    while (c != '\n' && c != EOF)
        c = getchar();
}

void almacenes::altaAlmacen()
{
    printf("Alta nuevo almacen\n\n");
    if (contadoralmacen > 10)
    {
        do
        {
            if (alm == '.')
            {
                printf("      Escribe una S(si) o una N(no)\n");
            }
            printf("      Desea borrar alg%cn almacen(S/N)?:", 163);
            scanf(" %c", &alm);
            if (alm == 'n' || alm == 'N')
            {
                alm = 'N';
            }
            if (alm == 's' || alm == 'S')
            {
                alm = 'S';
            }
            if (alm == 'S' || alm == 'N')
            {
            }
            else
            {
                alm = '.';
            }
        } while (alm != 'S' && alm != 'N');

        if (alm == 'S' || alm == 's')
        {

            for (;;)
            {
                printf("\n      Que almacen desea borrar?(Numero entre 0 y 10):");

                rtn = scanf(" %d", &input);

                if (rtn == 0)
                {
                    fputs("      Tiene que introducir un numero entero.\n", stderr);
                    empt_stdin();
                }
                else if (input < 1 || input > 10)
                {
                    fputs("      Tiene que introducir de un almacen existente del 1 al 10.\n", stderr);
                    empt_stdin();
                }
                else if (input >= 1 || input < contadoralmacen)
                {
                    almm = input;
                    empt_stdin();
                    break;
                }
            }


            do
            {

                do
                {
                    printf("\n      Direcci%cn almacen? (entre 1 y 48 caracteres):", 162);
                    scanf(" %[^\n]s", &almacen[almm].calle);
                    longi = strlen(almacen[almm].calle);
                } while (longi < 1 || longi > 48);
                do
                {
                    printf("\n      Municipio almacen? (entre 1 y 48 caracteres):");
                    scanf(" %[^\n]s", &almacen[almm].municipio);
                    longi = strlen(almacen[almm].municipio);
                } while (longi < 1 || longi > 48);
                do
                {
                    printf("\n      Provincia almacen? (entre 1 y 16 caracteres):");
                    scanf(" %[^\n]s", &almacen[almm].provincia);
                    longi = strlen(almacen[almm].provincia);
                } while (longi < 1 || longi > 16);
                do
                {
                    printf("\n      Descripci%cn almacen? (entre 1 y 48 caracteres):", 162);
                    scanf(" %[^\n]s", &almacen[almm].descripcion);
                    longi = strlen(almacen[almm].descripcion);
                } while (longi < 1 || longi > 48);
                do
                {
                    if (datoscorrectos == '.')
                    {
                        printf("      Escribe una S(si) o una N(no)\n");
                    }
                    printf("\n      Datos correctos(S/N)?:");
                    scanf(" %[^\n]c", &datoscorrectos);

                    if (datoscorrectos == 'n' || datoscorrectos == 'N')
                    {
                        datoscorrectos = 'N';
                    }
                    if (datoscorrectos == 's' || datoscorrectos == 'S')
                    {
                                  for(int i=0;i<100;i++){
              if(pedido[i].almac == almm){
                  pedido[i].almac = pedido[contadorpedidos].almac;
                  pedido[i].DiaEnvio = pedido[contadorpedidos].DiaEnvio;
                  pedido[i].MesEnvio = pedido[contadorpedidos].MesEnvio;
                  pedido[i].AnoEnvio = pedido[contadorpedidos].AnoEnvio;
                  strcpy(pedido[i].items[0].nombrefarmaco,pedido[contadorpedidos].items[0].nombrefarmaco);
                  strcpy(pedido[i].items[1].nombrefarmaco, pedido[contadorpedidos].items[1].nombrefarmaco);
                  strcpy(pedido[i].items[2].nombrefarmaco, pedido[contadorpedidos].items[2].nombrefarmaco);
                  strcpy(pedido[i].items[3].nombrefarmaco, pedido[contadorpedidos].items[3].nombrefarmaco);
                  strcpy(pedido[i].items[4].nombrefarmaco, pedido[contadorpedidos].items[4].nombrefarmaco);
                  pedido[i].items[0].pesofarmaco = pedido[contadorpedidos].items[0].pesofarmaco;
                  pedido[i].items[1].pesofarmaco = pedido[contadorpedidos].items[1].pesofarmaco;
                  pedido[i].items[2].pesofarmaco = pedido[contadorpedidos].items[2].pesofarmaco;
                  pedido[i].items[3].pesofarmaco = pedido[contadorpedidos].items[3].pesofarmaco;
                  pedido[i].items[4].pesofarmaco = pedido[contadorpedidos].items[4].pesofarmaco;
                  pedido[i].items[0].unidadesfarmaco = pedido[contadorpedidos].items[0].unidadesfarmaco;
                  pedido[i].items[1].unidadesfarmaco = pedido[contadorpedidos].items[1].unidadesfarmaco;
                  pedido[i].items[2].unidadesfarmaco = pedido[contadorpedidos].items[2].unidadesfarmaco;
                  pedido[i].items[3].unidadesfarmaco = pedido[contadorpedidos].items[3].unidadesfarmaco;
                  pedido[i].items[4].unidadesfarmaco = pedido[contadorpedidos].items[4].unidadesfarmaco;
                  pedido[i].almac = pedido[contadorpedidos].almac;
                  pedido[i].refinterno = pedido[contadorpedidos].refinterno;
                  pedido[i].NumeroEnvio = pedido[contadorpedidos].NumeroEnvio;
                  pedido[i].RefPaciente = pedido[contadorpedidos].RefPaciente;
                  contadorpedidos--;
                }
              if(paciente[i].almac == almm){
                  paciente[i].ref = paciente[contadorpaciente].ref;
                  paciente[i].distancia = paciente[contadorpaciente].distancia;
                  paciente[i].angulo = paciente[contadorpaciente].angulo;
                  paciente[i].almac = paciente[contadorpaciente].almac;
                  paciente[i].refinterno = paciente[contadorpaciente].refinterno;
                  strcpy(paciente[i].nombre, paciente[contadorpaciente].nombre);
                  contadorpaciente--;
                }
              }
                        datoscorrectos = 'S';
                    }
                    if (datoscorrectos == 'S' || datoscorrectos == 'N')
                    {
                    }
                    else
                    {
                        datoscorrectos = '.';
                    }

                } while (datoscorrectos != 'S' && datoscorrectos != 'N');
            } while (datoscorrectos != 'S');
            contadoralmacen++;
            datoscorrectos = 'a';
            almm = 0;
            if (almm < 0 || almm > 10)
            {
                printf("\n      Tiene que ser entre el 0 y el 10.");
            }
            else
            {
            }
        }
    }
    else
    {
        do
        {

            for (;;)
            {
                printf("\n      Identificador almacen (cod. de almacen 1 a 10)?:");

                rtn = scanf(" %d", &input);

                if (rtn == 0)
                {
                    fputs("      Tiene que introducir un numero entero.\n", stderr);
                    empt_stdin();
                }
                else if (input < 1 || input > 10)
                {
                    fputs("      Tiene que introducir un numero del 1 al 10.\n ", stderr);
                    empt_stdin();
                }
                else if (almacen[0].codigo == input || almacen[1].codigo == input || almacen[2].codigo == input || almacen[3].codigo == input || almacen[4].codigo == input || almacen[5].codigo == input || almacen[6].codigo == input || almacen[7].codigo == input || almacen[8].codigo == input || almacen[9].codigo == input)
                {
                    fputs("      Ese almacen ya existe, introduzca otro\n ", stderr);
                    empt_stdin();
                }
                else if (input >= 1 || input < contadoralmacen)
                {
                    almacen[contadoralmacen].codigo = input;
                    empt_stdin();
                    break;
                }
            }
            do
            {
                printf("      Direcci%cn almacen? (entre 1 y 48 caracteres):", 162);
                scanf(" %[^\n]s", &almacen[contadoralmacen].calle);
                longi = strlen(almacen[contadoralmacen].calle);
            } while (longi < 1 || longi > 48);
            do
            {
                printf("      Municipio almacen? (entre 1 y 48 caracteres):");
                scanf(" %[^\n]s", &almacen[contadoralmacen].municipio);
                longi = strlen(almacen[contadoralmacen].municipio);
            } while (longi < 1 || longi > 48);
            do
            {
                printf("      Provincia almacen? (entre 1 y 16 caracteres):");
                scanf(" %[^\n]s", &almacen[contadoralmacen].provincia);
                longi = strlen(almacen[contadoralmacen].provincia);
            } while (longi < 1 || longi > 16);
            do
            {
                printf("      Descripci%cn almacen? (entre 1 y 48 caracteres):", 162);
                scanf(" %[^\n]s", &almacen[contadoralmacen].descripcion);
                longi = strlen(almacen[contadoralmacen].descripcion);
            } while (longi < 1 || longi > 48);
            do
            {
                if (datoscorrectos == '.')
                {
                    printf("      Escribe una S(si) o una N(no)\n");
                }
                printf("\n      Datos correctos(S/N)?:");
                scanf(" %[^\n]c", &datoscorrectos);

                if (datoscorrectos == 'n' || datoscorrectos == 'N')
                {
                    datoscorrectos = 'N';
                    almacen[contadoralmacen].codigo = 0;
                }
                if (datoscorrectos == 's' || datoscorrectos == 'S')
                {
                    datoscorrectos = 'S';
                }
                if (datoscorrectos == 'S' || datoscorrectos == 'N')
                {
                }
                else
                {
                    datoscorrectos = '.';
                }

            } while (datoscorrectos != 'S' && datoscorrectos != 'N');
        } while (datoscorrectos != 'S');
        contadoralmacen++;
        datoscorrectos = 'a';
        printf("\n\n");
    }
}
