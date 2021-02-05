#pragma once

typedef struct pacientes
{
    void altaPaciente();
    void ubicarPaciente();

    int ref;
    char nombre[20];
    int distancia;
    int angulo;
    int almac;
    int refinterno;
};

int r, z, codigoalm, mismoalmacen, input, rtn;
int refalm1 = 1;
int refalm2 = 1;
int refalm3 = 1;
int refalm4 = 1;
int refalm5 = 1;
int refalm6 = 1;
int refalm7 = 1;
int refalm8 = 1;
int refalm9 = 1;
int refalm10 = 1;

char otropacientealmacen, otropaciente, c;

typedef pacientes Tpaciente[20];
Tpaciente paciente;
