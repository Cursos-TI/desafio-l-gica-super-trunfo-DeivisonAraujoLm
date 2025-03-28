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

// Função para comparar dois atributos
void compararCartasAvancado(struct Carta carta1, struct Carta carta2, int atributo1, int atributo2) {
    printf("\nComparação baseada em dois atributos escolhidos:\n");

    int vencedorAtributo1 = 0, vencedorAtributo2 = 0;

    // Comparação do primeiro atributo
    if (atributo1 == 1) {
        vencedorAtributo1 = (carta1.populacao < carta2.populacao) ? 1 : 2;  // Menor população vence
    } else if (atributo1 == 2) {
        vencedorAtributo1 = (carta1.area > carta2.area) ? 1 : 2;  // Maior área vence
    } else if (atributo1 == 3) {
        vencedorAtributo1 = (carta1.PIB > carta2.PIB) ? 1 : 2;  // Maior PIB vence
    } else if (atributo1 == 4) {
        vencedorAtributo1 = (carta1.pontosTuristicos > carta2.pontosTuristicos) ? 1 : 2;  // Mais pontos turísticos vence
    }

    // Comparação do segundo atributo
    if (atributo2 == 1) {
        vencedorAtributo2 = (carta1.populacao < carta2.populacao) ? 1 : 2;  // Menor população vence
    } else if (atributo2 == 2) {
        vencedorAtributo2 = (carta1.area > carta2.area) ? 1 : 2;  // Maior área vence
    } else if (atributo2 == 3) {
        vencedorAtributo2 = (carta1.PIB > carta2.PIB) ? 1 : 2;  // Maior PIB vence
    } else if (atributo2 == 4) {
        vencedorAtributo2 = (carta1.pontosTuristicos > carta2.pontosTuristicos) ? 1 : 2;  // Mais pontos turísticos vence
    }

    // Determinar o vencedor geral
    if (vencedorAtributo1 == vencedorAtributo2) {
        printf("Vencedor geral: %s\n", vencedorAtributo1 == 1 ? carta1.nome : carta2.nome);
    } else {
        printf("Resultado: Empate, cada carta venceu um dos atributos selecionados!\n");
    }
}

int main() {
    struct Carta carta1, carta2;
    int atributo1, atributo2;

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

    // Menu dinâmico para escolha de atributos
    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1. População (menor vence)\n");
    printf("2. Área (maior vence)\n");
    printf("3. PIB (maior vence)\n");
    printf("4. Pontos Turísticos (maior vence)\n");
    printf("Opção: ");
    scanf("%d", &atributo1);

    printf("\nEscolha o segundo atributo para comparação:\n");
    printf("1. População (menor vence)\n");
    printf("2. Área (maior vence)\n");
    printf("3. PIB (maior vence)\n");
    printf("4. Pontos Turísticos (maior vence)\n");
    printf("Opção: ");
    scanf("%d", &atributo2);

    // Comparar cartas com base nos atributos selecionados
    compararCartasAvancado(carta1, carta2, atributo1, atributo2);

    return 0;
}