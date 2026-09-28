#include <stdio.h>

int main() {

    float limite;
    float temperatura;
    float soma = 0;
    float maior = 0;
    float menor = 0;
    float media;
    float percentual;

    int quantidade = 0;
    int acimaLimite = 0;
    int consecutivas = 0;

    // Solicita o limite até que seja informado um número válido
    int entradaValida;

    do {
        printf("Digite o limite de temperatura: ");
        entradaValida = scanf("%f", &limite);

        if (entradaValida != 1) {
            printf("Entrada invalida! Digite um numero.\n");

            // Limpa o valor inválido do teclado
            while (getchar() != '\n');
        }

    } while (entradaValida != 1);

    printf("\n--- INICIO DO MONITORAMENTO ---\n");

    // O monitoramento continua até ocorrerem
    // 3 temperaturas consecutivas acima do limite.
    while (consecutivas < 3) {

        printf("\nDigite a temperatura: ");
        entradaValida = scanf("%f", &temperatura);

        // Verifica se a entrada é válida
        if (entradaValida != 1) {
            printf("Entrada invalida! Digite um numero.\n");

            // Limpa o valor inválido do teclado
            while (getchar() != '\n');

            continue;
        }

        // A primeira temperatura define o maior e o menor valor
        if (quantidade == 0) {
            maior = temperatura;
            menor = temperatura;
        }

        // Soma as temperaturas
        soma = soma + temperatura;

        // Verifica a maior temperatura
        if (temperatura > maior) {
            maior = temperatura;
        }

        // Verifica a menor temperatura
        if (temperatura < menor) {
            menor = temperatura;
        }

        quantidade++;

        // Verifica se a temperatura está acima do limite
        if (temperatura > limite) {

            acimaLimite++;
            consecutivas++;

            printf("Temperatura acima do limite!\n");
            printf("Consecutivas acima do limite: %d\n", consecutivas);

        } else {

            // Reinicia a contagem quando a temperatura
            // não está acima do limite.
            consecutivas = 0;

            printf("Temperatura dentro do limite.\n");
        }
    }

    // Calcula a média
    media = soma / quantidade;

    // Calcula o percentual de temperaturas acima do limite
    percentual = ((float)acimaLimite / quantidade) * 100;

    printf("\n====================================\n");
    printf("          RELATORIO FINAL\n");
    printf("====================================\n");

    printf("Limite de temperatura: %.2f\n", limite);
    printf("Quantidade de leituras: %d\n", quantidade);
    printf("Maior temperatura: %.2f\n", maior);
    printf("Menor temperatura: %.2f\n", menor);
    printf("Media das temperaturas: %.2f\n", media);
    printf("Temperaturas acima do limite: %d\n", acimaLimite);
    printf("Percentual acima do limite: %.2f%%\n", percentual);

    printf("\nMonitoramento encerrado!\n");
    printf("Foram registradas 3 temperaturas consecutivas acima do limite.\n");

    return 0;
}
