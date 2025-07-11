#include <stdio.h>
int main (){

    printf("Desafio Super Trunfo - Países - Nível Novato:\n");

    //Declaração das variáveis da primeira carta

        char estado1; // Estado: Uma letra de 'A' a 'H' (representando um dos oito estados).
        char codigo1 [10]; // Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
        char nomeCidade1[20]; // O nome da cidade.
        int populacao1; // populacao: O número de habitantes da cidade
        int pontosturisticos1; // Pontos Turísticos: o número de pontos turísticos da cidade.
        float area1; // area: A área da cidade em quilômetros quadrados.
        float pib1;  // PIB: O Produto Interno Bruto da cidade

     //Declaração das variaveis da segunda carta

        char estado2; // Estado: Uma letra de 'A' a 'H' (representando um dos oito estados).
        char codigo2 [10]; // Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
        char nomeCidade2[20]; // O nome da cidade.
        int populacao2; // populacao: O número de habitantes da cidade
        int pontosturisticos2; // Pontos Turísticos: o número de pontos turísticos da cidade.
        float area2; // area: A área da cidade em quilômetros quadrados.
        float pib2;  // PIB: O Produto Interno Bruto da cidade

        
        //Cadastro das Cartas:
        //Solicite ao usuário que insira as informações de cada cidade em seus determinados campos.

        //Cadastro da primeira carta.

        printf("Insira os dados da Primeira Carta:\n");
        
        printf("Estado (A-H): ");
        scanf(" %c", &estado1);

        printf("Código da Carta (ex: A01): ");
        scanf("%s", codigo1);   

        printf("Nome da cidade: ");
        scanf(" %s", nomeCidade1);

        printf("População: ");
        scanf("%d", &populacao1);

        printf("Área (em km²): ");
        scanf("%f", &area1);

        printf("PIB (em bilhões de reais): ");
        scanf("%f", &pib1);

        printf("Número de pontos turísticos: ");
        scanf("%d", &pontosturisticos1);

        //Cadastro da segunda carta

        printf("Insira os dados da Segunda Carta:\n");
        
        printf("Estado (A-H): ");
        scanf(" %c", &estado2);

        printf("Código da Carta (ex: A01): ");
        scanf("%s", codigo2);   

        printf("Nome da cidade: ");
        scanf(" %s", nomeCidade2);

        printf("População: ");
        scanf("%d", &populacao2);

        printf("Área (em km²): ");
        scanf("%f", &area2);

        printf("PIB (em bilhões de reais): ");
        scanf("%f", &pib2);

        printf("Número de pontos turísticos: ");
        scanf("%d", &pontosturisticos2);


        return 0;

}
