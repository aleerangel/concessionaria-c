#include <stdio.h>

#define QTD 10

typedef struct{
    char modelo[30], marca[30], cor[30];
    int ano, preco;
} CARRO;

void leitura(CARRO *carro);
void escrita(CARRO *carro);

int main() {
    CARRO carro[QTD];
    leitura(carro);
    escrita(carro);

    return 0;
}

void leitura(CARRO *carro) {
    for(int i=0; i<QTD; i++) {
        printf("Carro %d:\n", i+1);
        printf("Modelo: ");
        scanf("%s", carro[i].modelo);
        printf("Marca: ");
        scanf("%s", carro[i].marca);
        printf("Ano: ");
        scanf("%d", &carro[i].ano);
        printf("Cor: ");
        scanf("%s", carro[i].cor);
        printf("Preco: ");
        scanf("%d", &carro[i].preco);
        printf("\n");
    }
}

void escrita(CARRO *carro) {
    printf("Carros abaixo de 80 mil:\n");
    for(int i=0; i<QTD; i++) {
        if(carro[i].preco <80000) {
            int pos=1;
            printf("Carro %d:\n\n", pos);
            printf("Modelo: %s\n", carro[i].modelo);
            printf("Marca: %s\n", carro[i].marca);
            printf("Ano: %d\n", carro[i].ano);
            printf("Cor: %s\n", carro[i].cor);
            printf("Preco: %d\n", carro[i].preco);
            printf("\n");
            pos++;
        }
    }
}