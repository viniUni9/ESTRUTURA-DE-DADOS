/*
2. Faça um programa em C que leia o saldo de uma conta poupança e imprima o novo saldo, 
considerando um reajuste de 2%.
*/

#include <stdio.h>

int main() {
    float saldo, saldoReajustado;
    printf("Informe o saldo na conta poupança: ");
    scanf("%f", &saldo);
    saldoReajustado = saldo + (saldo * 0.02);
    printf("Saldo corrigido em 2 por cento: %.2f", saldoReajustado);
    return 0;
}