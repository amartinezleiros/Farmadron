#pragma once

typedef struct almacenes // ESTRUCTURA PARA GUARDAR DATOS DE PEDIDO
{
    void altaAlmacen();

    int codigo;
    char calle[48];
    char municipio[48];
    char provincia[16];
    char descripcion[48];
};

int alm, longi, o;
char almm, datoscorrectos;
int contadoralmacen = 1;
typedef almacenes Talmacen[10];
Talmacen almacen;
