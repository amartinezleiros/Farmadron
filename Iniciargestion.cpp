#include <stdio.h>
#include "Iniciargestion.h"
#include "Pedidos.h"
#include "Almacenes.h"

void iniciargestion::iniciarGestion()
{
  if(check == 0 ) {
    contadorpaciente = 0;

    almacen[contadoralmacen].codigo = 1;
    almacen[contadoralmacen + 1].codigo = 2;
    almacen[contadoralmacen + 2].codigo = 3;
    almacen[contadoralmacen + 3].codigo = 4;
    almacen[contadoralmacen + 4].codigo = 5;

    strcpy(almacen[contadoralmacen].calle, "Rua Pardo bazan, 4");
    strcpy(almacen[contadoralmacen + 1].calle, "Calle Real, 24");
    strcpy(almacen[contadoralmacen + 2].calle, "Calle da Terra, 10");
    strcpy(almacen[contadoralmacen + 3].calle, "Carretera de Castilla, 17");
    strcpy(almacen[contadoralmacen + 4].calle, "Carretera de castilla, 94");

    strcpy(almacen[contadoralmacen].municipio, "Ferrol");
    strcpy(almacen[contadoralmacen + 1].municipio, "Ferrol");
    strcpy(almacen[contadoralmacen + 2].municipio, "Ferrol");
    strcpy(almacen[contadoralmacen + 3].municipio, "Ferrol");
    strcpy(almacen[contadoralmacen + 4].municipio, "Ferrol");

    strcpy(almacen[contadoralmacen].provincia, "A corunha");
    strcpy(almacen[contadoralmacen + 1].provincia, "A corunha");
    strcpy(almacen[contadoralmacen + 2].provincia, "A corunha");
    strcpy(almacen[contadoralmacen + 3].provincia, "A corunha");
    strcpy(almacen[contadoralmacen + 4].provincia, "A corunha");

    strcpy(almacen[contadoralmacen].descripcion, "Tejeras");
    strcpy(almacen[contadoralmacen + 1].descripcion, "Centro de Ferrol");
    strcpy(almacen[contadoralmacen + 2].descripcion, "Centro de Ferrol");
    strcpy(almacen[contadoralmacen + 3].descripcion, "Enfrente al mercado");
    strcpy(almacen[contadoralmacen + 4].descripcion, "Ultramar");
    contadoralmacen = contadoralmacen + 5;

    strcpy(paciente[contadorpaciente].nombre, "Jose Manuel");
    paciente[contadorpaciente].distancia = 4500;
    paciente[contadorpaciente].angulo = 1900;
    paciente[contadorpaciente].almac = 1;
    paciente[contadorpaciente].refinterno = refalm1;
    paciente[contadorpaciente].ref = contadorpaciente+1;
    contadorref++;
    refalm1++;
    contadorpaciente++;

    strcpy(paciente[contadorpaciente].nombre, "Maria Margarita");
    paciente[contadorpaciente].distancia = 5300;
    paciente[contadorpaciente].angulo = 1100;
    paciente[contadorpaciente].almac = 1;
    paciente[contadorpaciente].refinterno = refalm1;
    paciente[contadorpaciente].ref = contadorpaciente+1;
    contadorref++;
    refalm1++;
    contadorpaciente++;

    strcpy(paciente[contadorpaciente].nombre, "Juan Lopez");
    paciente[contadorpaciente].distancia = 7750;
    paciente[contadorpaciente].angulo = 500;
    paciente[contadorpaciente].almac = 1;
    paciente[contadorpaciente].refinterno = refalm1;
    paciente[contadorpaciente].ref = contadorpaciente+1;
    contadorref++;
    refalm1++;
    contadorpaciente++;

    strcpy(paciente[contadorpaciente].nombre, "Juan Jose");
    paciente[contadorpaciente].distancia = 8000;
    paciente[contadorpaciente].angulo = 1850;
    paciente[contadorpaciente].almac = 3;
    paciente[contadorpaciente].refinterno = refalm3;
    paciente[contadorpaciente].ref = contadorpaciente+1;
    contadorref++;
    refalm3++;
    contadorpaciente++;

    strcpy(paciente[contadorpaciente].nombre, "Irene Martinez");
    paciente[contadorpaciente].distancia = 4800;
    paciente[contadorpaciente].angulo = 800;
    paciente[contadorpaciente].almac = 4;
    paciente[contadorpaciente].refinterno = refalm4;
    paciente[contadorpaciente].ref = contadorpaciente+1;
    contadorref++;
    refalm4++;
    contadorpaciente++;

    strcpy(paciente[contadorpaciente].nombre, "Abel Perez");
    paciente[contadorpaciente].distancia = 6300;
    paciente[contadorpaciente].angulo = 1600;
    paciente[contadorpaciente].almac = 5;
    paciente[contadorpaciente].refinterno = refalm5;
    paciente[contadorpaciente].ref = contadorpaciente+1;
    contadorref++;
    refalm5++;
    contadorpaciente++;

    strcpy(paciente[contadorpaciente].nombre, "Claudio Niebla");
    paciente[contadorpaciente].distancia = 7500;
    paciente[contadorpaciente].angulo = 1000;
    paciente[contadorpaciente].almac = 2;
    paciente[contadorpaciente].refinterno = refalm2;
    paciente[contadorpaciente].ref = contadorpaciente+1;
    contadorref++;
    refalm2++;
    contadorpaciente++;

    strcpy(paciente[contadorpaciente].nombre, "Cristian Garrido");
    paciente[contadorpaciente].distancia = 3500;
    paciente[contadorpaciente].angulo = 270;
    paciente[contadorpaciente].almac = 1;
    paciente[contadorpaciente].refinterno = refalm1;
    paciente[contadorpaciente].ref = contadorpaciente+1;
    contadorref++;
    refalm1++;
    contadorpaciente++;

    strcpy(paciente[contadorpaciente].nombre, "Patricia Dos Santos");
    paciente[contadorpaciente].distancia = 450;
    paciente[contadorpaciente].angulo = 850;
    paciente[contadorpaciente].almac = 2;
    paciente[contadorpaciente].refinterno = refalm2;
    paciente[contadorpaciente].ref = contadorpaciente+1;
    contadorref++;
    refalm2++;
    contadorpaciente++;

    strcpy(paciente[contadorpaciente].nombre, "Melisa Pinar");
    paciente[contadorpaciente].distancia = 9300;
    paciente[contadorpaciente].angulo = 1400;
    paciente[contadorpaciente].almac = 3;
    paciente[contadorpaciente].refinterno = refalm3;
    paciente[contadorpaciente].ref = contadorpaciente+1;
    contadorref++;
    refalm3++;
    contadorpaciente++;

    pedido[contadorpedidos].DiaEnvio = 1;
    pedido[contadorpedidos + 1].DiaEnvio = 15;
    pedido[contadorpedidos + 2].DiaEnvio = 23;
    pedido[contadorpedidos + 3].DiaEnvio = 12;
    pedido[contadorpedidos + 4].DiaEnvio = 7;
    pedido[contadorpedidos + 5].DiaEnvio = 3;
    pedido[contadorpedidos + 6].DiaEnvio = 10;
    pedido[contadorpedidos + 7].DiaEnvio = 21;
    pedido[contadorpedidos + 8].DiaEnvio = 26;
    pedido[contadorpedidos + 9].DiaEnvio = 27;
    pedido[contadorpedidos + 10].DiaEnvio = 19;
    pedido[contadorpedidos + 11].DiaEnvio = 25;
    pedido[contadorpedidos + 12].DiaEnvio = 7;
    pedido[contadorpedidos + 13].DiaEnvio = 9;

    pedido[contadorpedidos].MesEnvio = 1;
    pedido[contadorpedidos + 1].MesEnvio = 1;
    pedido[contadorpedidos + 2].MesEnvio = 1;
    pedido[contadorpedidos + 3].MesEnvio = 2;
    pedido[contadorpedidos + 4].MesEnvio = 3;
    pedido[contadorpedidos + 5].MesEnvio = 2;
    pedido[contadorpedidos + 6].MesEnvio = 1;
    pedido[contadorpedidos + 7].MesEnvio = 3;
    pedido[contadorpedidos + 8].MesEnvio = 1;
    pedido[contadorpedidos + 9].MesEnvio = 2;
    pedido[contadorpedidos + 10].MesEnvio = 3;
    pedido[contadorpedidos + 11].MesEnvio = 3;
    pedido[contadorpedidos + 12].MesEnvio = 3;
    pedido[contadorpedidos + 13].MesEnvio = 2;

    pedido[contadorpedidos].AnoEnvio = 2021;
    pedido[contadorpedidos + 1].AnoEnvio = 2021;
    pedido[contadorpedidos + 2].AnoEnvio = 2021;
    pedido[contadorpedidos + 3].AnoEnvio = 2021;
    pedido[contadorpedidos + 4].AnoEnvio = 2021;
    pedido[contadorpedidos + 5].AnoEnvio = 2021;
    pedido[contadorpedidos + 6].AnoEnvio = 2021;
    pedido[contadorpedidos + 7].AnoEnvio = 2021;
    pedido[contadorpedidos + 8].AnoEnvio = 2021;
    pedido[contadorpedidos + 9].AnoEnvio = 2021;
    pedido[contadorpedidos + 10].AnoEnvio = 2021;
    pedido[contadorpedidos + 11].AnoEnvio = 2021;
    pedido[contadorpedidos + 12].AnoEnvio = 2021;
    pedido[contadorpedidos + 13].AnoEnvio = 2021;

    pedido[contadorpedidos].NumeroEnvio = 1;
    pedido[contadorpedidos + 1].NumeroEnvio = 1;
    pedido[contadorpedidos + 2].NumeroEnvio = 1;
    pedido[contadorpedidos + 3].NumeroEnvio = 1;
    pedido[contadorpedidos + 4].NumeroEnvio = 1;
    pedido[contadorpedidos + 5].NumeroEnvio = 1;
    pedido[contadorpedidos + 6].NumeroEnvio = 1;
    pedido[contadorpedidos + 7].NumeroEnvio = 1;
    pedido[contadorpedidos + 8].NumeroEnvio = 1;
    pedido[contadorpedidos + 9].NumeroEnvio = 1;
    pedido[contadorpedidos + 10].NumeroEnvio = 1;
    pedido[contadorpedidos + 11].NumeroEnvio = 1;
    pedido[contadorpedidos + 12].NumeroEnvio = 1;
    pedido[contadorpedidos + 13].NumeroEnvio = 1;

    pedido[contadorpedidos].RefPaciente = 1;
    pedido[contadorpedidos + 1].RefPaciente = 2;
    pedido[contadorpedidos + 2].RefPaciente = 3;
    pedido[contadorpedidos + 3].RefPaciente = 4;
    pedido[contadorpedidos + 4].RefPaciente = 5;
    pedido[contadorpedidos + 5].RefPaciente = 6;
    pedido[contadorpedidos + 6].RefPaciente = 7;
    pedido[contadorpedidos + 7].RefPaciente = 8;
    pedido[contadorpedidos + 8].RefPaciente = 9;
    pedido[contadorpedidos + 9].RefPaciente = 10;
    pedido[contadorpedidos + 10].RefPaciente = 2;
    pedido[contadorpedidos + 11].RefPaciente = 3;
    pedido[contadorpedidos + 12].RefPaciente = 4;
    pedido[contadorpedidos + 13].RefPaciente = 6;

    pedido[contadorpedidos].almac = paciente[0].almac;
    pedido[contadorpedidos + 1].almac = paciente[1].almac;
    pedido[contadorpedidos + 2].almac = paciente[2].almac;
    pedido[contadorpedidos + 3].almac = paciente[3].almac;
    pedido[contadorpedidos + 4].almac = paciente[4].almac;
    pedido[contadorpedidos + 5].almac = paciente[5].almac;
    pedido[contadorpedidos + 6].almac = paciente[6].almac;
    pedido[contadorpedidos + 7].almac = paciente[7].almac;
    pedido[contadorpedidos + 8].almac = paciente[8].almac;
    pedido[contadorpedidos + 9].almac = paciente[9].almac;
    pedido[contadorpedidos + 10].almac = paciente[1].almac;
    pedido[contadorpedidos + 11].almac = paciente[2].almac;
    pedido[contadorpedidos + 12].almac = paciente[3].almac;
    pedido[contadorpedidos + 13].almac = paciente[5].almac;

    pedido[contadorpedidos].refinterno = paciente[0].refinterno;
    pedido[contadorpedidos + 1].refinterno = paciente[1].refinterno;
    pedido[contadorpedidos + 2].refinterno = paciente[2].refinterno;
    pedido[contadorpedidos + 3].refinterno = paciente[4].refinterno;
    pedido[contadorpedidos + 4].refinterno = paciente[5].refinterno;
    pedido[contadorpedidos + 5].refinterno = paciente[6].refinterno;
    pedido[contadorpedidos + 6].refinterno = paciente[7].refinterno;
    pedido[contadorpedidos + 7].refinterno = paciente[8].refinterno;
    pedido[contadorpedidos + 8].refinterno = paciente[1].refinterno;
    pedido[contadorpedidos + 9].refinterno = paciente[2].refinterno;
    pedido[contadorpedidos + 10].refinterno = paciente[0].refinterno;
    pedido[contadorpedidos + 11].refinterno = paciente[3].refinterno;
    pedido[contadorpedidos + 12].refinterno = paciente[5].refinterno;
    pedido[contadorpedidos + 13].refinterno = paciente[6].refinterno;

    for (int i = 0; i < 14; i++)
    {
        if (i == 0 || i == 4 || i == 7 || i == 9 || i == 12)
        {
            strcpy(pedido[i].items[0].nombrefarmaco, "Amoxicilina");
            pedido[i].items[0].pesofarmaco = 50;
            pedido[i].items[0].unidadesfarmaco = 5;
            strcpy(pedido[i].items[1].nombrefarmaco, "Ibuprofeno");
            pedido[i].items[1].pesofarmaco = 100;
            pedido[i].items[1].unidadesfarmaco = 3;
        }
        else if (i == 1 || i == 3 || i == 5 || i == 10)
        {
            strcpy(pedido[i].items[0].nombrefarmaco, "Paracetamol");
            pedido[i].items[0].pesofarmaco = 250;
            pedido[i].items[0].unidadesfarmaco = 10;
            strcpy(pedido[i].items[1].nombrefarmaco, "Spiraxin");
            pedido[i].items[1].pesofarmaco = 100;
            pedido[i].items[1].unidadesfarmaco = 3;
            strcpy(pedido[i].items[1].nombrefarmaco, "Trembolona");
            pedido[i].items[1].pesofarmaco = 70;
            pedido[i].items[1].unidadesfarmaco = 5;
        }
        else if (i == 2 || i == 6 || i == 8 || i == 11 || i == 13)
        {
            strcpy(pedido[i].items[0].nombrefarmaco, "Lorazepam");
            pedido[i].items[0].pesofarmaco = 150;
            pedido[i].items[0].unidadesfarmaco = 5;
            strcpy(pedido[i].items[1].nombrefarmaco, "Buprenorfina");
            pedido[i].items[1].pesofarmaco = 100;
            pedido[i].items[1].unidadesfarmaco = 4;
            strcpy(pedido[i].items[1].nombrefarmaco, "Ormeprazol");
            pedido[i].items[1].pesofarmaco = 30;
            pedido[i].items[1].unidadesfarmaco = 10;
        }
    }
  }
    printf("\nListado Gesti%cn Farmadron\n", 162);
    for (int i = 1; i < contadoralmacen; i++)
    {
        printf("\n     Almacen %i - %s - %s - %s \n     Descripcion: %s\n\n", almacen[i].codigo, almacen[i].calle, almacen[i].municipio, almacen[i].provincia, almacen[i].descripcion);
        printf("     Clientes\n\n");
        printf("       Ref.    Identificador       Distancia    %cngulo\n\n", 181);

        for (int j = 0; j < contadorpaciente; j++)
        {
            if (paciente[j].almac == i)
            {
                printf("       %2i      %s", paciente[j].refinterno, paciente[j].nombre);
                longi = strlen(paciente[j].nombre);
                for (int k = longi; k < 24; k++)
                {
                    printf(" ");
                }
                printf("%5i      %4i\n", paciente[j].distancia, paciente[j].angulo);
            }
        }
        printf("\n     Pedidos\n\n     Cliente    Fecha         Farmaco         Peso     Unidades\n\n");

        for (int k = 0; k < 100; k++)
        {
            if (pedido[k].almac == i && pedido[k].RefPaciente > 0)
            {
                if (pedido[k].RefPaciente < 100)
                {
                    printf("\n     %2i        %2i/%i/%4i      %s", pedido[k].refinterno, pedido[k].DiaEnvio, pedido[k].MesEnvio, pedido[k].AnoEnvio, pedido[k].items[0].nombrefarmaco);
                    longi = strlen(pedido[k].items[0].nombrefarmaco);
                    for (int f = longi; f < 16; f++)
                    {
                        printf(" ");
                    }
                    printf("%4i       %3i", pedido[k].items[0].pesofarmaco, pedido[k].items[0].unidadesfarmaco);
                }
            }
        }
        printf("\n\n\n");
        contadorpedidos = 14;

        for(int i=0; i < 14; i++){
        pedido[i].peso_total = pedido[i].items[0].pesofarmaco * pedido[i].items[0].unidadesfarmaco + pedido[i].items[1].pesofarmaco * pedido[i].items[1].unidadesfarmaco + pedido[i].items[2].pesofarmaco * pedido[i].items[2].unidadesfarmaco + pedido[i].items[3].pesofarmaco * pedido[i].items[3].unidadesfarmaco + pedido[i].items[4].pesofarmaco * pedido[i].items[4].unidadesfarmaco;
        }

    }

check = 1;
}


