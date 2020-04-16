#include <stdio.h>

main(){
    float metragem1,metragem2,resultado;
    int resp;

    metragem1 = 0;
    metragem2 = 0;
    resultado = 0;
    
    do{
        printf("######  C A L C U L O   D E   M E T R O S   Q U A D R A D O S   ###### \n \n");
        printf("\n \n Digite a primeira meragem do terreno:\n");
        scanf("%f", &metragem1);
        printf("\n \n Digite a segunda meragem do terreno:\n");
        scanf("%f", &metragem2);

        resultado = (metragem1*metragem2);

        printf("\n\n O Terreno tem = %.2f M2 \n", resultado);
        printf("Digite 1 para continuar ou 2 para sair \n");

        scanf("%d", &resp);
    }while(resp==1);

    return 0;
}