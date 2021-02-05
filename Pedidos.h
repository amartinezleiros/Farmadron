#pragma once


typedef struct farmacos // ESTRUCTURA PARA GUARDAR DATOS DE FARMACO
{
    char nombrefarmaco[25];
    int pesofarmaco;
    int unidadesfarmaco;
};

typedef struct pedidos // ESTRUCTURA PARA GUARDAR DATOS DE PEDIDO
{
    void nuevoPedido();
    void listarPedidos();

    int RefPaciente;
    int NumeroEnvio;
    int DiaEnvio;
    int MesEnvio;
    int AnoEnvio;
    farmacos items[5];
    int contador;
    int almac;
    int refinterno;
    int peso_total;
    int x;
    int y;
    int dist;
    int ang;
};

int t, pesototal, numeroenvio, numerodias, code, numeropedido, d, m, a, ref, peso, contadorpedidos;
char OtroFarmaco, OtroPedido, term;
typedef farmacos Tfarmaco[5];
typedef pedidos Tpedido[100];
Tfarmaco farmaco;
Tpedido pedido;
