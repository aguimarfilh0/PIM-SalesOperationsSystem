#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

struct foods
{
    char name[21];
    int quantity;
    float kilo;
    float priceUnit, priceKilo, totalPrice;
};

int main(void)
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    #pragma region FoodList
        // Lista de alimentos com preços e pesos definidos
        struct foods foods[22];

        // FRUTAS
        // Abacates
        strcpy(foods[0].name, "Abacates");
        foods[0].kilo = 1; 
        foods[0].priceUnit = 0;
        foods[0].priceKilo = 10;

        // Abacaxis
        strcpy(foods[1].name, "Abacaxis");
        foods[1].kilo = 1; 
        foods[1].priceUnit = 5;
        foods[1].priceKilo = 6;
    #pragma endregion
    
    int i, foodCode;

    char buyAgain = 's';

    puts("Loja de Hortifruti\n");
    sleep(1);
    puts("Lista de alimentos disponíveis para comprar:\n");

    // Mostrar lista de alimentos com preços usando matriz

    // Faz a escolha dos alimentos que serão comprados e calcula o subtotal de cada alimento
    do
    {
        sleep(1);
        printf("Digite o código do alimento de 0 a 22:\n");
        scanf("%d", &foodCode);

        switch (foodCode)
        {
        case 0:
            printf("Digite quantos kilos de %s que você quer comprar:\n", foods[0].name);
            scanf("%f", &foods[0].kilo);

            foods[0].totalPrice = foods[0].kilo * foods[0].priceKilo;

            fflush(stdin);
            printf("Digite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;
        
        default: printf("Código digitado inválido!\n");
        }
    } while (buyAgain == 's');

    // Calcular total das compras através da soma dos subtotais (priceTotal) de cada alimento, utilizando for

    // Exibir total das compras na tela

    sleep(1);
    puts("Programa concluído!");
    system("pause");
    return 0;
}
