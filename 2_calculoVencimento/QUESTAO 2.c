#include <stdio.h>

int main() {
    float salarioBase, valorHoraExtra, totalReceber;
    int horasExtras;

    printf("Digite aqui o salario base: R$ ");
    scanf("%f", &salarioBase);

    printf("Digite aqui o valor de cada hora extra: R$ ");
    scanf("%f", &valorHoraExtra);

    printf("Digite aqui a quantidade de horas extras feitas: ");
    scanf("%d", &horasExtras);

    totalReceber = salarioBase + (valorHoraExtra * horasExtras);

    printf("Salario Base: R$ %.2f\n", salarioBase);
    printf("Horas Extras: %d\n", horasExtras);
    printf("Total a receber: R$ %.2f\n", totalReceber);

    return 0;
}
