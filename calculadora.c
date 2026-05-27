#include <stdio.h>
#include <stdlib.h>
#include "function_multiplicar.c"
#include "function_dividir.c"

int main() 
{
    int opcao, n1, n2, resultado;

    do 
    {
        printf("\nCALCULADORA - Por: Valentina Andrade\n");
        printf("1. Soma\n");
        printf("2. Subtração\n");
        printf("3. Divisão\n");
        printf("4. Multiplicação\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro número: ");
            scanf("%d", &n1);
            printf("Digite o segundo número: ");
            scanf("%d", &n2);

            if (opcao == 1) {
                resultado = n1 + n2;
                printf("\nA soma de %d com %d é igual a %d\n", n1, n2, resultado);
            } 
            else if (opcao == 2) {
                resultado = n1 - n2;
                printf("\nA subtração de %d com %d é igual a %d\n", n1, n2, resultado);
            } 
            else if (opcao == 3) {
                if (n2 != 0) {
                    printf("\nResultado da divisão: %d\n", dividir(n1, n2));
                } else {
                    printf("\nErro: Divisão por zero!\n");
                }
            } 
            else if (opcao == 4) {
                printf("\nResultado da multiplicação: %d\n", multiplicar(n1, n2));
            }
        } 
        else if (opcao != 0) {
            printf("\nOpção inválida! Tente novamente.\n");
        }

    } while (opcao != 0);

    printf("\nPrograma encerrado.\n");
    return 0;
}
