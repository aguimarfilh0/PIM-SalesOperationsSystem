#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

struct foods
{
    char name[31];
    int quantity;
    float kilo;
    float priceUnit, priceKilo, subtotalPrice;
};

// Lista de alimentos com preços e pesos definidos
struct foods foods[22];

int i, foodCode;

char buyAgain = 's';

float totalPrice;

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
        printf("\nPor favor, escolha um código de 0 a 21 correspondente ao alimento que deseja comprar da lista acima e digite-o:\n");
        scanf("%d", &foodCode);

        switch (foodCode)
        {
        case 0:
            printf("Digite quantos kilos de %s você quer comprar:\n", foods[0].name);
            scanf("%f", &foods[0].kilo);

            // Calculo do valor subtotal do alimento
            foods[0].subtotalPrice += foods[0].kilo * foods[0].priceKilo;

            printf("O valor subtotal de %s a pagar é igual a R$ %0.2f\n", foods[0].name, foods[0].subtotalPrice);

            sleep(1);
            fflush(stdin);
            printf("\nDigite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;

        case 1:
            printf("Digite quantas unidades de %s você quer comprar:\n", foods[1].name);
            scanf("%d", &foods[1].quantity);

            // Calculo do valor subtotal do alimento
            foods[1].subtotalPrice += foods[1].quantity * foods[1].priceUnit;

            printf("O valor subtotal de %s a pagar é igual a R$ %0.2f\n", foods[1].name, foods[1].subtotalPrice);

            sleep(1);
            fflush(stdin);
            printf("\nDigite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;

        case 2:
            printf("Digite quantos kilos de %s você quer comprar:\n", foods[2].name);
            scanf("%f", &foods[2].kilo);

            // Calculo do valor subtotal do alimento
            foods[2].subtotalPrice += foods[2].kilo * foods[2].priceKilo;

            printf("O valor subtotal de %s a pagar é igual a R$ %0.2f\n", foods[2].name, foods[2].subtotalPrice);

            sleep(1);
            fflush(stdin);
            printf("\nDigite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;

        case 3:
            printf("Digite quantos kilos de %s você quer comprar:\n", foods[3].name);
            scanf("%f", &foods[3].kilo);

            // Calculo do valor subtotal do alimento
            foods[3].subtotalPrice += foods[3].kilo * foods[3].priceKilo;

            printf("O valor subtotal de %s a pagar é igual a R$ %0.2f\n", foods[3].name, foods[3].subtotalPrice);

            sleep(1);
            fflush(stdin);
            printf("\nDigite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;

        case 4:
            printf("Digite quantos kilos de %s você quer comprar:\n", foods[4].name);
            scanf("%f", &foods[4].kilo);

            // Calculo do valor subtotal do alimento
            foods[4].subtotalPrice += foods[4].kilo * foods[4].priceKilo;

            printf("O valor subtotal de %s a pagar é igual a R$ %0.2f\n", foods[4].name, foods[4].subtotalPrice);

            sleep(1);
            fflush(stdin);
            printf("\nDigite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;

        case 5:
            printf("Digite quantos kilos de %s você quer comprar:\n", foods[5].name);
            scanf("%f", &foods[5].kilo);

            // Calculo do valor subtotal do alimento
            foods[5].subtotalPrice += foods[5].kilo * foods[5].priceKilo;

            printf("O valor subtotal de %s a pagar é igual a R$ %0.2f\n", foods[5].name, foods[5].subtotalPrice);

            sleep(1);
            fflush(stdin);
            printf("\nDigite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;

        case 6:
            printf("Digite quantos kilos de %s você quer comprar:\n", foods[6].name);
            scanf("%f", &foods[6].kilo);

            // Calculo do valor subtotal do alimento
            foods[6].subtotalPrice += foods[6].kilo * foods[6].priceKilo;

            printf("O valor subtotal de %s a pagar é igual a R$ %0.2f\n", foods[6].name, foods[6].subtotalPrice);

            sleep(1);
            fflush(stdin);
            printf("\nDigite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;

        case 7:
            printf("Digite quantos kilos de %s você quer comprar:\n", foods[7].name);
            scanf("%f", &foods[7].kilo);

            // Calculo do valor subtotal do alimento
            foods[7].subtotalPrice += foods[7].kilo * foods[7].priceKilo;

            printf("O valor subtotal de %s a pagar é igual a R$ %0.2f\n", foods[7].name, foods[7].subtotalPrice);

            sleep(1);
            fflush(stdin);
            printf("\nDigite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;    

        case 8:
            printf("Digite quantas unidades de %s você quer comprar:\n", foods[8].name);
            scanf("%d", &foods[8].quantity);

            // Calculo do valor subtotal do alimento
            foods[8].subtotalPrice += foods[8].quantity * foods[8].priceUnit;

            printf("O valor subtotal de %s a pagar é igual a R$ %0.2f\n", foods[8].name, foods[8].subtotalPrice);

            sleep(1);
            fflush(stdin);
            printf("\nDigite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;

        case 9:
            printf("Digite quantas unidades de %s você quer comprar:\n", foods[9].name);
            scanf("%d", &foods[9].quantity);

            // Calculo do valor subtotal do alimento
            foods[9].subtotalPrice += foods[9].quantity * foods[9].priceUnit;

            printf("O valor subtotal de %s a pagar é igual a R$ %0.2f\n", foods[9].name, foods[9].subtotalPrice);

            sleep(1);
            fflush(stdin);
            printf("\nDigite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;

        case 10:
            printf("Digite quantas unidades de %s você quer comprar:\n", foods[10].name);
            scanf("%d", &foods[10].quantity);

            // Calculo do valor subtotal do alimento
            foods[10].subtotalPrice += foods[10].quantity * foods[10].priceUnit;

            printf("O valor subtotal de %s a pagar é igual a R$ %0.2f\n", foods[10].name, foods[10].subtotalPrice);

            sleep(1);
            fflush(stdin);
            printf("\nDigite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;

        case 11:
            printf("Digite quantas unidades de %s você quer comprar:\n", foods[11].name);
            scanf("%d", &foods[11].quantity);

            // Calculo do valor subtotal do alimento
            foods[11].subtotalPrice += foods[11].quantity * foods[11].priceUnit;

            printf("O valor subtotal de %s a pagar é igual a R$ %0.2f\n", foods[11].name, foods[11].subtotalPrice);

            sleep(1);
            fflush(stdin);
            printf("\nDigite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;

        case 12:
            printf("Digite quantas unidades (bandeja) de %s você quer comprar:\n", foods[12].name);
            scanf("%d", &foods[12].quantity);

            // Calculo do valor subtotal do alimento
            foods[12].subtotalPrice += foods[12].quantity * foods[12].priceUnit;

            printf("O valor subtotal de %s a pagar é igual a R$ %0.2f\n", foods[12].name, foods[12].subtotalPrice);

            sleep(1);
            fflush(stdin);
            printf("\nDigite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;

        case 13:
            printf("Digite quantos kilos de %s você quer comprar:\n", foods[13].name);
            scanf("%f", &foods[13].kilo);

            // Calculo do valor subtotal do alimento
            foods[13].subtotalPrice += foods[13].kilo * foods[13].priceKilo;

            printf("O valor subtotal de %s a pagar é igual a R$ %0.2f\n", foods[13].name, foods[13].subtotalPrice);

            sleep(1);
            fflush(stdin);
            printf("\nDigite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;

        case 14:
            printf("Digite quantos kilos de %s você quer comprar:\n", foods[14].name);
            scanf("%f", &foods[14].kilo);

            // Calculo do valor subtotal do alimento
            foods[14].subtotalPrice += foods[14].kilo * foods[14].priceKilo;

            printf("O valor subtotal de %s a pagar é igual a R$ %0.2f\n", foods[14].name, foods[14].subtotalPrice);

            sleep(1);
            fflush(stdin);
            printf("\nDigite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;

        case 15:
            printf("Digite quantas unidades (bandeja) de %s você quer comprar:\n", foods[15].name);
            scanf("%d", &foods[15].quantity);

            // Calculo do valor subtotal do alimento
            foods[15].subtotalPrice += foods[15].quantity * foods[15].priceUnit;

            printf("O valor subtotal de %s a pagar é igual a R$ %0.2f\n", foods[15].name, foods[15].subtotalPrice);

            sleep(1);
            fflush(stdin);
            printf("\nDigite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;

        case 16:
            printf("Digite quantas unidades de %s você quer comprar:\n", foods[16].name);
            scanf("%d", &foods[16].quantity);

            // Calculo do valor subtotal do alimento
            foods[16].subtotalPrice += foods[16].quantity * foods[16].priceUnit;

            printf("O valor subtotal de %s a pagar é igual a R$ %0.2f\n", foods[16].name, foods[16].subtotalPrice);

            sleep(1);
            fflush(stdin);
            printf("\nDigite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;

        case 17:
            printf("Digite quantos kilos de %s você quer comprar:\n", foods[17].name);
            scanf("%f", &foods[17].kilo);

            // Calculo do valor subtotal do alimento
            foods[17].subtotalPrice += foods[17].kilo * foods[17].priceKilo;

            printf("O valor subtotal de %s a pagar é igual a R$ %0.2f\n", foods[17].name, foods[17].subtotalPrice);

            sleep(1);
            fflush(stdin);
            printf("\nDigite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;

        case 18:
            printf("Digite quantas unidades (por maço) de %s você quer comprar:\n", foods[18].name);
            scanf("%d", &foods[18].quantity);

            // Calculo do valor subtotal do alimento
            foods[18].subtotalPrice += foods[18].quantity * foods[18].priceUnit;

            printf("O valor subtotal de %s a pagar é igual a R$ %0.2f\n", foods[18].name, foods[18].subtotalPrice);

            sleep(1);
            fflush(stdin);
            printf("\nDigite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;

        case 19:
            printf("Digite quantas unidades (por maço) de %s você quer comprar:\n", foods[19].name);
            scanf("%d", &foods[19].quantity);

            // Calculo do valor subtotal do alimento
            foods[19].subtotalPrice += foods[19].quantity * foods[19].priceUnit;

            printf("O valor subtotal de %s a pagar é igual a R$ %0.2f\n", foods[19].name, foods[19].subtotalPrice);

            sleep(1);
            fflush(stdin);
            printf("\nDigite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;

        case 20:
            printf("Digite quantas unidades de %s você quer comprar:\n", foods[20].name);
            scanf("%d", &foods[20].quantity);

            // Calculo do valor subtotal do alimento
            foods[20].subtotalPrice += foods[20].quantity * foods[20].priceUnit;

            printf("O valor subtotal de %s a pagar é igual a R$ %0.2f\n", foods[20].name, foods[20].subtotalPrice);

            sleep(1);
            fflush(stdin);
            printf("\nDigite 's' para continuar comprando e 'n' para finalizar as compras:\n");
            scanf(" %c", &buyAgain);
            break;
            
        case 21:
            printf("Digite quantas unidades de %s você quer comprar:\n", foods[21].name);
            scanf("%d", &foods[21].quantity);

            // Calculo do valor subtotal do alimento
            foods[21].subtotalPrice += foods[21].quantity * foods[21].priceUnit;

            printf("O valor subtotal de %s a pagar é igual a R$ %0.2f\n", foods[21].name, foods[21].subtotalPrice);

            sleep(1);
            fflush(stdin);
            printf("\nDigite 's' para continuar comprando e 'n' para finalizar as compras:\n");
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

    // Calcular total das compras através da soma dos subtotais (subtotalPrice) de cada alimento
    for (i = 0; i < 22; i++)
    {
        totalPrice += foods[i].subtotalPrice;
    }
    
    sleep(1);
    printf("\nO valor total a pagar é igual a R$ %0.2f\n", totalPrice);
    sleep(1);
    puts("\nCompra concluída!\n");
    system("pause");
    return 0;
}
