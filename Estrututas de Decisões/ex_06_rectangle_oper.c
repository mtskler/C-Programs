// Desenvolva um algoritmo que peça para que o usuário informe a base e a altura de um 
// retângulo,  e  um  terceiro  número  inteiro  "op".  Caso  o  usuário  escolha  "op"  igual  a  0, 
// calcule e mostre o perímetro do retângulo. Caso o usuário insira um valor 1 para "op", 
// calcule e mostre a área do retângulo. Se o usuário inserir um valor diferente de 0 e 1 
// para "op", mostrar a mensagem "Opção inválida.".
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