#include <stdio.h>

int main(void) {
    // Variáveis para armazenar a base e altura do retângulo
    float base, altura;

    // Passo 1: Ler a base do retângulo
    printf("Digite a base do retangulo: ");
    scanf("%f", &base);

    // Passo 2: Ler a altura do retângulo
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    // Passo 3: Calcular a área do retângulo
    float area = base * altura;

    // Passo 4: Escrever a área do retângulo
    printf("A area do retangulo eh: %.2f\n", area);

    return 0;
}