#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Classificacao do triangulo: informe a medida dos lados apertando a Tecla ENTER para cada medida:\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a< b + c && b < a + c && c < a + b){
        printf("\n\n Dadas as medidas: %d, %d, %d, temos um triangulo" , a,b,c);
        if(a == b && a == c){
            printf("Este e um triangulo EQUILATERO! \n");
        }
        else
            if(a==b || a==c || b==c){
                printf("Este e um triangulo ISOSCELES!\n");
            }
            else
                printf("Este e um triangulo ESCALENO! \n");
    }
    else
        printf("\n\n As medidas fornecidas, %d,%d,%d, Não formam um triangulo \n", a,b,c);
    return 0;
}
