/******************************************************************************
Kaue Henrique Ra:8136527    
*******************************************************************************/
#include <stdio.h>

float saldo = 0;

void deposito() {
    float deposito;
    printf("Digite o valor a ser depositado: ");
    scanf("%f", &deposito);
    saldo += deposito;
    printf("Dep�sito realizado com sucesso!\n\n");
}

void saque() {
    float saque;
    printf("Digite o valor a ser sacado: ");
    scanf("%f", &saque);
    if (saque > saldo) {
        printf("Erro: saldo insuficiente!\n\n");
    } else {
        saldo -= saque;
        printf("Saque realizado com sucesso!\n\n");
    }
}

void verSaldo() {
    printf("Saldo atual: %.2f\n\n", saldo);
}

int main() {
    int opcao;

    do {
        printf("Selecione uma op��o:\n");
        printf("1 - Dep�sito\n");
        printf("2 - Saque\n");
        printf("3 - Ver saldo\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                deposito();
                break;
            case 2:
                saque();
                break;
            case 3:
                verSaldo();
                break;
            case 0:
                printf("Encerrando opera��es...\n");
                break;
            default:
                printf("Op��o inv�lida!\n\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}
