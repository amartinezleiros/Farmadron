#include <stdio.h>
#include <conio.h>
#include "Calendario.h"
#include "Pedidos.h"

void emp_stdin(void)
{
    int c = getchar();

    while (c != '\n' && c != EOF)
        c = getchar();
}

bool CalcBis(int n) // FUNCION COMPROBAR SI ANHO ES BISIESTO
{
    if (n % 4 == 0 && n % 100 != 0)
    {
        return true;
    }
    else if (n % 4 == 0 && n % 100 == 0)
    {
        return false;
    }
    else if (n % 400 == 0)
    {
        return true;
    }
}

int calendario::calendarioMensual()
{

    printf("Calendario mensual de pedidos:\n"); // IMPRIMIR EN PANTALLA

     for (;;)
            {
                printf("Seleccion Mes? ");

                rtn = scanf(" %d", &input);

                if (rtn == 0)
                {
                    fputs("      Tiene que introducir un numero entero.\n", stderr);
                    emp_stdin();
                }
                else if (input < 1 || input >= 12)
                {
                    fputs("      Tiene que introducir un mes entre el 1 y el 12\n", stderr);
                    emp_stdin();
                }
                else if (input > 1 || input < 12)
                {
                    mes = input;
                    emp_stdin();
                    break;
                }
            }

         for (;;)
            {
                printf("Seleccion A%co? ", 164);

                rtn = scanf(" %d", &input);

                if (rtn == 0)
                {
                    fputs("      Tiene que introducir un numero entero.\n", stderr);
                    emp_stdin();
                }
                else if (input < 2021)
                {
                    fputs("      No puede introducir un anho anterior al actual\n", stderr);
                    emp_stdin();
                }
                else if (input >= 2021)
                {
                    anho = input;
                    emp_stdin();
                    break;
                }
            }


    //CONTADOR DE DIAS TOTALES DESDE 1 ENERO 1601 HASTA 1 DEL MES Y AÒO ELEGIDO
    contadorBis = 0;
    contadornBis = 0;
    for (int i = 0; i < anho - 1601; i++)
    {
        contadorAno = 1601 + i;
        if (contadorAno % 4 == 0 && contadorAno % 100 != 0 || contadorAno % 400 == 0)
        {
            contadorBis++;
        }
        else
        {
            contadornBis++;
        }
    }

    Dbis = contadorBis * 366;
    Dnbis = contadornBis * 365;
    dias_totales = Dbis + Dnbis;

    if (dias_totales < 0)
    {
        return 0;
    }

    /////////////// CALCULAR SI ANHO ES BISIESTO

    //////////////SUMAR DIAS TOTALES DESDE 1 ENERO DE ANHO ELEGIDO A 1 DEL MES ELEGIDO

    if (mes == 1)
    {
        dias_totales = dias_totales;
    }
    if (mes == 2)
    {
        dias_totales = (dias_totales + 31);
    }
    if (mes == 3)
    {
        if (CalcBis(anho) == true)
        {
            dias_totales = (dias_totales + 60);
        }
        else
        {
            dias_totales = (dias_totales + 59);
        };
    }
    if (mes == 4)
    {
        if (CalcBis(anho) == true)
        {
            dias_totales = (dias_totales + 91);
        }
        else
        {
            dias_totales = (dias_totales + 90);
        };
    }
    if (mes == 5)
    {
        if (CalcBis(anho) == true)
        {
            dias_totales = (dias_totales + 121);
        }
        else
        {
            dias_totales = (dias_totales + 120);
        };
    }
    if (mes == 6)
    {
        if (CalcBis(anho) == true)
        {
            dias_totales = (dias_totales + 152);
        }
        else
        {
            dias_totales = (dias_totales + 151);
        };
    }
    if (mes == 7)
    {
        if (CalcBis(anho) == true)
        {
            dias_totales = (dias_totales + 182);
        }
        else
        {
            dias_totales = (dias_totales + 181);
        };
    }
    if (mes == 8)
    {
        if (CalcBis(anho) == true)
        {
            dias_totales = (dias_totales + 213);
        }
        else
        {
            dias_totales = (dias_totales + 212);
        };
    }
    if (mes == 9)
    {
        if (CalcBis(anho) == true)
        {
            dias_totales = (dias_totales + 244);
        }
        else
        {
            dias_totales = (dias_totales + 243);
        };
    }
    if (mes == 10)
    {
        if (CalcBis(anho) == true)
        {
            dias_totales = (dias_totales + 274);
        }
        else
        {
            dias_totales = (dias_totales + 273);
        };
    }
    if (mes == 11)
    {
        if (CalcBis(anho) == true)
        {
            dias_totales = (dias_totales + 305);
        }
        else
        {
            dias_totales = (dias_totales + 304);
        };
    }
    if (mes == 12)
    {
        if (CalcBis(anho) == true)
        {
            dias_totales = (dias_totales + 335);
        }
        else
        {
            dias_totales = (dias_totales + 334);
        };
    }

    //CALCULAR DIA EN QUE DIA EMPIEZA EL MES

    if (dias_totales % 7 == 0)
    {
        numerodia = 0;
    }
    if (dias_totales % 7 == 1)
    {
        numerodia = 1;
    }
    if (dias_totales % 7 == 2)
    {
        numerodia = 2;
    }
    if (dias_totales % 7 == 3)
    {
        numerodia = 3;
    }
    if (dias_totales % 7 == 4)
    {
        numerodia = 4;
    }
    if (dias_totales % 7 == 5)
    {
        numerodia = 5;
    }
    if (dias_totales % 7 == 6)
    {
        numerodia = 6;
    }

    // CREAR CALENDARIO

    printf("\n");

    if (mes == 1)
    {
        p = 5;
        printf("ENERO");
    }
    else if (mes == 2)
    {
        p = 7;
        printf("FEBRERO");
    }
    else if (mes == 3)
    {
        p = 5;
        printf("MARZO");
    }
    else if (mes == 4)
    {
        p = 5;
        printf("ABRIL");
    }
    else if (mes == 5)
    {
        p = 4;
        printf("MAYO");
    }
    else if (mes == 6)
    {
        p = 5;
        printf("JUNIO");
    }
    else if (mes == 7)
    {
        p = 5;
        printf("JULIO");
    }
    else if (mes == 8)
    {
        p = 6;
        printf("AGOSTO");
    }
    else if (mes == 9)
    {
        p = 10;
        printf("SEPTIEMBRE");
    }
    else if (mes == 10)
    {
        p = 7;
        printf("OCTUBRE");
    }
    else if (mes == 11)
    {
        p = 9;
        printf("NOVIEMBRE");
    }
    else if (mes == 12)
    {
        p = 9;
        printf("DICIEMBRE");
    }

    for (int i = p; i < 23; i++)
    {
        printf(" ");
    }

    printf("%d\n", anho);
    printf("===========================\n");
    printf("LU  MA  MI  JU  VI | SA  DO\n");
    printf("===========================\n");

    //OBTENER DIAS QUE TIENE EL MES
    if (CalcBis(anho) == true && mes == 2)
    {
        diasMes = 29;
    }
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        diasMes = 30;
    }
    else if (CalcBis(anho) == false && mes == 2)
    {
        diasMes = 28;
    }

    else
    {
        diasMes = 31;
    }

    //IMPRIMIR PRIMEROS PUNTOS
    h = 0;

    for (int k = numerodia; k >= 1; k--)
    {
        if (h % 7 == 5)
        {
            printf("| ");
        }
        if (h % 7 != 0 && h % 7 != 5)
        {
            printf(" ");
        }
        printf("   ");
        h++;
    }

    for (int k = 0; k < diasMes; k++)
    {
        for (int j = 0; j < 100; j++)
        {

            if (pedido[j].DiaEnvio == (k + 1) && pedido[j].AnoEnvio == anho && pedido[j].MesEnvio == mes)
            {

                y = pedido[j].DiaEnvio;
            }
        }
        if (h != 0)
        {
            if (h % 7 == 0)
            {
                printf("\n");
            }
        }
        if (h % 7 == 5)
        {
            printf("| ");
        }
        if (h % 7 != 0 && h % 7 != 5)
        {
            printf(" ");
        }

        if (y != 0)
        {
            printf("%2d ", y);
            y = 0;
        }
        else
        {
            printf("-- ");
        }
        h++;
    }

    while (h % 7 != 0)
    {
        if (h % 7 == 5)
        {
            printf("| ");
        }
        if (h % 7 != 0 && h % 7 != 5)
        {
            printf(" ");
        }
        printf("   ");
        h++;
    }

printf("\n\n");
}
