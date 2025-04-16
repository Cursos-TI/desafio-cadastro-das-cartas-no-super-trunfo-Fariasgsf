#include <stdio.h>
int main(){

    unsigned long int Populacao1, Populacao2;
    int Numero_Pontos_turisticos1, Numero_Pontos_turisticos2;
    float Area1, Area2,  PIB1, PIB2;
    float Densidade_populacional1, Densidade_populacional2, PIB_per_capita1,PIB_per_capita2;
    char Estado1[10], Estado2[10], Codigo_da_Carta1[10], Codigo_da_Carta2[10];
    char Nome_da_Cidade1[30], Nome_da_Cidade2[30];
    float SUPER_PODER1, SUPER_PODER2;

    // recolher dados da carta 
    printf("Super trunfo Mestre! \n");
    printf("Batalha de Cartas Super Trunfo \n");

    printf("******Carta 01******\n");

    printf("Estado1: \n");
    scanf("%s",Estado1);

    printf("Codigo_da_Carta1: \n");
    scanf("%s",Codigo_da_Carta1);

    printf("Nome_da_Cidade1: \n");
    scanf("%s",Nome_da_Cidade1);

    printf("Populacao1: \n");
    scanf("%lu", &Populacao1);

    printf("Area1: \n");
    scanf("%f",&Area1);

    printf("PIB1: \n");
    scanf("%f", &PIB1);

    printf("Numero_Pontos_turisticos1: \n");
    scanf("%d", &Numero_Pontos_turisticos1);

    Densidade_populacional1 = (float) Populacao1 / Area1;
    PIB_per_capita1 = PIB1 / (float) Populacao1;
    SUPER_PODER1 = Populacao1 + Area1 + PIB1 + Numero_Pontos_turisticos1 + PIB_per_capita1 + Densidade_populacional1;

    // recolher dados da carta 
    printf("*****Carta 02*****\n");

    printf("Estado2: \n");
    scanf("%s",Estado2);

    printf("Codigo_da_Carta2: \n");
    scanf("%s",Codigo_da_Carta2);

    printf("Nome_da_Cidade2: \n");
    scanf("%s",Nome_da_Cidade2);

    printf("Populacao2: \n");
    scanf("%lu", &Populacao2);

    printf("Area2: \n");
    scanf("%f",&Area2);

    printf("PIB2: \n");
    scanf("%f", &PIB2);

    printf("Numero_Pontos_turisticos2: \n");
    scanf("%d", &Numero_Pontos_turisticos2);

    Densidade_populacional2 = (float) Populacao2 / Area2;
    PIB_per_capita2 = PIB2 / (float)Populacao2;
    SUPER_PODER2 = Populacao2 + Area2 + PIB2 + Numero_Pontos_turisticos2 + PIB_per_capita2 + Densidade_populacional2;

    printf("\n");
    // Exibir dados da carta//
    printf("Carta 1: \n");
    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", Codigo_da_Carta1);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade1);
    printf("População: %lu\n", Populacao1);
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
    printf("População: %lu\n", Populacao2);
    printf("Aréa: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", Numero_Pontos_turisticos2);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km² \n", Densidade_populacional2);
    printf("PIB per Capita: %.2f reais \n", PIB_per_capita2);

    printf("\n");

    // Comparação das cartas
    printf("Comparação de Cartas:\n")
    printf("População: %d\n", (Populacao1 >= Populacao2));
    printf("Área: %d\n", (Area1 >= Area2));
    printf("PIB: %d\n", (PIB1 >= PIB2));
    printf("Pontos Turísticos: %d\n", (Numero_Pontos_turisticos1 >= Numero_Pontos_turisticos2));
    printf("Densidade Populacional: %d\n", (Densidade_populacional1 < Densidade_populacional2));
    printf("PIB per Capita: %d\n", (PIB_per_capita1 >= PIB_per_capita2));
    printf("Super Poder: %d\n", (SUPER_PODER1 >= SUPER_PODER2));
    return 0;

}
