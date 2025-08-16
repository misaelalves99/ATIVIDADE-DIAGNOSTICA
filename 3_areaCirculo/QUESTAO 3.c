#include <stdio.h>

int main() {
    float raio, area, perimetro;
    float pi = 3.14;

    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);

    area = pi * raio * raio;
    perimetro = 2 * pi * raio;

    printf("Raio: %.2f\n", raio);
    printf("Area: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);

    return 0;
}
