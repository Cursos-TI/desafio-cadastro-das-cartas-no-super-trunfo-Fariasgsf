#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Super trunfo AVENTUREIRO! \n");
    int Populacao1, Populacao2,Numero_Pontos_turisticos1, Numero_Pontos_turisticos2;
    float Area1, Area2,  PIB1, PIB2;
    float Densidade_populacional1, Densidade_populacional2, PIB_per_capita1,PIB_per_capita2;
    char Estado1[10], Estado2[10], Codigo_da_Carta1[10], Codigo_da_Carta2[10];
    char Nome_da_Cidade1[30], Nome_da_Cidade2[30];

    printf("******Carta 01******\n");

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

    Densidade_populacional1 = (float)(Populacao1 / Area1);

    PIB_per_capita1 = (float)(PIB1 / Populacao1);

    printf("*****Carta 02*****\n");

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

    Densidade_populacional2 = (float)(Populacao2 / Area2);

    PIB_per_capita2 = (float)(PIB2 / Populacao2);


    printf("\n");

    // Exibição dos dados
    printf("Carta 1: \n");
    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", Codigo_da_Carta1);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Aréa: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais \n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", Numero_Pontos_turisticos1);
    printf("DENSIDADE POPULACIONAL é: %.2f hab/km² \n", Densidade_populacional1);
    printf("PIB per Capita: %.2f reais \n", PIB_per_capita1);

    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", Codigo_da_Carta2);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Aréa: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", Numero_Pontos_turisticos2);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km² \n", Densidade_populacional2);
    printf("PIB per Capita: %.2f reais \n", PIB_per_capita2);





/*
    Calcular a Densidade Populacional: Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado. Armazene esse valor em uma variável do tipo float.
    Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade. Armazene esse valor em uma variável do tipo float.
    Exibir os Resultados: Além de exibir as informações lidas do usuário (como no nível básico), seu programa também deve exibir a densidade populacional e o PIB per capita calculados para cada cidade. Formate os valores de ponto flutuante com duas casas decimais.

    Exemplo de Saída:
    Carta 1:
    Estado: A
    Código: A01
    Nome da Cidade: São Paulo
    População: 12325000
    Área: 1521.11 km²
    PIB: 699.28 bilhões de reais
    Númuro de Pontos Turísticos: 50
    Densidade Populacional: 8102.47 hab/km²
    PIB per Capita: 56724.32 reais

    Carta 2:
    Estado: B
    Código: B02
    Nome da Cidade: Rio de Janeiro
    População: 6748000
    Área: 1200.25 km²
    PIB: 300.50 bilhões de reais
    Número de Pontos Turísticos: 30
    Densidade Populacional: 5622.24 hab/km²
    PIB per Capita: 44532.91 reais


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
