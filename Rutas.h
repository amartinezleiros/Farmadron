#pragma once



typedef struct rutas
{
    void programarRutas();
    void representarRutas();

    int numerorutas;
    int pesototalruta;

};

int j, array[20], pesovar, dist, angulo1, n, aux, ps, distRuta, topdist, maxpeso, pesomaxruta, distmaxruta, angulo, v, u,l;
float w;
char nombre[25];

typedef rutas Trutas[5];
Trutas ruta;
