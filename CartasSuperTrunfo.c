#include <stdio.h>



/* aventureiro*/

int main() {

    // Declaração das variáveis para a primeira cidade

    char Estado1[50];

    char Codigo1[20];

    char NomedaCidade1[50];

    int Populacao1, NpontosTuristicos1;

    float AreaEmKm1, Pib1,DensidadePop1,PibPercapita1;



    // Declaração das variáveis para a segunda cidade

    char Estado2[50];

    char Codigo2[20];

    char NomedaCidade2[50];

    int Populacao2, NpontosTuristicos2;

    float AreaEmKm2, Pib2, DensidadePop2, PibPercapita2;



    // Recebimento dos dados para a primeira cidade

    printf("Digite o Estado da primeira cidade: \n");

    scanf(" %[^\n]", Estado1); // Lê a linha inteira, incluindo espaços

    printf("Digite o código da primeira cidade (exemplo: BA01): \n");

    scanf("%s", Codigo1);

    printf("Digite o nome da cidade: \n");

    scanf(" %[^\n]", NomedaCidade1); // Lê a linha inteira, incluindo espaços

    printf("Digite a população total da cidade: \n");

    scanf("%d", &Populacao1);

    printf("Digite o número de pontos turísticos da cidade: \n");

    scanf("%d", &NpontosTuristicos1);

    printf("Digite a área em quilômetros quadrados da cidade: \n");

    scanf("%f", &AreaEmKm1);

    printf("Digite o Produto Interno Bruto (PIB) da cidade: \n");

    scanf("%f", &Pib1);

    DensidadePop1 = ((float)Populacao1 / AreaEmKm1);

    PibPercapita1 = (Pib1 / (float)Populacao1);



    // Exibição dos dados da primeira cidade

    printf("\nCarta 1:\n");

    printf("Estado: %s\n", Estado1);

    printf("Código: %s\n", Codigo1);

    printf("Nome da Cidade: %s\n", NomedaCidade1);

    printf("População: %d\n", Populacao1);

    printf("Área: %.2f km²\n", AreaEmKm1);

    printf("PIB: %.2f bilhões de reais\n", Pib1);

    printf("Número de Pontos Turísticos: %d\n", NpontosTuristicos1);

    printf(" A Densidade Populacional é: %.3f", DensidadePop1);

    printf(" o PIB per Capita é : %.3f", PibPercapita1);







    // Recebimento dos dados para a segunda cidade

    printf("\nDigite o Estado da segunda cidade: \n");

    scanf(" %[^\n]", Estado2); // Lê a linha inteira, incluindo espaços

    printf("Digite o código da segunda cidade (exemplo: AL01): \n");

    scanf("%s", Codigo2);

    printf("Digite o nome da cidade: \n");

    scanf(" %[^\n]", NomedaCidade2); // Lê a linha inteira, incluindo espaços

    printf("Digite a população total da cidade: \n");

    scanf("%d", &Populacao2);

    printf("Digite o número de pontos turísticos da cidade: \n");

    scanf("%d", &NpontosTuristicos2);

    printf("Digite a área em quilômetros quadrados da cidade: \n");

    scanf("%f", &AreaEmKm2);

    printf("Digite o Produto Interno Bruto (PIB) da cidade: \n");

    scanf("%f", &Pib2);

    DensidadePop2 = ((float)Populacao2 / AreaEmKm2);

    PibPercapita2 = (Pib2 / (float)Populacao2);



    // Exibição dos dados da segunda cidade

    printf("\nCarta 2:\n");

    printf("Estado: %s\n", Estado2);

    printf("Código: %s\n", Codigo2);

    printf("Nome da Cidade: %s\n", NomedaCidade2);

    printf("População: %d\n", Populacao2);

    printf("Área: %.2f km²\n", AreaEmKm2);

    printf("PIB: %.2f bilhões de reais\n", Pib2);

    printf("Número de Pontos Turísticos: %d\n", NpontosTuristicos2);

    printf(" A Densidade Populacional é: %.3f", DensidadePop2);

    printf(" o PIB per Capita é : %.3f", PibPercapita2);





    return 0;

}
