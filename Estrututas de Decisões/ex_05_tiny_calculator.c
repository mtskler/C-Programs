// Desenvolva  um  algoritmo  que  simule  uma  calculadora.  Você  deve  dar  a  opção  de  o 
// usuário escolher entre: 1 - Somar; 2 - Subtrair; 3 - Multiplicar; 4 - Dividir. O usuário só 
// conseguirá processar dois números inteiros por vez.
#include <stdio.h>
int main(){
    float num1, num2;
    int oper;
    printf("First number: ");
    scanf("%f", &num1);
    printf("Second number: ");
    scanf("%f", &num2);
    printf("\nChoose the type of the operation:\n");
    printf("1 for addition\n");
    printf("2 for subtraction\n");
    printf("3 for multiplication\n");
    printf("4 for division\n");
    printf("->");
    scanf("%d", &oper);
    switch (oper)
    {
    case 1:
        printf("\n%.2f + %.2f = %.2f", num1, num2, num1+num2);
        break;
    case 2:
        printf("\n%.2f - %.2f = %.2f", num1, num2, num1-num2);
        break;
    case 3:
        printf("\n%.2f x %.2f = %.2f", num1, num2, (num1*num2));
        break;
    case 4:
        printf("\n%.2f ÷ %.2f = %.2f", num1, num2, num1/num2);
        break;
    default:
    printf("\nError! \nInvalid operation.\n");
        break;
    }
}