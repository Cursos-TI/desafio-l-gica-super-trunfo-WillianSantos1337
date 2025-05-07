#include <stdio.h>

int main() {
    char* estado1;
    int populacao1;
    float area1,pib1,densP1,pibPC1;
    
    char* estado2;
    int populacao2;
    float area2,pib2,densP2,pibPC2;
    estado1 = "SaoPaulo";
    estado2 = "RioJaneiro";
    populacao1 = 6000;
    populacao2 = 200000;
    area1 = 1200;
    area2 = 1500;
    pib1 = 300000;
    pib2 = 30000;
    
    densP1 = (populacao1 / area1);
    pibPC1 = (pib1 / populacao1);
    
    densP2 = (populacao2 / area2);
    pibPC2 = (pib2 / populacao2);
    
        if (pib1 > pib2){
            printf("SAO PAULO GANHOU\n");
        } else {
            printf("RIO DE JANEIRO GANHOU\n");
        }
    printf("O atributo ultilizado foi o PIB");
}
