#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

#define CLEAR_BUFFER while (getchar() != '\n');
#define FOODS_SIZE 22

typedef struct foods
{
    char name[21];
    int buyOption;
    int quantity;
    float kilo;
    float priceUnit, priceKilo, subtotalPrice;
} FoodRecord;

// Lista de alimentos com preços e pesos definidos
struct foods foods[22];

int i, foodCode = 0;

// SISTEMA DE SALVAMENTO DE DADOS
void WriteFileFoods(FoodRecord *pFoods, int size)
{
    FILE *file;
    file = fopen("SaveFoodRecord.bin", "wb");
    if (file == NULL)
    {
        puts("Erro na abertura do arquivo!");
        sleep(3);
        exit(1);
    }

    int savedFiles;
    savedFiles = fwrite(pFoods, sizeof(FoodRecord), size, file);
    if (savedFiles != size)
    {
        puts("Erro na escrita do arquivo!");
    }

    fclose(file);
}

void ReadFileFoods(FoodRecord *pFoods, int size)
{
    FILE *file;
    file = fopen("SaveFoodRecord.bin", "rb");
    if (file == NULL)
    {
        puts("Erro na abertura do arquivo!");
        sleep(3);
        exit(1);
    }

    int savedFiles;
    savedFiles = fread(pFoods, sizeof(FoodRecord), size, file);
    if (savedFiles != size)
    {
        puts("Erro na leitura do arquivo!");
    }

    fclose(file);
}

void ChooseOption()
{
    char recordOption = '1', chooseAgain = '0';
    
    // Executa a escolha de opções sobre os dados dos produtos
    do
    {
        sleep(1);
        puts("\nDigite:");
        puts("'1' Cadastrar alimentos");
        puts("'2' Consultar dados dos alimentos");
        puts("'3' Sair\n");

        scanf(" %c", &recordOption);

        switch (recordOption)
        {
            // Cadastro de produtos
            case '1':
                for (i = 0; i < FOODS_SIZE; i++)
                {
                    FoodRegister();
                }

                WriteFileFoods(foods, FOODS_SIZE);
                puts("\nCadastro realizado com sucesso!");
                break;

            // Acesso de dados
            case '2':
                ReadFileFoods(foods, FOODS_SIZE);
                puts("\nDados acessados com sucesso!");
                break;

            // Sair        
            case '3':
                exit(1);
                break;

            default:
                printf("\nCódigo inválido!\n");
        }

        printf("\nDigite '0' para repetir opções ou '1' para prosseguir:\n");
        scanf(" %c", &chooseAgain);
    } while (chooseAgain == '0');
}

void FoodRegister()
{
    printf("\nNome do produto:\n");
    CLEAR_BUFFER
    scanf("%20[^\n]", foods[i].name);

    printf("Digite '0' para (un.) ou '1' para (kg.):\n");
    scanf("%d", &foods[i].buyOption);

    if (foods[i].buyOption == 0)
    {
        printf("Quantidade p/ cálculo:\n");
        scanf("%d", &foods[i].quantity);

        printf("Preço por (un.):\n");
        scanf("%f", &foods[i].priceUnit);
    }
    else if (foods[i].buyOption == 1)
    {
        printf("Kilo p/ cálculo:\n");
        scanf("%f", &foods[i].kilo);

        printf("Preço por (kg.):\n");
        scanf("%f", &foods[i].priceKilo);
    }
    else
    {
        printf("Opção inválida!\n");
    }
}

float CalculatingFoodPerUnit(int foodCode)
{
    foods[foodCode].subtotalPrice += foods[foodCode].quantity * foods[foodCode].priceUnit;
}

float CalculatingFoodPerKilo(int foodCode)
{
    foods[foodCode].subtotalPrice += foods[foodCode].kilo * foods[foodCode].priceKilo;
}

void ChooseFood()
{
    char buyAgain = 's';

    do
    {
        printf("\nPor favor, digite o código do produto:\n");
        scanf("%d", &foodCode);

        if (foodCode >= 0 && foodCode < FOODS_SIZE)
        {
            if (foods[foodCode].buyOption == 0)
            {
                printf("Você escolheu %s, agora digite a quantidade (un.):\n", foods[foodCode].name);
                scanf("%d", &foods[foodCode].quantity);
                CalculatingFoodPerUnit(foodCode);
            }
            else if (foods[foodCode].buyOption == 1)
            {
                printf("Você escolheu %s, agora digite a quantidade (kg.):\n", foods[foodCode].name);
                scanf("%f", &foods[foodCode].kilo);
                CalculatingFoodPerKilo(foodCode);
            }

            printf("Você escolheu %s, subtotal = R$ %0.2f\n", foods[foodCode].name, foods[foodCode].subtotalPrice);
        }
        else
        {
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

    double totalPrice = 0, valueReceived = 0, change = 0;

    ChooseOption();

    sleep(1);
    puts("\nHortifruti Viva Bem\n");
    sleep(1);
    puts("Listagem de Produtos");

    printf("-----------------------------------------------------------------------------------");
    printf("\nALIMENTOS\t\t\t PREÇOS\t\t\t\t      CÓDIGOS\n");
    printf("-----------------------------------------------------------------------------------\n");
    for (i = 0; i < FOODS_SIZE; i++)
    {
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

    ChooseFood();

    for (i = 0; i < FOODS_SIZE; i++)
    {
        totalPrice += foods[i].subtotalPrice;
    }

    printf("\nValor total a pagar = R$ %0.2lf\n", totalPrice);

    printf("\nValor recebido do cliente:\n");
    scanf("%lf", &valueReceived);

    if (valueReceived >= totalPrice)
    {
        change = valueReceived - totalPrice;
        printf("\nTroco = R$ %0.2lf\n", change);
        puts("\nVenda realizada com sucesso!\n");
        system("pause");
    }
    else
    {
        puts("\nValor insuficiente!\n");
        puts("Venda cancelada!\n");
        system("pause");
    }

    return 0;
}
