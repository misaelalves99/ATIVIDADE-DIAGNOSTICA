#include <stdio.h>

int main() {
    int maquinas1 = 8;
    int pecasProduzidas = 120;
    int horas = 5;
    int maquinas2 = 10;

    // Produção por máquina em 5 horas
    float producaoPorMaquina = (float)pecasProduzidas / maquinas1;

    // Cálculo da produção de 10 máquinas no mesmo período
    float producaoTotal = producaoPorMaquina * maquinas2;

    // Saída
    printf("==== Calculo de Producao ====\n");
    printf("%d maquinas produzem %d pecas em %d horas.\n", maquinas1, pecasProduzidas, horas);
    printf("Se %d maquinas trabalharem no mesmo periodo,\n", maquinas2);
    printf("a producao sera de aproximadamente %.0f pecas.\n", producaoTotal);

    return 0;
}

// #include <stdio.h>

// int main() {
//     int maquinas1 = 8;
//     int pecasProduzidas = 120;
//     int horas = 5;
//     int maquinas2 = 10;

//     // Produção por máquina em 5 horas
//     float producaoPorMaquina = (float)pecasProduzidas / maquinas1;

//     // Cálculo da produção de 10 máquinas no mesmo período
//     float producaoTotal = producaoPorMaquina * maquinas2;

//     printf("%d maquinas vão produzir %d pecas em %d horas.\n", maquinas1, pecasProduzidas, horas);
//     printf("Se %d maquinas trabalharem durante o mesmo periodo,\n", maquinas2);
//     printf("Aproximadamente %.0f pecas serão produzidas.\n", producaoTotal);

//     return 0;
// }
