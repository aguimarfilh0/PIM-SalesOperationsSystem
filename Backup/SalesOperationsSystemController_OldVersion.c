#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

struct foods
{
    char name[21];
    int buyOption;
    int quantity;
    float kilo;
    float priceUnit, priceKilo, subtotalPrice;
};

// Lista de alimentos com preços e pesos definidos
struct foods foods[22];

int i, foodCode;

char buyAgain = 's';

double totalPrice, valueReceived, change;

void FoodRegister()
{
    // CADASTRO DE ALIMENTOS
    // Abacate / kg
    strcpy(foods[0].name, "Abacate");
    foods[0].buyOption = 1;
    foods[0].priceKilo = 6.50f;

    // Abacaxi / unidade
    strcpy(foods[1].name, "Abacaxi");
    foods[1].buyOption = 0;
    foods[1].priceUnit = 5;

    // Ameixa / kg
    strcpy(foods[2].name, "Ameixa");
    foods[2].buyOption = 1;
    foods[2].priceKilo = 5;

    // Banana / kg
    strcpy(foods[3].name, "Banana");
    foods[3].buyOption = 1;
    foods[3].priceKilo = 7;

    // Kiwi / kg
    strcpy(foods[4].name, "Kiwi"); 
    foods[4].buyOption = 1;
    foods[4].priceKilo = 15;

    // Laranja kg
    strcpy(foods[5].name, "Laranja");
    foods[5].buyOption = 1;
    foods[5].priceKilo = 6;

    // Limão / kg
    strcpy(foods[6].name, "Limão");
    foods[6].buyOption = 1;
    foods[6].priceKilo = 7.99f;

    // Maçã / kg
    strcpy(foods[7].name, "Maçã");
    foods[7].buyOption = 1;
    foods[7].priceKilo = 8;

    // Manga / unidade
    strcpy(foods[8].name, "Manga");
    foods[8].buyOption = 0;
    foods[8].priceUnit = 3.50f;

    // Melão / unidade
    strcpy(foods[9].name, "Melão");
    foods[9].buyOption = 0;
    foods[9].priceUnit = 10;

    // Melancia / unidade
    strcpy(foods[10].name, "Melancia");
    foods[10].buyOption = 0;
    foods[10].priceUnit = 25;

    // Mamão / unidade
    strcpy(foods[11].name, "Mamão");
    foods[11].buyOption = 0;
    foods[11].priceUnit = 8.50f;

    // Morango (bandeja) / unidade
    strcpy(foods[12].name, "Morango");
    foods[12].buyOption = 0;
    foods[12].priceUnit = 7;

    // Pera / kg
    strcpy(foods[13].name, "Pera");
    foods[13].buyOption = 1;
    foods[13].priceKilo = 8.50f;

    // Pêssego / kg
    strcpy(foods[14].name, "Pêssego");
    foods[14].buyOption = 1;
    foods[14].priceKilo = 5.50f;

    // Uva (bandeja) / unidade
    strcpy(foods[15].name, "Uva");
    foods[15].buyOption = 0;
    foods[15].priceUnit = 10;

    // Brócolis / unidade
    strcpy(foods[16].name, "Brócolis");
    foods[16].buyOption = 0;
    foods[16].priceUnit = 3;

    // Cenoura / kg
    strcpy(foods[17].name, "Cenoura");
    foods[17].buyOption = 1;
    foods[17].priceKilo = 4;

    // Couve  (por maço) / unidade
    strcpy(foods[18].name, "Couve");
    foods[18].buyOption = 0;
    foods[18].priceUnit = 2.50f;

    // Espinafre  (por maço) / unidade
    strcpy(foods[19].name, "Espinafre");
    foods[19].buyOption = 0;
    foods[19].priceUnit = 4;

    // Repolho / unidade
    strcpy(foods[20].name, "Repolho");
    foods[20].buyOption = 0;
    foods[20].priceUnit = 5;

    // Alface / unidade
    strcpy(foods[21].name, "Alface");
    foods[21].buyOption = 0;
    foods[21].priceUnit = 3.50f;
}

float CalculatingFoodPerUnit(int foodCode)
{
    // Calculo do valor subtotal do alimento por unidade
    foods[foodCode].subtotalPrice += foods[foodCode].quantity * foods[foodCode].priceUnit;
}

float CalculatingFoodPerKilo(int foodCode)
{
    // Calculo do valor subtotal do alimento por kilo
    foods[foodCode].subtotalPrice += foods[foodCode].kilo * foods[foodCode].priceKilo;
}

void ChoosingFood()
{
    // Faz a escolha dos alimentos que serão comprados e calcula o valor do subtotal de cada alimento
    do
    {
        sleep(1);
        printf("\nPor favor, digite o código do produto:\n");
        scanf("%d", &foodCode);

        // Verifica se o código foi digitado corretamente
        if (foodCode >= 0 && foodCode < 22) 
        {
            // Verifica a opção de compra, '0' para unidade e '1' para kilo
            if (foods[foodCode].buyOption == 0) 
            {
                sleep(1);
                printf("Você escolheu %s, agora digite a quantidade (un.):\n", foods[foodCode].name);
                scanf("%d", &foods[foodCode].quantity);
                CalculatingFoodPerUnit(foodCode);
            } 
            else if (foods[foodCode].buyOption == 1)
            {
                sleep(1);
                printf("Você escolheu %s, agora digite a quantidade (kg.):\n", foods[foodCode].name);
                scanf("%f", &foods[foodCode].kilo);
                CalculatingFoodPerKilo(foodCode);
            }

            sleep(1);
            printf("Você escolheu %s, subtotal = R$ %0.2f\n", foods[foodCode].name, foods[foodCode].subtotalPrice);
        } 
        else 
        {
            sleep(1);
            printf("Código digitado inválido!\n");
        }

        sleep(1);
        printf("\nDigite 's' para continuar ou 'n' para finalizar a venda:\n");
        scanf(" %c", &buyAgain);
    } while (buyAgain == 's');
}

int main(void)
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Cadastra os alimentos
    FoodRegister();

    puts("Hortifruti Viva Bem\n");
    sleep(1);
    puts("Listagem de Produtos");

    printf("-----------------------------------------------------------------------------------");
    // Exibe a lista de alimentos com os nomes dos alimentos, preços e códigos na tela
    printf("\nALIMENTOS\t\t\t PREÇOS\t\t\t\t      CÓDIGOS\n");
    printf("-----------------------------------------------------------------------------------\n");
    for (i = 0; i < 22; i++) // índice de linha 
    {
        // Identifica a opção de compra do alimento, '0' para unidades e '1' para kilos
        if (foods[i].buyOption == 0)
        {
            printf("%s\t\t\t\t R$ %0.2f/un\t\t\t\t %d\n", foods[i].name, foods[i].priceUnit, i); 
        }
        else
        {
            printf("%s\t\t\t\t R$ %0.2f/kg\t\t\t\t %d\n", foods[i].name, foods[i].priceKilo, i);
        }
    }
    printf("-----------------------------------------------------------------------------------\n");
    
    // Escolha dos alimentos para comprar
    ChoosingFood();

    // Calcular total das compras através da soma dos subtotais (subtotalPrice) de cada alimento
    for (i = 0; i < 22; i++)
    {
        totalPrice += foods[i].subtotalPrice;
    }
    
    sleep(1);
    printf("\nValor total a pagar = R$ %0.2lf\n", totalPrice);

    sleep(1);
    printf("\nValor recebido do cliente:\n");
    scanf("%lf", &valueReceived);

    // Verifica se o valor recebido pelo cliente é suficiente para realizar o pagamento
    if (valueReceived < totalPrice)
    {
        sleep(1);
        puts("\nValor insuficiente!\n");
        sleep(1);
        puts("Venda cancelada!\n");
        system("pause");
    }
    else
    {
        // Calculo do troco do cliente
        change = valueReceived - totalPrice;

        sleep(1);
        printf("\nTroco = R$ %0.2lf\n", change);

        sleep(1);
        puts("\nVenda realizada com sucesso!\n");
        system("pause");
    }
    
    return 0;
}
