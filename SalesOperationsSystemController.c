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
    setlocale(LC_ALL, "Portuguese");
    
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
    
    //int optionBuy = 0;
    //int i = 0, 
    int foodCode = 0;

    char buyAgain = 'n';

    puts("Loja de Hortifruti\n");
    puts("Lista de alimentos disponíveis para comprar:\n");

    do
    {
        buyAgain = 'n';
        printf("Digite o código do alimento:\n");
        scanf("%d", &foodCode);

        switch (foodCode)
        {
        case 0:
            printf("Digite quantos kilos de %s que você quer comprar:\n", foods[0].name);
            scanf("%f", &foods[0].kilo);

            foods[0].totalPrice = foods[0].kilo * foods[0].priceKilo;

            printf("Digite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf("%c", &buyAgain);
            break;
        
        default: printf("Código digitado inválido!");
            break;
        }
        
    } while (buyAgain != 'n');
    
    // calcular total de subtotal das compras com for

    // calcular total das compras

    // exibir total das compras na tela

    return 0;
}
