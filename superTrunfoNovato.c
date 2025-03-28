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

// Função para comparar cartas
void compararCartas(struct Carta carta1, struct Carta carta2, char atributo[]) {
    printf("\nComparação baseada no atributo: %s\n", atributo);

    if (strcmp(atributo, "populacao") == 0) {
        if (carta1.populacao > carta2.populacao) {
            printf("Vencedor: %s\n", carta1.nome);
        } else {
            printf("Vencedor: %s\n", carta2.nome);
        }
    }
    // Adicione mais comparações para outros atributos...
}

int main() {
    struct Carta carta1, carta2;

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
    // Repita para carta2...

    // Comparação
    compararCartas(carta1, carta2, "populacao");

    return 0;
}