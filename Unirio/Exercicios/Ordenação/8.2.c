#include <stdio.h>
#include <stdbool.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

typedef struct Data data;

void diferenca(int dias1, int dias2) {
    int dif = dias1 - dias2;

    printf("%d dias de diferença\n", dif);
}


data nova_data(int val) {
    data d;

    d.ano = val % 10000;
    val = val / 10000;

    d.mes = val % 100;
    val = val / 100;

    d.dia = val;

    return d;
}

void por_extenso(data d) {
    printf("%d de ", d.dia);

    switch (d.mes) {
        case 1:
            printf("Janeiro ");
            
        break;
        case 2:
            printf("Fevereiro ");
        
        break;
        case 3:
            printf("Março ");

        break;
        case 4:
            printf("Abril ");

        break;
        case 5:
            printf("Maio ");

        break;
        case 6:
            printf("Junho ");

        break;
        case 7:
            printf("Julho "); 
            break;

        case 8:
            printf("Agosto ");

        break;
        case 9:
            printf("Setembro ");

        break;

        case 10:
            printf("Outubro ");

        break;

        case 11:
            printf("Novembro ");

        break;

        case 12:
            printf("Dezembro ");

        break;
    
    default:
        break;
    }

    printf("de %d\n", d.ano);
}

bool ano_bissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

void manipularDatas(data d1, data d2) {
    int dias1, dias2;
    if (ano_bissexto(d1.ano) == true) {
        dias1 += 366;
    } else {
        dias1 += 365;
    }

    if (ano_bissexto(d2.ano) == true) {
        dias2 += 366;
    } else {
        dias2 += 365;
    }

    diferenca(dias1, dias2);
}


bool valida(data d) {
    bool resultado = ano_bissexto(d.ano);
    int valida = 1;

    switch (d.mes) {
        case 1:
        
            if (d.dia > 31) {
                valida = 0;
            }
            break;

        case 2:
            if (resultado == true) {
                if (d.dia > 29) {
                    valida = 0;
                }
            } else {
                if (resultado == false) {
                    if (d.dia > 28) {
                        valida = 0;
                    }
                }
            }
            break;

        case 3:
        
            if (d.dia > 31) {
                valida = 0;
            }
            break;

        case 4:
            if (d.dia > 30) {
                valida = 0;
            }

            break;

        case 5:
        
            if (d.dia > 31) {
                valida = 0;
            }
            break;

        case 6:
            if (d.dia > 30) {
                valida = 0;
            }

            break;

        case 7:
        
            if (d.dia > 31) {
                valida = 0;
            }
            break;

        case 8:
        
            if (d.dia > 31) {
                valida = 0;
            }
            break;

        case 9:
            if (d.dia > 30) {
                valida = 0;
            }

            break;

        case 10:
        
            if (d.dia > 31) {
                valida = 0;
            }
            break;

        case 11:

            if (d.dia > 30) {
                valida = 0;
            }

            break;

        case 12:
        
            if (d.dia > 31) {
                valida = 0;
            }
            break;

    
        default:
            valida = 0;
            break;
    }
    
    if (valida == 1) {
        return true;
    } else {
        return false;
    }
}

int main() {
    data escolha;

    scanf("%d %d %d", &escolha.dia, &escolha.mes, &escolha.ano);

    bool resultado = valida(escolha);

    if (resultado == true) {
        por_extenso(escolha);
        
        int entrada;

        scanf("%d", &entrada);

        data d = nova_data(entrada);

        bool resultsNewDate = ano_bissexto(d.ano);

        if (resultsNewDate == true) {
            printf("O ano da segunda data: %d é bissexto!\n", d.ano);
        } else {
            printf("O ano da segunda data: %d não é bissexto!\n", d.ano);
        }

        manipularDatas(escolha, d);

    }


    return 0;
}