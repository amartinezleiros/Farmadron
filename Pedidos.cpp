#include <stdio.h>
#include "Pedidos.h"

void em_stdin(void)
{
    int c = getchar();

    while (c != '\n' && c != EOF)
        c = getchar();
}


void pedidos::nuevoPedido()
{
   if(contadoralmacen > 1 && contadorpaciente > 0)
    {
        do // BUCLE PARA GENERAR OTRO PEDIDO
        {
            if (contadorpedidos < 100)
            {
                printf("\nNuevo pedido:\n\n"); // IMPRIMIR EN PANTALLA

                for (;;)
                {
                    printf("      Codigo almacen?:");

                    rtn = scanf(" %d", &input);

                    if (rtn == 0)
                    {
                        fputs("      Tiene que introducir un numero entero.\n", stderr);
                        em_stdin();
                    }
                    else if (input < 1 || input > 10)
                    {
                        fputs("      Tiene que introducir un numero entre el 1 y el 10.\n", stderr);
                        em_stdin();
                    }
                    else if (input != almacen[0].codigo && input != almacen[1].codigo && input != almacen[2].codigo && input != almacen[3].codigo && input != almacen[4].codigo && input != almacen[5].codigo && input != almacen[6].codigo && input != almacen[7].codigo && input != almacen[8].codigo && input != almacen[9].codigo)
                    {
                        fputs("      Ese almacen no existe. Introduce uno correcto.\n", stderr);
                        em_stdin();
                    }
                    else
                    {
                        pedido[contadorpedidos].almac = input;
                        emp_stdin();
                        break;
                    }
                }

                for (;;)
                {
                    printf("\n      Ref. Paciente (entre 1 y 20):");

                    rtn = scanf(" %d", &input);

                    if (rtn == 0)
                    {
                        fputs("      Tiene que introducir un numero entero.\n", stderr);
                        em_stdin();
                    }
                    else if (input < 1 || input > 20)
                    {
                        fputs("      Tiene que introducir un numero entre el 1 y el 20.\n", stderr);
                        em_stdin();
                    }
                    else if (paciente[0].refinterno == input && paciente[0].almac == pedido[contadorpedidos].almac || paciente[1].refinterno == input && paciente[1].almac == pedido[contadorpedidos].almac || paciente[2].refinterno == input && paciente[2].almac == pedido[contadorpedidos].almac || paciente[3].refinterno == input && paciente[3].almac == pedido[contadorpedidos].almac || paciente[4].refinterno == input && paciente[4].almac == pedido[contadorpedidos].almac || paciente[5].refinterno == input && paciente[5].almac == pedido[contadorpedidos].almac || paciente[6].refinterno == input && paciente[6].almac == pedido[contadorpedidos].almac || paciente[7].refinterno == input && paciente[7].almac == pedido[contadorpedidos].almac || paciente[8].refinterno == input && paciente[8].almac == pedido[contadorpedidos].almac || paciente[9].refinterno == input && paciente[9].almac == pedido[contadorpedidos].almac || paciente[10].refinterno == input && paciente[10].almac == pedido[contadorpedidos].almac || paciente[11].refinterno == input && paciente[11].almac == pedido[contadorpedidos].almac || paciente[12].refinterno == input && paciente[12].almac == pedido[contadorpedidos].almac || paciente[13].refinterno == input && paciente[13].almac == pedido[contadorpedidos].almac || paciente[14].refinterno == input && paciente[14].almac == pedido[contadorpedidos].almac || paciente[15].refinterno == input && paciente[15].almac == pedido[contadorpedidos].almac || paciente[16].refinterno == input && paciente[16].almac == pedido[contadorpedidos].almac || paciente[17].refinterno == input && paciente[17].almac == pedido[contadorpedidos].almac || paciente[18].refinterno == input && paciente[18].almac == pedido[contadorpedidos].almac || paciente[19].refinterno == input && paciente[19].almac == pedido[contadorpedidos].almac || paciente[20].refinterno == input && paciente[20].almac == pedido[contadorpedidos].almac || paciente[21].refinterno == input && paciente[21].almac == pedido[contadorpedidos].almac || paciente[22].refinterno == input && paciente[22].almac == pedido[contadorpedidos].almac || paciente[23].refinterno == input && paciente[23].almac == pedido[contadorpedidos].almac || paciente[24].refinterno == input && paciente[24].almac == pedido[contadorpedidos].almac || paciente[25].refinterno == input && paciente[25].almac == pedido[contadorpedidos].almac || paciente[26].refinterno == input && paciente[26].almac == pedido[contadorpedidos].almac || paciente[27].refinterno == input && paciente[27].almac == pedido[contadorpedidos].almac || paciente[28].refinterno == input && paciente[28].almac == pedido[contadorpedidos].almac || paciente[29].refinterno == input && paciente[29].almac == pedido[contadorpedidos].almac || paciente[30].refinterno == input && paciente[30].almac == pedido[contadorpedidos].almac || paciente[31].refinterno == input && paciente[31].almac == pedido[contadorpedidos].almac || paciente[32].refinterno == input && paciente[32].almac == pedido[contadorpedidos].almac || paciente[33].refinterno == input && paciente[33].almac == pedido[contadorpedidos].almac || paciente[34].refinterno == input && paciente[34].almac == pedido[contadorpedidos].almac || paciente[35].refinterno == input && paciente[35].almac == pedido[contadorpedidos].almac || paciente[36].refinterno == input && paciente[36].almac == pedido[contadorpedidos].almac || paciente[37].refinterno == input && paciente[37].almac == pedido[contadorpedidos].almac || paciente[38].refinterno == input && paciente[38].almac == pedido[contadorpedidos].almac || paciente[39].refinterno == input && paciente[39].almac == pedido[contadorpedidos].almac || paciente[40].refinterno == input && paciente[40].almac == pedido[contadorpedidos].almac || paciente[41].refinterno == input && paciente[41].almac == pedido[contadorpedidos].almac || paciente[42].refinterno == input && paciente[42].almac == pedido[contadorpedidos].almac || paciente[43].refinterno == input && paciente[43].almac == pedido[contadorpedidos].almac || paciente[44].refinterno == input && paciente[44].almac == pedido[contadorpedidos].almac || paciente[45].refinterno == input && paciente[45].almac == pedido[contadorpedidos].almac || paciente[46].refinterno == input && paciente[46].almac == pedido[contadorpedidos].almac || paciente[47].refinterno == input && paciente[47].almac == pedido[contadorpedidos].almac || paciente[48].refinterno == input && paciente[48].almac == pedido[contadorpedidos].almac || paciente[49].refinterno == input && paciente[49].almac == pedido[contadorpedidos].almac || paciente[50].refinterno == input && paciente[50].almac == pedido[contadorpedidos].almac || paciente[51].refinterno == input && paciente[51].almac == pedido[contadorpedidos].almac || paciente[52].refinterno == input && paciente[52].almac == pedido[contadorpedidos].almac || paciente[53].refinterno == input && paciente[53].almac == pedido[contadorpedidos].almac || paciente[54].refinterno == input && paciente[54].almac == pedido[contadorpedidos].almac || paciente[55].refinterno == input && paciente[55].almac == pedido[contadorpedidos].almac || paciente[56].refinterno == input && paciente[56].almac == pedido[contadorpedidos].almac || paciente[57].refinterno == input && paciente[57].almac == pedido[contadorpedidos].almac || paciente[58].refinterno == input && paciente[58].almac == pedido[contadorpedidos].almac || paciente[59].refinterno == input && paciente[59].almac == pedido[contadorpedidos].almac || paciente[60].refinterno == input && paciente[60].almac == pedido[contadorpedidos].almac || paciente[61].refinterno == input && paciente[61].almac == pedido[contadorpedidos].almac || paciente[62].refinterno == input && paciente[62].almac == pedido[contadorpedidos].almac || paciente[63].refinterno == input && paciente[63].almac == pedido[contadorpedidos].almac || paciente[64].refinterno == input && paciente[64].almac == pedido[contadorpedidos].almac || paciente[65].refinterno == input && paciente[65].almac == pedido[contadorpedidos].almac || paciente[66].refinterno == input && paciente[66].almac == pedido[contadorpedidos].almac || paciente[67].refinterno == input && paciente[67].almac == pedido[contadorpedidos].almac || paciente[68].refinterno == input && paciente[68].almac == pedido[contadorpedidos].almac || paciente[69].refinterno == input && paciente[69].almac == pedido[contadorpedidos].almac || paciente[70].refinterno == input && paciente[70].almac == pedido[contadorpedidos].almac || paciente[71].refinterno == input && paciente[71].almac == pedido[contadorpedidos].almac || paciente[72].refinterno == input && paciente[72].almac == pedido[contadorpedidos].almac || paciente[73].refinterno == input && paciente[73].almac == pedido[contadorpedidos].almac || paciente[74].refinterno == input && paciente[74].almac == pedido[contadorpedidos].almac || paciente[75].refinterno == input && paciente[75].almac == pedido[contadorpedidos].almac || paciente[76].refinterno == input && paciente[76].almac == pedido[contadorpedidos].almac || paciente[77].refinterno == input && paciente[77].almac == pedido[contadorpedidos].almac || paciente[78].refinterno == input && paciente[78].almac == pedido[contadorpedidos].almac || paciente[79].refinterno == input && paciente[79].almac == pedido[contadorpedidos].almac || paciente[80].refinterno == input && paciente[80].almac == pedido[contadorpedidos].almac || paciente[81].refinterno == input && paciente[81].almac == pedido[contadorpedidos].almac || paciente[82].refinterno == input && paciente[82].almac == pedido[contadorpedidos].almac || paciente[83].refinterno == input && paciente[83].almac == pedido[contadorpedidos].almac || paciente[84].refinterno == input && paciente[84].almac == pedido[contadorpedidos].almac || paciente[85].refinterno == input && paciente[85].almac == pedido[contadorpedidos].almac || paciente[86].refinterno == input && paciente[86].almac == pedido[contadorpedidos].almac || paciente[87].refinterno == input && paciente[87].almac == pedido[contadorpedidos].almac || paciente[88].refinterno == input && paciente[88].almac == pedido[contadorpedidos].almac || paciente[89].refinterno == input && paciente[89].almac == pedido[contadorpedidos].almac || paciente[90].refinterno == input && paciente[90].almac == pedido[contadorpedidos].almac || paciente[91].refinterno == input && paciente[91].almac == pedido[contadorpedidos].almac || paciente[92].refinterno == input && paciente[92].almac == pedido[contadorpedidos].almac || paciente[93].refinterno == input && paciente[93].almac == pedido[contadorpedidos].almac || paciente[94].refinterno == input && paciente[94].almac == pedido[contadorpedidos].almac || paciente[95].refinterno == input && paciente[95].almac == pedido[contadorpedidos].almac || paciente[96].refinterno == input && paciente[96].almac == pedido[contadorpedidos].almac || paciente[97].refinterno == input && paciente[97].almac == pedido[contadorpedidos].almac || paciente[98].refinterno == input && paciente[98].almac == pedido[contadorpedidos].almac || paciente[99].refinterno == input && paciente[99].almac == pedido[contadorpedidos].almac || paciente[100].refinterno == input && paciente[100].almac == pedido[contadorpedidos].almac)
                    {

                        pedido[contadorpedidos].refinterno = input;
                        em_stdin();
                        break;
                    }
                    else
                    {

                        fputs("      Ese paciente no existe en este almacen. Introduce uno correcto.\n", stderr);
                        emp_stdin();

                    }
                }

                for(int i = 0; i < 50; i++){
                  if(paciente[i].refinterno == pedido[contadorpedidos].refinterno){
                    pedido[contadorpedidos].RefPaciente = paciente[i].ref;
                  }
                }
                for (;;)
                {
                    printf("      Numero de env%cos?", 161);

                    rtn = scanf(" %d", &input);

                    if (rtn == 0)
                    {
                        fputs("      Tiene que introducir un numero entero.\n", stderr);
                        em_stdin();
                    }
                    else if (input < 1)
                    {
                        fputs("      Tiene que introducir un numero igual o mayor que 1.\n", stderr);
                        em_stdin();
                    }
                    else
                    {
                        pedido[contadorpedidos].NumeroEnvio = input;
                        em_stdin();
                        break;
                    }
                }

                if (pedido[contadorpedidos].NumeroEnvio == 1)
                {

                    for (;;)
                    {
                        printf("      Dia del env%co?", 161);

                        rtn = scanf(" %d", &input);

                        if (rtn == 0)
                        {
                            fputs("      Tiene que introducir un numero entero.\n", stderr);
                            em_stdin();
                        }
                        else if (input < 1 || input > 31)
                        {
                            fputs("      El numero tiene que ser entre 1 y 31.\n", stderr);
                            em_stdin();
                        }
                        else
                        {
                            pedido[contadorpedidos].DiaEnvio = input;
                            em_stdin();
                            break;
                        }
                    }
                    for (;;)
                    {
                        printf("      Mes del env%co?", 161);

                        rtn = scanf(" %d", &input);

                        if (rtn == 0)
                        {
                            fputs("      Tiene que introducir un numero entero.\n", stderr);
                            em_stdin();
                        }
                        else if (input < 1 || input > 12)
                        {
                            fputs("      El numero tiene que ser entre 1 y 12.\n", stderr);
                            em_stdin();
                        }

                        else if ((input == 1 || input == 3 || input == 5 || input == 7 || input == 8 || input == 10 || input == 12) && pedido[contadorpedidos].DiaEnvio > 31)
                        {
                            fputs("      No hay tantos dias en este mes.\n", stderr);
                            em_stdin();
                        }
                        else if ((input == 4 || input == 6 || input == 7 || input == 9 || input == 11) && pedido[contadorpedidos].DiaEnvio > 30)
                        {
                            fputs("      No hay tantos dias en este mes.\n", stderr);
                            em_stdin();
                        }
                        else if(input == 2 && pedido[contadorpedidos].DiaEnvio > 28)
                        {
                          fputs("      No hay tantos dias en este mes.\n", stderr);
                            em_stdin();
                        }

                        else
                        {
                            pedido[contadorpedidos].MesEnvio = input;
                            em_stdin();
                            break;
                        }
                    }

                    for (;;)
                    {
                        printf("      A%co del env%co?", 164, 161);

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
                            pedido[contadorpedidos].AnoEnvio = input;
                            em_stdin();
                            break;
                        }
                    }
                    z = 100;

                    printf("\n");
                    for (int k = 0; k < 5; k++) // BUCLE PARA METER FARMACOS
                    {

                        do
                        {
                            if (z == 5)
                            {
                                printf("\n      El nombre del farmaco debe tener entre 1 y 20 caracteres\n");
                            }
                            printf("      Nombre del f%crmaco (Entre 1 y 20 caracteres)?", 160); // PEDIR NOMBRE DEL FARMACO
                            scanf("%s", &pedido[contadorpedidos].items[k].nombrefarmaco);        // GUARDAR NOMBRE DEL FARMACO
                            z = 5;
                        } while (strlen(pedido[contadorpedidos].items[k].nombrefarmaco) < 1 || strlen(pedido[contadorpedidos].items[k].nombrefarmaco) > 20);
                        z = 0;
                        for (;;)
                        {
                            printf("      Peso f%crmaco (Menor de 3000 gramos)?", 160);

                            rtn = scanf(" %d", &input);

                            if (rtn == 0)
                            {
                                fputs("      Tiene que introducir un numero entero.\n", stderr);
                                em_stdin();
                            }
                            else if (input < 1 || input > 3000)
                            {
                                fputs("      El peso tiene que estar entre 1 y 3000.\n", stderr);
                                em_stdin();
                            }
                            else
                            {
                                pedido[contadorpedidos].items[k].pesofarmaco = input;
                                em_stdin();
                                break;
                            }
                        }

                        for (;;)
                        {
                            printf("      Unidades de f%crmaco?", 160);

                            rtn = scanf(" %d", &input);

                            if (rtn == 0)
                            {
                                fputs("      Tiene que introducir un numero entero.\n", stderr);
                                em_stdin();
                            }
                            else if (pesototal + input * pedido[contadorpedidos].items[k].pesofarmaco > 3000)
                            {
                                fputs("      Se ha pasado con el peso total del envio, repita el formulario del farmaco\n", stderr);
                                em_stdin();
                            }
                            else
                            {
                                pedido[contadorpedidos].items[k].unidadesfarmaco = input;
                                em_stdin();
                                break;
                            }
                        }

                        if (pesototal + pedido[contadorpedidos].items[k].pesofarmaco * pedido[contadorpedidos].items[k].unidadesfarmaco < 3000)
                        {
                            pesototal = (pesototal + pedido[contadorpedidos].items[k].pesofarmaco * pedido[contadorpedidos].items[k].unidadesfarmaco);
                            pedido[contadorpedidos].contador++; // SUBIR 1 EL CONTADOR DE FARMACOS
                        }
                        pedido[contadorpedidos].peso_total = pesototal;
                        do
                        {
                            if (OtroFarmaco == '.')
                            {
                                printf("      Escribe una S(si) o una N(no)\n");
                            }
                            printf("\n      Otro f%crmaco(S/N)?", 160); // PREGUNTAR SI SE QUIERE OTRO FARMACO
                            scanf(" %[^\n]c", &OtroFarmaco);            // GUARDAR RESPUESTA EN VARIABLE OtroFarmaco

                            if (OtroFarmaco == 'n' || OtroFarmaco == 'N')
                            {
                                OtroFarmaco = 'N';
                            }
                            if (OtroFarmaco == 's' || OtroFarmaco == 'S')
                            {
                                OtroFarmaco = 'S';
                                printf("\n");
                            }
                            if (OtroFarmaco == 'S' || OtroFarmaco == 'N')
                            {
                            }
                            else
                            {
                                OtroFarmaco = '.';
                            }
                            if (OtroFarmaco == 'N' || OtroFarmaco == 'n') // SI NO SE QUIERE OTRO FARMACO SE LE DA EL VALOR 5 A k PARA QUE EL BUCLE FOR NO SE REPIUTE
                            {
                                k = 5;
                            }
                        } while (OtroFarmaco != 'S' && OtroFarmaco != 'N');
                    }
                }
                else if (pedido[contadorpedidos].NumeroEnvio > 1)
                {
                    numeroenvio = pedido[contadorpedidos].NumeroEnvio;

                    for (;;)
                    {
                        printf("      Numero de dias entre cada envio? (Entre 1 y 15 d%cas)?", 161);

                        rtn = scanf(" %d", &input);

                        if (rtn == 0)
                        {
                            fputs("      Tiene que introducir un numero entero.\n", stderr);
                            em_stdin();
                        }
                        else if (input < 1 || input > 15)
                        {
                            fputs("      El numero tiene que ser entre 1 y 15.\n", stderr);
                            em_stdin();
                        }
                        else
                        {
                            numerodias = input;
                            em_stdin();
                            break;
                        }
                    }

                    for (;;)
                    {
                        printf("      Dia del primer env%co?", 161);

                        rtn = scanf(" %d", &input);

                        if (rtn == 0)
                        {
                            fputs("      Tiene que introducir un numero entero.\n", stderr);
                            em_stdin();
                        }
                        else if (input < 1 || input > 31)
                        {
                            fputs("      El numero tiene que ser entre 1 y 31.\n", stderr);
                            em_stdin();
                        }
                        else
                        {
                            pedido[contadorpedidos].DiaEnvio = input;
                            em_stdin();
                            break;
                        }
                    }
                    for (;;)
                    {
                        printf("      Mes del primer env%co?", 161);

                        rtn = scanf(" %d", &input);

                        if (rtn == 0)
                        {
                            fputs("      Tiene que introducir un numero entero.\n", stderr);
                            em_stdin();
                        }
                        else if (input < 1 || input > 12)
                        {
                            fputs("      El numero tiene que ser entre 1 y 12.\n", stderr);
                            em_stdin();
                        }

                        else if ((input == 1 || input == 3 || input == 5 || input == 7 || input == 8 || input == 10 || input == 12) && pedido[contadorpedidos].DiaEnvio > 31)
                        {
                            fputs("      No hay tantos dias en este mes.\n", stderr);
                            em_stdin();
                        }
                        else if ((input == 4 || input == 6 || input == 7 || input == 9 || input == 11) && pedido[contadorpedidos].DiaEnvio > 30)
                        {
                            fputs("      No hay tantos dias en este mes.\n", stderr);
                            em_stdin();
                        }
                        else
                        {
                            pedido[contadorpedidos].MesEnvio = input;
                            em_stdin();
                            break;
                        }
                    }

                    for (;;)
                    {
                        printf("      A%co del primer env%co?", 164, 161);

                        rtn = scanf(" %d", &input);

                        if (rtn == 0)
                        {
                            fputs("      Tiene que introducir un numero entero.\n", stderr);
                            em_stdin();
                        }
                        else if (input < 2021)
                        {
                            printf("      El a%co tiene que ser a partir del 2021.\n", 164);
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
                            pedido[contadorpedidos].AnoEnvio = input;
                            em_stdin();
                            break;
                        }
                    }

                    printf("\n");
                    for (int k = 0; k < 5; k++) // BUCLE PARA METER FARMACOS
                    {

                        do
                        {
                            if (z == 5)
                            {
                                printf("\n      El nombre del farmaco debe tener entre 1 y 20 caracteres\n");
                            }
                            printf("      Nombre del f%crmaco (Entre 1 y 20 caracteres)?", 160); // PEDIR NOMBRE DEL FARMACO
                            scanf("%s", &pedido[contadorpedidos].items[k].nombrefarmaco);        // GUARDAR NOMBRE DEL FARMACO
                            z = 5;
                        } while (strlen(pedido[contadorpedidos].items[k].nombrefarmaco) < 1 || strlen(pedido[contadorpedidos].items[k].nombrefarmaco) > 20);
                        z = 0;
                        for (;;)
                        {
                            printf("      Peso f%crmaco (Menor de 3000 gramos)?", 160);

                            rtn = scanf(" %d", &input);

                            if (rtn == 0)
                            {
                                fputs("      Tiene que introducir un numero entero.\n", stderr);
                                em_stdin();
                            }
                            else if (input < 1 || input > 3000)
                            {
                                fputs("      El peso tiene que estar entre 1 y 3000.\n", stderr);
                                em_stdin();
                            }
                            else
                            {
                                pedido[contadorpedidos].items[k].pesofarmaco = input;
                                em_stdin();
                                break;
                            }
                        }

                        for (;;)
                        {
                            printf("      Unidades de f%crmaco?", 160);

                            rtn = scanf(" %d", &input);

                            if (rtn == 0)
                            {
                                fputs("      Tiene que introducir un numero entero.\n", stderr);
                                em_stdin();
                            }
                            else if (pesototal + input * pedido[contadorpedidos].items[k].pesofarmaco > 3000)
                            {
                                fputs("      Se ha pasado con el peso total del envio, repita el formulario del farmaco\n", stderr);
                                em_stdin();
                            }
                            else
                            {
                                pedido[contadorpedidos].items[k].unidadesfarmaco = input;
                                em_stdin();
                                break;
                            }
                        }

                        if (pesototal + pedido[contadorpedidos].items[k].pesofarmaco * pedido[contadorpedidos].items[k].unidadesfarmaco < 3000)
                        {
                            pesototal = (pesototal + pedido[contadorpedidos].items[k].pesofarmaco * pedido[contadorpedidos].items[k].unidadesfarmaco);
                            pedido[contadorpedidos].contador++; // SUBIR 1 EL CONTADOR DE FARMACOS
                        }
                        pedido[contadorpedidos].peso_total = pesototal;
                        do
                        {
                            if (OtroFarmaco == '.')
                            {
                                printf("      Escribe una S(si) o una N(no)\n");
                            }
                            printf("\n      Otro f%crmaco(S/N)?", 160); // PREGUNTAR SI SE QUIERE OTRO FARMACO
                            scanf(" %[^\n]c", &OtroFarmaco);            // GUARDAR RESPUESTA EN VARIABLE OtroFarmaco

                            if (OtroFarmaco == 'n' || OtroFarmaco == 'N')
                            {
                                OtroFarmaco = 'N';
                            }
                            if (OtroFarmaco == 's' || OtroFarmaco == 'S')
                            {
                                OtroFarmaco = 'S';
                                printf("\n");
                            }
                            if (OtroFarmaco == 'S' || OtroFarmaco == 'N')
                            {
                            }
                            else
                            {
                                OtroFarmaco = '.';
                            }
                            if (OtroFarmaco == 'N' || OtroFarmaco == 'n') // SI NO SE QUIERE OTRO FARMACO SE LE DA EL VALOR 5 A k PARA QUE EL BUCLE FOR NO SE REPIUTE
                            {
                                k = 5;
                            }
                        } while (OtroFarmaco != 'S' && OtroFarmaco != 'N');
                    }
                    pedido[contadorpedidos].peso_total = pesototal;
                    contadorpedidos++;

                    //SIGUIENTE CÓDIGO: PARA QUE EN PEDIDOS DE VARIOS ENVIOS, HAGA UN SALTO DE MES Y DE AÑO AL GUARDAR LOS DATOS DEL PEDIDO.

                    for (int i = 0; i < numeroenvio - 1; i++)
                    {
                        pedido[contadorpedidos].RefPaciente = pedido[contadorpedidos-1].RefPaciente;
                        pedido[contadorpedidos].refinterno = pedido[contadorpedidos-1].refinterno;
                        pedido[contadorpedidos].almac = pedido[contadorpedidos-1].almac;
                        pedido[contadorpedidos].DiaEnvio = (pedido[contadorpedidos - 1].DiaEnvio + numerodias);
                        pedido[contadorpedidos].MesEnvio = pedido[contadorpedidos - 1].MesEnvio;
                        pedido[contadorpedidos].AnoEnvio = pedido[contadorpedidos - 1].AnoEnvio;
                        if (pedido[contadorpedidos].DiaEnvio > 30 && (pedido[contadorpedidos].MesEnvio == 4 || pedido[contadorpedidos].MesEnvio == 6 || pedido[contadorpedidos].MesEnvio == 9 || pedido[contadorpedidos].MesEnvio == 11))
                        {
                            pedido[contadorpedidos].DiaEnvio = pedido[contadorpedidos].DiaEnvio - 30;
                            pedido[contadorpedidos].MesEnvio = pedido[contadorpedidos].MesEnvio + 1;
                        }
                        else if (pedido[contadorpedidos].DiaEnvio > 31 && (pedido[contadorpedidos].MesEnvio == 1 || pedido[contadorpedidos].MesEnvio == 3 || pedido[contadorpedidos].MesEnvio == 5 || pedido[contadorpedidos].MesEnvio == 7 || pedido[contadorpedidos].MesEnvio == 8 || pedido[contadorpedidos].MesEnvio == 10 || pedido[contadorpedidos].MesEnvio == 12))
                        {
                            pedido[contadorpedidos].DiaEnvio = pedido[contadorpedidos].DiaEnvio - 31;
                            pedido[contadorpedidos].MesEnvio = pedido[contadorpedidos].MesEnvio + 1;
                        }
                        else if (pedido[contadorpedidos].DiaEnvio > 28 && pedido[contadorpedidos].MesEnvio == 2 && CalcBis(pedido[contadorpedidos].AnoEnvio) == false)
                        {
                            pedido[contadorpedidos].DiaEnvio = pedido[contadorpedidos].DiaEnvio - 28;
                            pedido[contadorpedidos].MesEnvio = pedido[contadorpedidos].MesEnvio + 1;
                        }
                        else if (pedido[contadorpedidos].DiaEnvio > 29 && pedido[contadorpedidos].MesEnvio == 2 && CalcBis(pedido[contadorpedidos].AnoEnvio) == true)
                        {
                            pedido[contadorpedidos].DiaEnvio = pedido[contadorpedidos].DiaEnvio - 29;
                            pedido[contadorpedidos].MesEnvio = pedido[contadorpedidos].MesEnvio + 1;
                        }

                        if (pedido[contadorpedidos].MesEnvio == 12 && pedido[contadorpedidos].DiaEnvio > 31)
                        {
                            pedido[contadorpedidos].AnoEnvio = pedido[contadorpedidos].AnoEnvio + 1;
                            pedido[contadorpedidos].DiaEnvio = pedido[contadorpedidos].DiaEnvio - 31;
                            pedido[contadorpedidos].MesEnvio = 1;
                        }

                        for (int j = 0; j < 5; j++)
                        {
                            strcpy(pedido[contadorpedidos].items[j].nombrefarmaco, pedido[contadorpedidos - 1].items[j].nombrefarmaco);
                            pedido[contadorpedidos].items[j].pesofarmaco = pedido[contadorpedidos - 1].items[j].pesofarmaco;
                            pedido[contadorpedidos].items[j].unidadesfarmaco = pedido[contadorpedidos - 1].items[j].unidadesfarmaco;
                        }
                        pedido[contadorpedidos].peso_total = pedido[contadorpedidos - 1].peso_total;
                        contadorpedidos++;
                    }
                }
            }

            contadorpedidos++; // SUBIMOS 1 EL CONTADOR DE PEDIDOS
            pesototal = 0;

            do
            {
                if (OtroPedido == '.')
                {
                    printf("      Escribe una S(si) o una N(no)\n");
                }

                printf("      Otro pedido(S/N)?"); // PREGUNTAMOS SI SE QUIERE HACER OTRO PEDIDO
                scanf(" %[^\n]c", &OtroPedido);    // GUARDAMOS LA RESPUESTA EN VARIABLE OtroPedido

                if (OtroPedido == 'n' || OtroPedido == 'N')
                {
                    OtroPedido = 'N';
                }
                if (OtroPedido == 's' || OtroPedido == 'S')
                {
                    OtroPedido = 'S';
                }
                if (OtroPedido == 'S' || OtroPedido == 'N')
                {
                }
                else
                {
                    OtroPedido = '.';
                }

            } while (OtroPedido != 'S' && OtroPedido != 'N');

        } while (OtroPedido == 'S'); // ACABAMOS EL BUCLE DO-WHILE , SI SE QUIERE OTRO PEDIDO VOLVERA AL DO
        printf("\n");
    }
    else
    {
        printf("\nPrimero tienes que crear un almacen y pacientes\n\n");
    }
}





void pedidos::listarPedidos()
{
    if (contadoralmacen > 1)
    {
         for (;;)
                {
                    printf("      Codigo almacen?:");

                    rtn = scanf(" %d", &input);

                    if (rtn == 0)
                    {
                        fputs("      Tiene que introducir un numero entero.\n", stderr);
                        em_stdin();
                    }
                    else if (input < 1 || input > 10)
                    {
                        fputs("      Tiene que introducir un numero entre el 1 y el 10.\n", stderr);
                        em_stdin();
                    }
                    else if (input != almacen[0].codigo && input != almacen[1].codigo && input != almacen[2].codigo && input != almacen[3].codigo && input != almacen[4].codigo && input != almacen[5].codigo && input != almacen[6].codigo && input != almacen[7].codigo && input != almacen[8].codigo && input != almacen[9].codigo)
                    {
                        fputs("      Ese almacen no existe. Introduce uno correcto.\n", stderr);
                        em_stdin();
                    }
                    else
                    {
                        code = input;
                        emp_stdin();
                        break;
                    }
                }

       for (;;)
                    {
                        printf("      Dia?:", 161);

                        rtn = scanf(" %d", &input);

                        if (rtn == 0)
                        {
                            fputs("      Tiene que introducir un numero entero.\n", stderr);
                            em_stdin();
                        }
                        else if (input < 1 || input > 31)
                        {
                            fputs("      El numero tiene que ser entre 1 y 31.\n", stderr);
                            em_stdin();
                        }
                        else
                        {
                            d = input;
                            em_stdin();
                            break;
                        }
                    }

       for (;;)
                    {
                        printf("      Mes?:", 161);

                        rtn = scanf(" %d", &input);

                        if (rtn == 0)
                        {
                            fputs("      Tiene que introducir un numero entero.\n", stderr);
                            em_stdin();
                        }
                        else if (input < 1 || input > 12)
                        {
                            fputs("      El numero tiene que ser entre 1 y 12.\n", stderr);
                            em_stdin();
                        }

                        else if ((input == 1 || input == 3 || input == 5 || input == 7 || input == 8 || input == 10 || input == 12) && pedido[contadorpedidos].DiaEnvio > 31)
                        {
                            fputs("      No hay tantos dias en este mes.\n", stderr);
                            em_stdin();
                        }
                        else if ((input == 4 || input == 6 || input == 7 || input == 9 || input == 11) && pedido[contadorpedidos].DiaEnvio > 30)
                        {
                            fputs("      No hay tantos dias en este mes.\n", stderr);
                            em_stdin();
                        }
                        else
                        {
                            m = input;
                            em_stdin();
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
                            printf("      El a%co tiene que ser a partir del 2021.\n", 164);
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
        printf("\n");

        for (int n = 0; n < 100; n++)
        {
            if (pedido[n].DiaEnvio == d && pedido[n].MesEnvio == m && pedido[n].AnoEnvio == a && pedido[n].almac == code)
            {
                z = 2;
            }
        }
        if (z != 2)
        {
            printf("\nNo hay pedidos ese dia en ese almacen\n\n");
        }
        numeropedido = 1;
        for (int n = 0; n < 100; n++)
        {
          ref = pedido[n].RefPaciente;
            if (pedido[n].DiaEnvio == d && pedido[n].MesEnvio == m && pedido[n].AnoEnvio == a && pedido[n].almac == code)
            {

                z = 1;
                printf("Pedido ALMACEN - %s\n\n", almacen[code].calle);
                for (int i = contadorpedidos; i <= 100; i++)
                {


                    if (pedido[n].DiaEnvio == d && pedido[n].MesEnvio == m && pedido[n].AnoEnvio == a && pedido[n].almac == code)
                    {
                        printf("      Pedido %i\n", numeropedido);
                        numeropedido++;
                        printf("Ubicaci%cn destino: Distancia: %i y %cngulo: %i\n", 162, paciente[ref-1].distancia, 181, paciente[ref-1].angulo);
                        for (int j = 0; j < 5; j++)
                        {
                            if (pedido[n].items[j].unidadesfarmaco > 0)
                            {
                                printf("%2i Unidades         %s", pedido[n].items[j].unidadesfarmaco, pedido[n].items[j].nombrefarmaco);
                                longi = strlen(pedido[n].items[j].nombrefarmaco);
                                for (int i = longi; i < 20; i++)
                                {
                                    printf(" ");
                                }
                                printf(" Peso: %4i gramos\n", pedido[n].items[j].pesofarmaco);
                                peso = (pedido[n].items[j].pesofarmaco * pedido[n].items[j].unidadesfarmaco);
                                pesototal = pesototal + peso;
                            }
                        }
                        printf("                    Peso total del env%co:      %4i gramos\n\n", 161, pedido[n].peso_total);
                    }

                    pesototal = 0;
                    n++;
                }
            }
        }

        z = 0;
    }
    else
    {
        printf("\nNo hay almacenes creados de los cuales mostrar pedidos\n\n");
    }
}
