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

// Lista de alimentos com preços e pesos definidos
struct foods foods[21];

int i, foodCode;

char buyAgain = 's';

void FoodRegister()
{
    // CADASTRO DE ALIMENTOS
    // Abacate / kg
    strcpy(foods[0].name, "Abacate");
    foods[0].priceKilo = 6.50f;

    // Abacaxi / unidade
    strcpy(foods[1].name, "Abacaxi");
    foods[1].priceUnit = 5;

    // Ameixa / kg
    strcpy(foods[2].name, "Ameixa");
    foods[2].priceKilo = 5;

    // Banana / kg
    strcpy(foods[3].name, "Banana");
    foods[3].priceKilo = 7;

    // Kiwi / kg
    strcpy(foods[4].name, "Kiwi"); 
    foods[4].priceKilo = 15;

    // Laranja kg
    strcpy(foods[5].name, "Laranja");
    foods[5].priceKilo = 6;

    // Limão / kg
    strcpy(foods[6].name, "Limão");
    foods[6].priceKilo = 7.99f;

    // Maçã / kg
    strcpy(foods[7].name, "Maçã");
    foods[7].priceKilo = 8;

    // Manga / unidade
    strcpy(foods[8].name, "Manga");
    foods[8].priceUnit = 3.50f;

    // Melão / unidade
    strcpy(foods[9].name, "Melão");
    foods[9].priceUnit = 10;

    // Melancia / unidade
    strcpy(foods[10].name, "Melancia");
    foods[10].priceUnit = 25;

    // Mamão / unidade
    strcpy(foods[11].name, "Mamão");
    foods[11].priceUnit = 8.50f;

    // Morango (bandeja) / unidade
    strcpy(foods[12].name, "Morango");
    foods[12].priceUnit = 7;

    // Pera / kg
    strcpy(foods[13].name, "Pera");
    foods[13].priceKilo = 8.50f;

    // Pêssego / kg
    strcpy(foods[14].name, "Pêssego");
    foods[14].priceKilo = 5.50f;

    // Uva (bandeja) / unidade
    strcpy(foods[15].name, "Uva");
    foods[15].priceUnit = 10;

    // Brócolis / unidade
    strcpy(foods[16].name, "Brócolis");
    foods[16].priceUnit = 3;

    // Cenoura / kg
    strcpy(foods[17].name, "Cenoura");
    foods[17].priceKilo = 4;

    // Couve  (por maço) / unidade
    strcpy(foods[18].name, "Couve");
    foods[18].priceUnit = 2.50f;

    // Espinafre  (por maço) / unidade
    strcpy(foods[19].name, "Espinafre");
    foods[19].priceUnit = 4;

    // Repolho / unidade
    strcpy(foods[20].name, "Repolho");
    foods[20].priceUnit = 5;

    // Alface / unidade
    strcpy(foods[21].name, "Alface");
    foods[21].priceUnit = 3.50f;
}

void ChoosingFood()
{
    // Faz a escolha dos alimentos que serão comprados e calcula o valor do subtotal de cada alimento
    do
    {
        sleep(1);
        printf("\nDigite o código do alimento de 0 a 22:\n");
        scanf("%d", &foodCode);

        switch (foodCode)
        {
        case 0:
            printf("Digite quantos kilos de %s você quer comprar:\n", foods[0].name);
            scanf("%f", &foods[0].kilo);

            // Calculo do valor subtotal do alimento
            foods[0].totalPrice = foods[0].kilo * foods[0].priceKilo;

            printf("Valor subtotal de %s é R$ %0.2f\n", foods[0].name, foods[0].totalPrice);

            fflush(stdin);
            printf("Digite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;

        case 1:
            printf("Digite quantas unidades de %s você quer comprar:\n", foods[1].name);
            scanf("%d", &foods[1].quantity);

            // Calculo do valor subtotal do alimento
            foods[1].totalPrice = foods[1].quantity * foods[1].priceUnit;

            printf("Valor subtotal de %s é R$ %0.2f\n", foods[1].name, foods[1].totalPrice);

            fflush(stdin);
            printf("Digite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;

        case 2:
            printf("Digite quantos kilos de %s você quer comprar:\n", foods[2].name);
            scanf("%f", &foods[2].kilo);

            // Calculo do valor subtotal do alimento
            foods[2].totalPrice = foods[2].kilo * foods[2].priceKilo;

            printf("Valor subtotal de %s é R$ %0.2f\n", foods[2].name, foods[2].totalPrice);

            fflush(stdin);
            printf("Digite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;

        case 3:
            printf("Digite quantos kilos de %s você quer comprar:\n", foods[3].name);
            scanf("%f", &foods[3].kilo);

            // Calculo do valor subtotal do alimento
            foods[3].totalPrice = foods[3].kilo * foods[3].priceKilo;

            printf("Valor subtotal de %s é R$ %0.2f\n", foods[3].name, foods[3].totalPrice);

            fflush(stdin);
            printf("Digite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;

        case 4:
            printf("Digite quantos kilos de %s você quer comprar:\n", foods[4].name);
            scanf("%f", &foods[4].kilo);

            // Calculo do valor subtotal do alimento
            foods[4].totalPrice = foods[4].kilo * foods[4].priceKilo;

            printf("Valor subtotal de %s é R$ %0.2f\n", foods[4].name, foods[4].totalPrice);

            fflush(stdin);
            printf("Digite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;

        case 5:
            printf("Digite quantos kilos de %s você quer comprar:\n", foods[5].name);
            scanf("%f", &foods[5].kilo);

            // Calculo do valor subtotal do alimento
            foods[5].totalPrice = foods[5].kilo * foods[5].priceKilo;

            printf("Valor subtotal de %s é R$ %0.2f\n", foods[5].name, foods[5].totalPrice);

            fflush(stdin);
            printf("Digite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;

        case 6:
            printf("Digite quantos kilos de %s você quer comprar:\n", foods[6].name);
            scanf("%f", &foods[6].kilo);

            // Calculo do valor subtotal do alimento
            foods[6].totalPrice = foods[6].kilo * foods[6].priceKilo;

            printf("Valor subtotal de %s é R$ %0.2f\n", foods[6].name, foods[6].totalPrice);

            fflush(stdin);
            printf("Digite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;

        case 7:
            printf("Digite quantos kilos de %s você quer comprar:\n", foods[7].name);
            scanf("%f", &foods[7].kilo);

            // Calculo do valor subtotal do alimento
            foods[7].totalPrice = foods[7].kilo * foods[7].priceKilo;

            printf("Valor subtotal de %s é R$ %0.2f\n", foods[7].name, foods[7].totalPrice);

            fflush(stdin);
            printf("Digite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;    

        case 8:
            printf("Digite quantas unidades de %s você quer comprar:\n", foods[8].name);
            scanf("%d", &foods[8].quantity);

            // Calculo do valor subtotal do alimento
            foods[8].totalPrice = foods[8].quantity * foods[8].priceUnit;

            printf("Valor subtotal de %s é R$ %0.2f\n", foods[8].name, foods[8].totalPrice);

            fflush(stdin);
            printf("Digite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;

        case 9:
            printf("Digite quantas unidades de %s você quer comprar:\n", foods[9].name);
            scanf("%d", &foods[9].quantity);

            // Calculo do valor subtotal do alimento
            foods[9].totalPrice = foods[9].quantity * foods[9].priceUnit;

            printf("Valor subtotal de %s é R$ %0.2f\n", foods[9].name, foods[9].totalPrice);

            fflush(stdin);
            printf("Digite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;

        case 10:
            printf("Digite quantas unidades de %s você quer comprar:\n", foods[10].name);
            scanf("%d", &foods[10].quantity);

            // Calculo do valor subtotal do alimento
            foods[10].totalPrice = foods[10].quantity * foods[10].priceUnit;

            printf("Valor subtotal de %s é R$ %0.2f\n", foods[10].name, foods[10].totalPrice);

            fflush(stdin);
            printf("Digite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;

        default: printf("Código digitado inválido!\n");
        }
    } while (buyAgain == 's');
}

int main(void)
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Cadastra os alimentos
    FoodRegister();

    puts("Loja de Hortifruti\n");
    sleep(1);
    puts("Lista de alimentos disponíveis para comprar:\n");

    // Mostrar lista de alimentos com preços usando matriz

    // Escolha dos alimentos para comprar
    ChoosingFood();

    // Calcular total das compras através da soma dos subtotais (priceTotal) de cada alimento, utilizando for

    // Exibir total das compras na tela

    sleep(1);
    puts("Programa concluído!");
    system("pause");
    return 0;
}
