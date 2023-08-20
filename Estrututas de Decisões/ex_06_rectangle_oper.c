// Desenvolva um algoritmo que pe�a para que o usu�rio informe a base e a altura de um 
// ret�ngulo,  e  um  terceiro  n�mero  inteiro  "op".  Caso  o  usu�rio  escolha  "op"  igual  a  0, 
// calcule e mostre o per�metro do ret�ngulo. Caso o usu�rio insira um valor 1 para "op", 
// calcule e mostre a �rea do ret�ngulo. Se o usu�rio inserir um valor diferente de 0 e 1 
// para "op", mostrar a mensagem "Op��o inv�lida.".
#include <stdio.h>
#include <math.h>
#include <ctype.h>
int main(){
    float base, height, area, per;
    int op;
    printf("Type the base of the rectangle: ");
    scanf("%f", &base);
    printf("Type the height of the rectangle: ");
    scanf("%f", &height);
    printf("\nChoose the operation:");
    printf("\n0 for perimeter.");
    printf("\n1 for area.\n");
    scanf("%d", &op);
    area = base * height;
    per = (base + height) * 2;
    if (op == 0)
    {
        printf("\nPerimeter: %.2f", per);
    }else if (op == 1)
    {
        printf("\nArea: %.2f\n", area);
    }else
    {
        printf("\nInvalid operation.\n");
    }
}