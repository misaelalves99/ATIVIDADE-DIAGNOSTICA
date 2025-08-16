#include <stdio.h>

int main() {
    float preco, descontoPercentual, valorDesconto, precoFinal;

    // Entrada de dados
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    printf("Digite o percentual de desconto (ex: 10 para 10%%): ");
    scanf("%f", &descontoPercentual);

    // Cálculo do desconto
    valorDesconto = (preco * descontoPercentual) / 100.0;
    precoFinal = preco - valorDesconto;

    // Saída formatada
    printf("\n==== Calculo de Desconto ====\n");
    printf("Preco original: R$ %.2f\n", preco);
    printf("Desconto aplicado: %.2f%%\n", descontoPercentual);
    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Preco final com desconto: R$ %.2f\n", precoFinal);

    return 0;
}

// #include <stdio.h>

// int main() {
// 	float preco;
// 	float descontoPercentual;
// 	float valorDesconto;
// 	float precoFinal;
	
// 	printf("Qual o preço do produto: ");
// 	scanf("%f", &preco);
	
// 	printf("Qual o percentual de desconto do produto: ");
// 	scanf("%f", &descontoPercentual);
	
//     valorDesconto = (preco * descontoPercentual) / 100.0;
//     precoFinal = preco - valorDesconto;
	
// 	printf("O valor total com desconto e: %.2f\n", precoFinal);
// }
