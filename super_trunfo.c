#include <stdio.h>

int main(){
    int População;
    float Área;
    float PIB;
    int Número;

    printf("Digite sua População: \n");
    scanf("%d", &População);

    printf("Digite sua Área: \n");
    scanf("%f", &Área);

    printf("Digite seu PIB: \n");
    scanf("%f", &PIB);

    printf("Digite seu Número: \n");
    scanf("%d", &Número);

    printf("População: %d\nÁrea:%2.f km²\n", População, Área);
    printf("PIB: %.2f bilhões de reais\nNúmero de Pontos Turistico: d\n", PIB, Número);


    return 0;
    



}


