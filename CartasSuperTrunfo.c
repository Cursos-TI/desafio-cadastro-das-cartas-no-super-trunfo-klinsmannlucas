#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Variáveis para carta 1:
    char nomeDoEstado1;          //Estado de A a H
    char codigoDoEstado1[4];     //Código do estado, ex A01
    unsigned long int populacao1;
    int quantidadeDePontosTuristicos1;
    float area1;
    double pib1;
    
    // Variáveis para carta 2:
    char nomeDoEstado2;          //Estado de A a H
    char codigoDoEstado2[4];     //Código do estado, ex A01
    unsigned long int populacao2;
    int quantidadeDePontosTuristicos2;
    float area2;
    double pib2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Coleta de dados para a carta do estado 1.
    printf("Digite o código da carta 1: \n");
    scanf("%s", codigoDoEstado1);
    fflush(stdin);

    nomeDoEstado1 = codigoDoEstado1[0];

    printf("Digite a população do estado da carta 1: \n");
    scanf("%lu", &populacao1);

    printf("Digite a quantidade de pontos turísticos no estado da carta 1: \n");
    scanf("%d", &quantidadeDePontosTuristicos1);

    printf("Digite a área do estado da carta 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB do estado da carta 1: \n");
    scanf("%lf", &pib1);

    //Coleta de dados para a carta do estado 2.
    
    printf("Digite o código da carta 2: \n");
    scanf("%s", codigoDoEstado2);
    fflush(stdin);

    nomeDoEstado2 = codigoDoEstado2[0];

    printf("Digite a população do estado da carta 2: \n");
    scanf("%lu", &populacao2);

    printf("Digite a quantidade de pontos turísticos no estado da carta 2: \n");
    scanf("%d", &quantidadeDePontosTuristicos2);

    printf("Digite a área do estado da carta 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB do estado da carta 2: \n");
    scanf("%lf", &pib2);
    
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exibindo os dados da carta 1:
    printf("\n");
    printf("Carta 1: \n");
    printf("Nome do estado: %c \n", nomeDoEstado1);
    printf("Códico da carta 1: %s \n", codigoDoEstado1);
    printf("População : %lu \n",populacao1);
    printf("Quantidade de pontos túriscos: %d \n",quantidadeDePontosTuristicos1);
    printf("Área: %.2f \n",area1);
    printf("PIB: %.2lf \n",pib1);

    double densidadePopulacional1 = (double)populacao1/area1;
    double pibPerCapita1 = pib1/area1;
    // Casting do unsigned long int para double, para evitar a perda de possivel dados caso for convertido pra float, o restanto é mantido em float.
    double superPoder1 = ((double)populacao1 + area1 + pib1 + (float)quantidadeDePontosTuristicos1 + pibPerCapita1)/densidadePopulacional1;

    printf("Densidade Populacional: %.2lf \n", densidadePopulacional1);
    printf("PIB per Capita: %.2f \n", pibPerCapita1);
    printf("Super Poder: %.2lf \n", superPoder1);

    // Exibindo os dados da carta 2:
    printf("\n");
    printf("Carta 2: \n");
    printf("Nome do estado: %c \n", nomeDoEstado2);
    printf("Códico da carta 2: %s \n", codigoDoEstado2);
    printf("População : %lu \n", populacao2);
    printf("Quantidade de pontos túriscos: %d \n",quantidadeDePontosTuristicos2);
    printf("Área: %.2f \n",area2);
    printf("PIB: %.2lf \n",pib2);

    double densidadePopulacional2 = (double)populacao2/area2;
    double pibPerCapita2 = pib2/area2;
    // Casting do unsigned long int para double, para evitar a perda de possivel dados caso for convertido pra float, o restanto é mantido em float.
    double superPoder2 = ((double)populacao2 + area2 + pib2 + quantidadeDePontosTuristicos2 + pibPerCapita2)/densidadePopulacional2;

    printf("Densidade Populacional: %.2lf \n", densidadePopulacional2);
    printf("PIB per Capita: %.2f \n", pibPerCapita2);
    printf("Super Poder: %.2lf \n", superPoder2);

    // Comparação das cartas
    printf("\n");
    printf("Comparacão de Cartas: \n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", quantidadeDePontosTuristicos1 > quantidadeDePontosTuristicos2);
    printf("Densidade Populacional: %d\n", densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    return 0;
}
