#include <stdio.h>

int main() {
    float celsius, fahrenheit;     // Aqui declaro as variáveis

    printf("Digite aqui a temperatura em Celsius: ");    // Aqui é uma saída
    scanf("%f", &celsius);                               // Aqui é uma entrada

    // Essa aqui é a formula de conversão: °F = (°C x 1,8) + 32
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("A temperatura convertida de Celsius para Fahrenheit e de: %.2f °F\n", fahrenheit);

    return 0;
}
