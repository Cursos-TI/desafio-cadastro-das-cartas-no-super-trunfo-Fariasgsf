#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Super trunfo! \n");
    int Populacao1, Populacao2,Numero_Pontos_turisticos1, Numero_Pontos_turisticos2;
    float Area1, Area2,  PIB1, PIB2;
    char Estado1[1], Estado2[1], Codigo_da_Carta1[3], Codigo_da_Carta2[3];
    char Nome_da_Cidade1[30], Nome_da_Cidade2[30];

    printf("Carta 01\n");

    printf("Estado1: \n");
    scanf("%s",Estado1);

    printf("Codigo_da_Carta1: \n");
    scanf("%s",Codigo_da_Carta1);

    printf("Nome_da_Cidade1: \n");
    scanf("%s",Nome_da_Cidade1);

    printf("Populacao1: \n");
    scanf("%d", &Populacao1);

    printf("Area1: \n");
    scanf("%f", &Area1);

    printf("PIB1: \n");
    scanf("%f", &PIB1);

    printf("Numero_Pontos_turisticos1: \n");
    scanf("%d", &Numero_Pontos_turisticos1);

    printf("Carta 02\n");

    printf("Estado2: \n");
    scanf("%s",Estado2);

    printf("Codigo_da_Carta2: \n");
    scanf("%s",Codigo_da_Carta2);

    printf("Nome_da_Cidade2: \n");
    scanf("%s",Nome_da_Cidade2);

    printf("Populacao2: \n");
    scanf("%d", &Populacao2);

    printf("Area2: \n");
    scanf("%f", &Area2);

    printf("PIB2: \n");
    scanf("%f", &PIB2);

    printf("Numero_Pontos_turisticos2: \n");
    scanf("%d", &Numero_Pontos_turisticos2);

    // Exibição dos dados
    printf("Carta 01 \n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo da Carta: %s\n", Codigo_da_Carta1);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %f \n", Area1);
    printf("Numero de Pontos Turisticos: %d\n", Numero_Pontos_turisticos1);
    
    printf("Carta 02 \n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo da Carta: %s\n", Codigo_da_Carta2);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %f \n", Area2);
    printf("Numero de Pontos Turisticos: %d\n", Numero_Pontos_turisticos2);
    
/*
Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50

Carta 2:
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30    

*/
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
