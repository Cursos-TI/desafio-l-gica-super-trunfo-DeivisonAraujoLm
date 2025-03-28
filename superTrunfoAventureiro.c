#include <stdio.h>
#include <string.h>

// Estrutura para armazenar informações da carta
struct Carta {
    char estado[50];
    char codigo[10];
    char nome[50];
    int populacao;
    float area;
    float PIB;
    int pontosTuristicos;
};

// Função para comparar as cartas com base no atributo selecionado
void compararCartas(struct Carta carta1, struct Carta carta2, int opcao) {
    switch (opcao) {
        case 1:
            printf("\nComparação por População:\n");
            if (carta1.populacao > carta2.populacao) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta1.populacao < carta2.populacao) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate entre %s e %s\n", carta1.nome, carta2.nome);
            }
            break;
        case 2:
            printf("\nComparação por Área:\n");
            if (carta1.area > carta2.area) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta1.area < carta2.area) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate entre %s e %s\n", carta1.nome, carta2.nome);
            }
            break;
        case 3:
            printf("\nComparação por PIB:\n");
            if (carta1.PIB > carta2.PIB) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta1.PIB < carta2.PIB) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate entre %s e %s\n", carta1.nome, carta2.nome);
            }
            break;
        case 4:
            printf("\nComparação por Pontos Turísticos:\n");
            if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta1.pontosTuristicos < carta2.pontosTuristicos) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate entre %s e %s\n", carta1.nome, carta2.nome);
            }
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
}

int main() {
    struct Carta carta1, carta2;
    int opcao;

    // Cadastro das cartas
    printf("Cadastro da primeira carta:\n");
    printf("Estado: ");
    scanf("%s", carta1.estado);
    printf("Código: ");
    scanf("%s", carta1.codigo);
    printf("Nome: ");
    scanf("%s", carta1.nome);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.PIB);
    printf("Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    printf("\nCadastro da segunda carta:\n");
    printf("Estado: ");
    scanf("%s", carta2.estado);
    printf("Código: ");
    scanf("%s", carta2.codigo);
    printf("Nome: ");
    scanf("%s", carta2.nome);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.PIB);
    printf("Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Menu interativo
    printf("\nEscolha um atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    // Comparar cartas
    compararCartas(carta1, carta2, opcao);

    return 0;
}