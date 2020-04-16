#include <iostream>

int main(int argc, char const *argv[])
{
    char x;
    float valor,desc,total;
    printf("\n Digite o valor da compra \n");
    scanf("%f",&valor);
    printf("\n Digite a letra que representa o seu desconto de acordo com a cor \n");
    printf("\n ====================================================================== \n");
    printf("\n a - Azul \n");
    printf("\n v - Vermelho \n");
    printf("\n b - Branco \n");
    printf("\n ====================================================================== \n");
    printf("\n Digite a opção \n");
    scanf("%s",&x);

    switch (x)
    {
    case 'a':
        printf("Você escoheu azul, seu desconto sera de 30 por cento: \n");
        desc=valor*0.30;
        total=valor-desc;
        printf("O valor da sua compra e %.2f\n",total);
        break;
    
    default:
        printf("Opção invalida\n");
        break;
    }
    return 0;
}
