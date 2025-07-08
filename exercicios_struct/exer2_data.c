#include <stdio.h>

int dias_meses[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

typedef struct data {
    int dia;
    int mes;
    int ano;
} data;

int bissexto(int ano) {
    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) {
        dias_meses[2] = 29;
        return 1;
    } else {
        dias_meses[2] = 28;
        return 0;
    }
}

int verificar_data(data d) {
    bissexto(d.ano);
    if (d.dia < 1 || d.dia > dias_meses[d.mes] || d.mes < 1 || d.mes > 12 || d.ano < 0) {
        return 0;
    }
    return 1;
}

data funcao_get_data() {
    data d;
    do {
        printf("Digite a data (dd/mm/aaaa): ");
        scanf("%d/%d/%d", &d.dia, &d.mes, &d.ano);
    } while (verificar_data(d) == 0);
    return d;
}

int verificar_d2_maior_d1(data d1, data d2) {
    if (d2.ano > d1.ano) {
        return 1;
    } else if (d2.ano == d1.ano && d2.mes > d1.mes) {
        return 1;
    } else if (d2.ano == d1.ano && d2.mes == d1.mes && d2.dia > d1.dia) {
        return 1;
    } else {
        printf("Data de término menor que a data de início\n");
        return 0;
    }
}

int calcular_dias(data d1, data d2) {
    int dias = 0;
    while (d1.ano < d2.ano) {
        dias += 365 + bissexto(d1.ano);
        d1.ano++;
    }
    if (d1.mes < d2.mes) {
        while (d1.mes < d2.mes) {
            bissexto(d1.ano);
            dias += dias_meses[d1.mes];
            d1.mes++;
        }
    } else if (d1.mes > d2.mes) {
        while (d1.mes > d2.mes) {
            d1.mes--;
            bissexto(d1.ano);
            dias -= dias_meses[d1.mes];
        }
    }
    dias += d2.dia - d1.dia;
    return dias;
}

int main() {
    data d1, d2;

    printf("~DATA DE INÍCIO~\n");
    d1 = funcao_get_data();

    printf("~DATA DE TÉRMINO~\n");
    do {
        d2 = funcao_get_data();
    } while (verificar_d2_maior_d1(d1, d2) == 0);

    printf("-DATA DE INÍCIO: %d/%d/%d\n", d1.dia, d1.mes, d1.ano);
    printf("-DATA DE TÉRMINO: %d/%d/%d\n", d2.dia, d2.mes, d2.ano);

    int dias = calcular_dias(d1, d2);
    printf("-DIAS ENTRE AS DATAS: %d\n", dias);
}