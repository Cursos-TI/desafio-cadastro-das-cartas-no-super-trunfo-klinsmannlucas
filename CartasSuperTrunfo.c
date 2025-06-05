#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Variáveis para carta 1:
    char nomeDoEstado1;          //Estado de A a H
    char codigoDoEstado1[4];     //Código do estado, ex A01
    int populacao1;
    int quantidadeDePontosTuristicos1;
    float area1;
    float pib1;

    // Variáveis para carta 2:
    char nomeDoEstado2;          //Estado de A a H
    char codigoDoEstado2[4];     //Código do estado, ex A01
    int populacao2;
    int quantidadeDePontosTuristicos2;
    float area2;
    float pib2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Coleta de dados para a carta do estado 1.
    printf("Digite o código da carta 1: \n");
    scanf("%s", codigoDoEstado1);
    fflush(stdin);

    printf("Digite a população do estado da carta 1: \n");
    scanf("%d", &populacao1);

    printf("Digite a quantidade de pontos turísticos no estado da carta 1: \n");
    scanf("%d", &quantidadeDePontosTuristicos1);

    printf("Digite a área do estado da carta 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB do estado da carta 1: \n");
    scanf("%f", &pib1);

    //Coleta de dados para a carta do estado 2.
    
    printf("Digite o código da carta 2: \n");
    scanf("%s", codigoDoEstado2);
    fflush(stdin);

    printf("Digite a população do estado da carta 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a quantidade de pontos turísticos no estado da carta 2: \n");
    scanf("%d", &quantidadeDePontosTuristicos2);

    printf("Digite a área do estado da carta 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB do estado da carta 2: \n");
    scanf("%f", &pib2);
    
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exibindo os dados da carta 1:
    printf("Carta 1: \n");
    printf("Nome do estado: %c \n", codigoDoEstado1[0]);
    printf("Códico da carta 1: %s \n", codigoDoEstado1);
    printf("População : %d \n",populacao1);
    printf("Quantidade de pontos túriscos: %d \n",quantidadeDePontosTuristicos1);
    printf("Área: %.2f \n",area1);
    printf("PIB: %.2f \n",pib1);

    // Exibindo os dados da carta 2:
    printf("Carta 2: \n");
    printf("Nome do estado: %c \n", codigoDoEstado2[0]);
    printf("Códico da carta 2: %s \n", codigoDoEstado2);
    printf("População : %d \n",populacao2);
    printf("Quantidade de pontos túriscos: %d \n",quantidadeDePontosTuristicos2);
    printf("Área: %.2f \n",area2);
    printf("PIB: %.2f \n",pib2);

    return 0;
}
