#include <stdio.h>
#include "Iniciargestion.h"
#include "Pedidos.h"
#include "Rutas.h"
#include <graphics.h>
#include <winbgim.h>
#include <math.h>
void e_stdin(void)
{
    int c = getchar();

    while (c != '\n' && c != EOF)
        c = getchar();
}


int mismo_cuadrante(int x1, int y1, int x2, int y2){
  if( (x1 > 500 && x2 > 500 && y1 > 500 && y2 > 500) || (x1 < 500 && x2 < 500 && y1 > 500 && y2 > 500) || (x1 < 500 && x2 < 500 && y1 < 500 && y2 < 500) || (x1 > 500 && x2 > 500 && y1 > 500 && y2 > 500)){
    return 1;
  }
  else {
    return 0;}
  }

int dist_coordenadas(int a, int b, int c, int d)
{
   return int(sqrt((pow((a - c),2) + pow((b - d),2)) )* 100);
}

int dist_to_center(int a,int b){
 return int(sqrt((pow((a - 500),2) + pow((b - 500),2)) )* 100);
}


void rutas::programarRutas()
{
    if (contadoralmacen > 1)
    {
        printf("\nProgramar Rutas diarias del dron:\n\n");

                           for (;;)
                    {
                        printf("      Codigo?:");

                        rtn = scanf(" %d", &input);

                        if (rtn == 0)
                        {
                            fputs("      Tiene que introducir un numero entero.\n", stderr);
                            e_stdin();
                        }
                        else if (input < 1 || input > 10)
                        {
                            fputs("      El codigo tiene que estar comprendido entre el 1 y el 10. Por favor, introduzca uno correcto\n", stderr);
                            e_stdin();
                        }
                                            else if (input != almacen[0].codigo && input != almacen[1].codigo && input != almacen[2].codigo && input != almacen[3].codigo && input != almacen[4].codigo && input != almacen[5].codigo && input != almacen[6].codigo && input != almacen[7].codigo && input != almacen[8].codigo && input != almacen[9].codigo)
                        {
                        fputs("      Ese almacen no existe. Introduce uno correcto.\n", stderr);
                        e_stdin();
                        }
                        else
                        {
                            code = input;
                            e_stdin();
                            break;
                        }
                    }




        for (int i = 0; i < 11; i++)
            {
                if (almacen[i].codigo == code)
                {
                    z = 2;
                    o = i;
                }
            }

        for (;;)
                    {
                        printf("      Dia?:");

                        rtn = scanf(" %d", &input);

                        if (rtn == 0)
                        {
                            fputs("      Tiene que introducir un numero entero.\n", stderr);
                            e_stdin();
                        }
                        else if (input < 1 || input > 31)
                        {
                            fputs("      El numero tiene que ser entre 1 y 31.\n", stderr);
                            e_stdin();
                        }
                        else
                        {
                            d = input;
                            e_stdin();
                            break;
                        }
                    }
        for (;;)
                    {
                        printf("      Mes?:");

                        rtn = scanf(" %d", &input);

                        if (rtn == 0)
                        {
                            fputs("      Tiene que introducir un numero entero.\n", stderr);
                            e_stdin();
                        }
                        else if (input < 1 || input > 12)
                        {
                            fputs("      El numero tiene que ser entre 1 y 12.\n", stderr);
                            e_stdin();
                        }

                        else if ((input == 1 || input == 3 || input == 5 || input == 7 || input == 8 || input == 10 || input == 12) && pedido[contadorpedidos].DiaEnvio > 31)
                        {
                            fputs("      No hay tantos dias en este mes.\n", stderr);
                            e_stdin();
                        }
                        else if ((input == 4 || input == 6 || input == 7 || input == 9 || input == 11) && pedido[contadorpedidos].DiaEnvio > 30)
                        {
                            fputs("      No hay tantos dias en este mes.\n", stderr);
                            e_stdin();
                        }
                        else
                        {
                            m = input;
                            e_stdin();
                            break;
                        }
                    }

       for (;;)
                    {
                        printf("      A%co?:", 164);

                        rtn = scanf(" %d", &input);

                        if (rtn == 0)
                        {
                            fputs("      Tiene que introducir un numero entero.\n", stderr);
                            em_stdin();
                        }
                        else if (input < 2021)
                        {
                            fputs("      El año tiene que ser a partir del 2021.\n", stderr);
                            em_stdin();
                        }
                        else if (pedido[contadorpedidos].MesEnvio == 2 && pedido[contadorpedidos].DiaEnvio > 29 && CalcBis(input) == true)
                        {
                            fputs("      No hay tantos dias en el febrero de este año.\n", stderr);
                            em_stdin();
                        }
                        else if (pedido[contadorpedidos].MesEnvio == 2 && pedido[contadorpedidos].DiaEnvio > 28 && CalcBis(input) == false)
                        {
                            fputs("      No hay tantos dias en el febrero de este año.\n", stderr);
                            em_stdin();
                        }
                        else if (input >= 2021)
                        {
                            a = input;
                            em_stdin();
                            break;
                        }
                    }

        for (int i = 0; i < 100; i++)
        {
            if (pedido[i].almac == almacen[o].codigo && pedido[i].DiaEnvio == d && pedido[i].MesEnvio == m && pedido[i].AnoEnvio == a)
            {
                array[n] = i;
                n++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int h = 0; h < 100; h++)
            {
                if (paciente[h].refinterno == pedido[array[i]].refinterno && paciente[h].almac == pedido[array[i]].almac && paciente[h].distancia > 0)
                {
                    pedido[array[i]].dist = paciente[h].distancia;
                    pedido[array[i]].ang = paciente[h].angulo;
                    v= pedido[array[i]].ang;
                    pedido[array[i]].x = int((((cosf(v / 1000.0f * M_PI) * pedido[array[i]].dist))/100 + 500));
                    pedido[array[i]].y = int((((sinf(v / 1000.0f * M_PI) * pedido[array[i]].dist))/100 + 500));
                }
            }
        }


        //ORDENAR PEDIDOS SEGÚN PESO, DISTANCIA ENTRE ELLOS Y DISTANCIA CON EL ALMACEN

        for(int i=0; i<n;i++){
        ps = i;
        aux = array[i];

        while( i>0 && (pedido[array[i]].peso_total > pedido[array[i-1]].peso_total) && mismo_cuadrante(pedido[array[i-1]].x,pedido[array[i-1]].y,pedido[array[i]].x,pedido[array[i]].y) == 0 ){
        array[ps] = array[ps-1];
        ps--;
        }
         while( i>0 && (mismo_cuadrante(pedido[array[i-1]].x,pedido[array[i-1]].y,pedido[array[i]].x,pedido[array[i]].y) == 1) && (dist_to_center(pedido[array[i]].x,pedido[array[i]].y) < dist_to_center(pedido[array[i-1]].x,pedido[array[i-1]].y))){
        array[ps] = array[ps-1];
        ps--;
        }
        array[ps]=aux;
        }

        for(int i=0; i<n; i++){

        }

        //CALCULAR RUTAS DE ESE DIA

     /*   j=1;

        for(int i = 0; i < n; i++){
         if(i==0){
           pesomaxruta = pedido[array[i]].peso_total;
           distmaxruta = ((pedido[array[i]].peso_total * (5/3000))*1000)+pedido[array[i]].dist;

           }
        if (i > 0){
           pesomaxruta = pesomaxruta + pedido[array[i]].peso_total;
           distmaxruta = int(distmaxruta + ((pedido[array[i]].peso_total * (5/3000))*1000)+ dist_coordenadas(pedido[array[i]].x, pedido[array[i-1]].x, pedido[array[i]].y, pedido[array[i-1]].y));
          }

          if(distmaxruta > 25000 || pesomaxruta > 3000){
          distmaxruta=0;
          pesomaxruta=0;
          i--;
          j++;
        }
        } */


l=0;
z=0;
      for(int i = 0; i < n;i++){
        pesomaxruta = pesomaxruta+pedido[array[i]].peso_total;
        distmaxruta = int(distmaxruta + ((pedido[array[i]].peso_total * (5/3000))*1000)+ dist_coordenadas(pedido[array[i]].x, pedido[array[i-1]].x, pedido[array[i]].y, pedido[array[i-1]].y));
        z++;

        if( n == 1 ){
          ruta[l].numerorutas = 1;
          ruta[l].pesototalruta = pedido[array[i]].peso_total;
          j++;
          }
        if(pesomaxruta > 3000 || distmaxruta > 25000){

          ruta[l].numerorutas = z;
          ruta[l].pesototalruta = pesomaxruta - pedido[array[i]].peso_total;
          l++;
          z=0;
          i--;
          pesomaxruta = 0;
          distmaxruta = 0;
          j++;
          }
        }




        for (int k = 0; k < j; k++)
        {

          if (n == 0)
            {
              printf("\nNo hay pedidos ese dia\n\n");
                break;
            }

          printf("\n\n      Ruta %i\n", k+1);
            //CALCULAR PESO MAX PEDIDO


            for (int y = 0; y < n; y++)
            {
              if(maxpeso < 3000){
                maxpeso = maxpeso + pedido[array[y]].peso_total;
              }
              if(maxpeso > 3000){
                maxpeso = maxpeso - pedido[array[y]].peso_total;
                }
            }

            for (int i = 0; i < n; i++)
            {


                if (i == 0)
                {
                    printf("Origen a Cliente %i    -- Distancia recorrida:%5i     Angulo: %4i    Peso: %4i gramos\n", pedido[array[i]].refinterno, pedido[array[i]].dist, pedido[array[i]].ang, maxpeso);
                    distRuta = pedido[array[i]].dist;
                    pesovar = maxpeso;
                    topdist = int(((maxpeso * (5/3000.0f))*1000)+pedido[array[i]].dist);
                }


                else if (topdist < 25000 && n - i > 0)
                {
                    dist = dist_coordenadas(pedido[array[i]].x, pedido[array[i]].y, pedido[array[i-1]].x, pedido[array[i-1]].y);
                    w = (atan2(pedido[array[i]].y-pedido[array[i-1]].y,pedido[array[i]].x-pedido[array[i-1]].x));
                    if(w<0){
                    angulo = int((w+(2*M_PI))/M_PI*1000.0);
                    }else{
                      angulo = int(w/M_PI*1000.0);
                      }
                    distRuta = distRuta + dist;
                    pesovar = pesovar - pedido[array[i-1]].peso_total;
                    topdist = (topdist + ((maxpeso * (5/3000))*1000)+dist);
                    printf("Cliente %i a Cliente %i -- Distancia recorrida:%5i     Angulo: %4i    Peso: %4i gramos\n", pedido[array[i-1]].refinterno, pedido[array[i]].refinterno, dist, angulo, pesovar);
                }

                if (((topdist < 25000 && n - i == 1) && n!=1) || n==1)
                {
                    pesovar = pesovar - pedido[array[i]].peso_total;
                    distRuta = distRuta + pedido[array[i]].dist;
                    w = (atan2(500-pedido[array[i]].y,500-pedido[array[i]].x));
                    if(w<0){
                    angulo = int((w+(2*M_PI))/M_PI*1000.0);
                    }else{
                      angulo = int(w/M_PI*1000.0);
                      }
                    printf("Cliente %i a Origen    -- Distancia recorrida:%5i     Angulo: %4i    Peso: %4i gramos\n", pedido[array[i]].refinterno, pedido[array[i]].dist, angulo, pesovar);
                }

                if(topdist > 25000)
                {
                  topdist = 0;
                    break;
                }

            }





        maxpeso = 0;




            printf("Distancia total de la ruta: %i\n\n", distRuta);
        }
    }
    else
    {
        printf("\nNo hay almaneces creados todavia de los cuales programar alguna ruta\n\n");
    }
    printf("\n\n");
    n = 0;
}

void rutas::representarRutas()
{    if (contadoralmacen > 1)
    {
        printf("\nRepresentar Rutas diarias del dron:\n\n");

                           for (;;)
                    {
                        printf("      Codigo?:");

                        rtn = scanf(" %d", &input);

                        if (rtn == 0)
                        {
                            fputs("      Tiene que introducir un numero entero.\n", stderr);
                            e_stdin();
                        }
                        else if (input < 1 || input > 10)
                        {
                            fputs("      El codigo tiene que estar comprendido entre el 1 y el 10. Por favor, introduzca uno correcto\n", stderr);
                            e_stdin();
                        }
                                            else if (input != almacen[0].codigo && input != almacen[1].codigo && input != almacen[2].codigo && input != almacen[3].codigo && input != almacen[4].codigo && input != almacen[5].codigo && input != almacen[6].codigo && input != almacen[7].codigo && input != almacen[8].codigo && input != almacen[9].codigo)
                        {
                        fputs("      Ese almacen no existe. Introduce uno correcto.\n", stderr);
                        e_stdin();
                        }
                        else
                        {
                            code = input;
                            e_stdin();
                            break;
                        }
                    }




        for (int i = 0; i < 11; i++)
            {
                if (almacen[i].codigo == code)
                {
                    z = 2;
                    o = i;
                }
            }

        for (;;)
                    {
                        printf("      Dia?:");

                        rtn = scanf(" %d", &input);

                        if (rtn == 0)
                        {
                            fputs("      Tiene que introducir un numero entero.\n", stderr);
                            e_stdin();
                        }
                        else if (input < 1 || input > 31)
                        {
                            fputs("      El numero tiene que ser entre 1 y 31.\n", stderr);
                            e_stdin();
                        }
                        else
                        {
                            d = input;
                            e_stdin();
                            break;
                        }
                    }
        for (;;)
                    {
                        printf("      Mes?:");

                        rtn = scanf(" %d", &input);

                        if (rtn == 0)
                        {
                            fputs("      Tiene que introducir un numero entero.\n", stderr);
                            e_stdin();
                        }
                        else if (input < 1 || input > 12)
                        {
                            fputs("      El numero tiene que ser entre 1 y 12.\n", stderr);
                            e_stdin();
                        }

                        else if ((input == 1 || input == 3 || input == 5 || input == 7 || input == 8 || input == 10 || input == 12) && pedido[contadorpedidos].DiaEnvio > 31)
                        {
                            fputs("      No hay tantos dias en este mes.\n", stderr);
                            e_stdin();
                        }
                        else if ((input == 4 || input == 6 || input == 7 || input == 9 || input == 11) && pedido[contadorpedidos].DiaEnvio > 30)
                        {
                            fputs("      No hay tantos dias en este mes.\n", stderr);
                            e_stdin();
                        }
                        else
                        {
                            m = input;
                            e_stdin();
                            break;
                        }
                    }

       for (;;)
                    {
                        printf("      A%co?:", 164);

                        rtn = scanf(" %d", &input);

                        if (rtn == 0)
                        {
                            fputs("      Tiene que introducir un numero entero.\n", stderr);
                            em_stdin();
                        }
                        else if (input < 2021)
                        {
                            fputs("      El año tiene que ser a partir del 2021.\n", stderr);
                            em_stdin();
                        }
                        else if (pedido[contadorpedidos].MesEnvio == 2 && pedido[contadorpedidos].DiaEnvio > 29 && CalcBis(input) == true)
                        {
                            fputs("      No hay tantos dias en el febrero de este año.\n", stderr);
                            em_stdin();
                        }
                        else if (pedido[contadorpedidos].MesEnvio == 2 && pedido[contadorpedidos].DiaEnvio > 28 && CalcBis(input) == false)
                        {
                            fputs("      No hay tantos dias en el febrero de este año.\n", stderr);
                            em_stdin();
                        }
                        else if (input >= 2021)
                        {
                            a = input;
                            em_stdin();
                            break;
                        }
                    }

        for (int i = 0; i < 100; i++)
        {
            if (pedido[i].almac == almacen[o].codigo && pedido[i].DiaEnvio == d && pedido[i].MesEnvio == m && pedido[i].AnoEnvio == a)
            {
                array[n] = i;
                n++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int h = 0; h < 100; h++)
            {
                if (paciente[h].refinterno == pedido[array[i]].refinterno && paciente[h].almac == pedido[array[i]].almac && paciente[h].distancia > 0)
                {
                    pedido[array[i]].dist = paciente[h].distancia;
                    pedido[array[i]].ang = paciente[h].angulo;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            v= pedido[array[i]].ang;
            pedido[array[i]].x = int((((cosf(v / 1000.0f * M_PI) * pedido[array[i]].dist))/100 + 500));
            pedido[array[i]].y = int((((sinf(v / 1000.0f * M_PI) * pedido[array[i]].dist))/100 + 500));
        }

        //ORDENAR PEDIDOS SEGÚN PESO, DISTANCIA ENTRE ELLOS Y DISTANCIA CON EL ALMACEN

        for(int i=0; i<n;i++){
        ps = i;
        aux = array[i];

        while( i>0 && (pedido[array[i]].peso_total > pedido[array[i-1]].peso_total) && mismo_cuadrante(pedido[array[i-1]].x,pedido[array[i-1]].y,pedido[array[i]].x,pedido[array[i]].y) == 0 ){
        array[ps] = array[ps-1];
        ps--;
        }
         while( i>0 && (mismo_cuadrante(pedido[array[i-1]].x,pedido[array[i-1]].y,pedido[array[i]].x,pedido[array[i]].y) == 1) && (dist_to_center(pedido[array[i]].x,pedido[array[i]].y) < dist_to_center(pedido[array[i-1]].x,pedido[array[i-1]].y))){
        array[ps] = array[ps-1];
        ps--;
        }
        array[ps]=aux;
        }

        for(int i=0; i<n; i++){

        }

        //CALCULAR RUTAS DE ESE DIA

        j=1;
        for(int i = 0; i < n; i++){
         if(i==0){
           pesomaxruta = pedido[array[i]].peso_total;
           distmaxruta = ((pedido[array[i]].peso_total * (5/3000))*1000)+pedido[array[i]].dist;

           }
        if (i > 0){
           pesomaxruta = pesomaxruta + pedido[array[i]].peso_total;
           distmaxruta = int(distmaxruta + ((pedido[array[i]].peso_total * (5/3000))*1000)+ dist_coordenadas(pedido[array[i]].x, pedido[array[i-1]].x, pedido[array[i]].y, pedido[array[i-1]].y));
                      printf("%i", distmaxruta);
          }

          if(distmaxruta > 25000 || pesomaxruta > 3000){
          distmaxruta=0;
          pesomaxruta=0;
          i--;
          j++;
        }
        }

        for (int k = 0; k < j; k++)
        {

          if (n == 0)
            {
              printf("\nNo hay pedidos ese dia\n\n");
                break;
            }


    initwindow(1000 , 1000, "REPRESENTACION DE RUTA");
    setcolor(255);
    line(480,485,520,485);
    line(480,485,500,460);
    line(520,485,500,460);
    setcolor(LIGHTBLUE);
    line (480,520,480,485);
    line (520,520,520,485);
    setcolor (YELLOW);
    moveto(473,510);
    outtext("ALMACÉN");

          printf("\n\n      Ruta %i\n", k+1);
            //CALCULAR PESO MAX PEDIDO


            for (int y = 0; y < n; y++)
            {
              if(maxpeso < 3000){
                maxpeso = maxpeso + pedido[array[y]].peso_total;
              }
              if(maxpeso > 3000){
                maxpeso = maxpeso - pedido[array[y]].peso_total;
                }
            }

            for (int i = 0; i < n; i++)
            {


                if (i == 0)
                {
                    printf("Origen a Cliente %i    -- Distancia recorrida:%5i     Angulo: %4i    Peso: %4i gramos\n", pedido[array[i]].refinterno, pedido[array[i]].dist, pedido[array[i]].ang, maxpeso);
                    distRuta = pedido[array[i]].dist;
                    pesovar = maxpeso;
                    topdist = int(((maxpeso * (5/3000.0f))*1000)+pedido[array[i]].dist);
                    setcolor (LIGHTCYAN);
                    line(500,500, pedido[array[i]].x,1000-pedido[array[i]].y);
                    if(pedido[array[i]].y > 500 && pedido[array[i]].x > 500){
                      line(pedido[array[i]].x,1000-pedido[array[i]].y, pedido[array[i]].x, 1000-pedido[array[i]].y+5);
                      line(pedido[array[i]].x,1000-pedido[array[i]].y, pedido[array[i]].x-5, 1000-pedido[array[i]].y);
                      }else if(pedido[array[i]].y > 500 && pedido[array[i]].x < 500){
                      line(pedido[array[i]].x,1000-pedido[array[i]].y, pedido[array[i]].x, 1000-pedido[array[i]].y+5);
                      line(pedido[array[i]].x,1000-pedido[array[i]].y, pedido[array[i]].x+5, 1000-pedido[array[i]].y);
                      }else if(pedido[array[i]].y < 500 && pedido[array[i]].x < 500){
                      line(pedido[array[i]].x,1000-pedido[array[i]].y, pedido[array[i]].x, 1000-pedido[array[i]].y-5);
                      line(pedido[array[i]].x,1000-pedido[array[i]].y, pedido[array[i]].x+5, 1000-pedido[array[i]].y);
                      }else if(pedido[array[i]].y < 500 && pedido[array[i]].x > 500){
                      line(pedido[array[i]].x,1000-pedido[array[i]].y, pedido[array[i]].x, 1000-pedido[array[i]].y-5);
                      line(pedido[array[i]].x,1000-pedido[array[i]].y, pedido[array[i]].x-5, 1000-pedido[array[i]].y);
                      }

                      if(pedido[array[i]].refinterno == 1){ strcpy(nombre,"CLIENTE 1");} if(pedido[array[i]].refinterno == 2){ strcpy(nombre,"CLIENTE 2");}if(pedido[array[i]].refinterno == 3){ strcpy(nombre,"CLIENTE 3");}
                      if(pedido[array[i]].refinterno == 4){ strcpy(nombre,"CLIENTE 4");} if(pedido[array[i]].refinterno == 5){ strcpy(nombre,"CLIENTE 5");}if(pedido[array[i]].refinterno == 6){ strcpy(nombre,"CLIENTE 6");}
                      if(pedido[array[i]].refinterno == 7){ strcpy(nombre,"CLIENTE 7");} if(pedido[array[i]].refinterno == 8){ strcpy(nombre,"CLIENTE 8");}if(pedido[array[i]].refinterno == 9){ strcpy(nombre,"CLIENTE 9");}
                      setcolor (GREEN);

                    circle(pedido[array[i]].x, 1000-pedido[array[i]].y, 10);
                    moveto(pedido[array[i]].x-25, 1000-pedido[array[i]].y+20);
                    outtext(nombre);


                }


                else if (topdist < 25000 && n - i > 0)
                {
                    dist = dist_coordenadas(pedido[array[i]].x, pedido[array[i]].y, pedido[array[i-1]].x, pedido[array[i-1]].y);
                    w = (atan2(pedido[array[i]].y-pedido[array[i-1]].y,pedido[array[i]].x-pedido[array[i-1]].x));
                    if(w<0){
                    angulo = int((w+(2*M_PI))/M_PI*1000.0);
                    }else{
                      angulo = int(w/M_PI*1000.0);
                      }
                    distRuta = distRuta + dist;
                    pesovar = pesovar - pedido[array[i-1]].peso_total;
                    topdist = (topdist + ((maxpeso * (5/3000))*1000)+dist);
                    printf("Cliente %i a Cliente %i -- Distancia recorrida:%5i     Angulo: %4i    Peso: %4i gramos\n", pedido[array[i-1]].refinterno, pedido[array[i]].refinterno, dist, angulo, pesovar);
                    setcolor (LIGHTCYAN);
                      if(pedido[array[i]].y > 500 && pedido[array[i]].x > 500){
                      line(pedido[array[i]].x,1000-pedido[array[i]].y, pedido[array[i]].x, 1000-pedido[array[i]].y+5);
                      line(pedido[array[i]].x,1000-pedido[array[i]].y, pedido[array[i]].x-5, 1000-pedido[array[i]].y);
                      }else if(pedido[array[i]].y > 500 && pedido[array[i]].x < 500){
                      line(pedido[array[i]].x,1000-pedido[array[i]].y, pedido[array[i]].x, 1000-pedido[array[i]].y+5);
                      line(pedido[array[i]].x,1000-pedido[array[i]].y, pedido[array[i]].x+5, 1000-pedido[array[i]].y);
                      }else if(pedido[array[i]].y < 500 && pedido[array[i]].x < 500){
                      line(pedido[array[i]].x,1000-pedido[array[i]].y, pedido[array[i]].x, 1000-pedido[array[i]].y-5);
                      line(pedido[array[i]].x,1000-pedido[array[i]].y, pedido[array[i]].x+5, 1000-pedido[array[i]].y);
                      }else if(pedido[array[i]].y < 500 && pedido[array[i]].x > 500){
                      line(pedido[array[i]].x,1000-pedido[array[i]].y, pedido[array[i]].x, 1000-pedido[array[i]].y-5);
                      line(pedido[array[i]].x,1000-pedido[array[i]].y, pedido[array[i]].x-5, 1000-pedido[array[i]].y);
                      }
                    line(pedido[array[i-1]].x, 1000-pedido[array[i-1]].y, pedido[array[i]].x,1000-pedido[array[i]].y);
                     setcolor (GREEN);
                      if(pedido[array[i]].refinterno == 1){ strcpy(nombre,"CLIENTE 1");} if(pedido[array[i]].refinterno == 2){ strcpy(nombre,"CLIENTE 2");}if(pedido[array[i]].refinterno == 3){ strcpy(nombre,"CLIENTE 3");}
                      if(pedido[array[i]].refinterno == 4){ strcpy(nombre,"CLIENTE 4");} if(pedido[array[i]].refinterno == 5){ strcpy(nombre,"CLIENTE 5");}if(pedido[array[i]].refinterno == 6){ strcpy(nombre,"CLIENTE 6");}
                      if(pedido[array[i]].refinterno == 7){ strcpy(nombre,"CLIENTE 7");} if(pedido[array[i]].refinterno == 8){ strcpy(nombre,"CLIENTE 8");}if(pedido[array[i]].refinterno == 9){ strcpy(nombre,"CLIENTE 9");}
                    circle(pedido[array[i]].x, 1000-pedido[array[i]].y, 10);
                    moveto(pedido[array[i]].x-25, 1000-pedido[array[i]].y+20);
                    outtext(nombre);

                }

                if (((topdist < 25000 && n - i == 1) && n!=1) || n==1)
                {
                    pesovar = pesovar - pedido[array[i]].peso_total;
                    distRuta = distRuta + pedido[array[i]].dist;
                    w = (atan2(500-pedido[array[i]].y,500-pedido[array[i]].x));
                    if(w<0){
                    angulo = int((w+(2*M_PI))/M_PI*1000.0);
                    }else{
                      angulo = int(w/M_PI*1000.0);
                      }
                    printf("Cliente %i a Origen    -- Distancia recorrida:%5i     Angulo: %4i    Peso: %4i gramos\n", pedido[array[i]].refinterno, pedido[array[i]].dist, angulo, pesovar);
                    setcolor (GREEN);
                    circle(pedido[array[i]].x, 1000-pedido[array[i]].y, 10);
                    setcolor (LIGHTCYAN);
                     if(pedido[array[i]].y > 500 && pedido[array[i]].x > 500){
                      line(500,500,500,495);
                      line(500,500,505,500);
                      }else if(pedido[array[i]].y > 500 && pedido[array[i]].x < 500){
                      line(500,500,500,495);
                      line(500,500,495,500);
                      }else if(pedido[array[i]].y < 500 && pedido[array[i]].x < 500){
                      line(500,500,500,505);
                      line(500,500,495,500);
                      }else if(pedido[array[i]].y < 500 && pedido[array[i]].x > 500){
                      line(500,500,505,500);
                      line(500,500,500,505);
                      }
                    line(pedido[array[i]].x, 1000-pedido[array[i]].y, 500,500);


               }


                if(topdist > 25000)
                {
                    break;
                }

            }
            setcolor(WHITE);
            moveto(0,0);
            outtext("Presione cualquier tecla para continuar...");
            getch();
            closegraph( );
        maxpeso = 0;

            printf("Distancia total de la ruta: %i\n\n", distRuta);

        }
    }
    else
    {
        printf("\nNo hay almaneces creados todavia de los cuales representar alguna ruta\n\n");
    }
    printf("\n\n");
    n = 0;
}



