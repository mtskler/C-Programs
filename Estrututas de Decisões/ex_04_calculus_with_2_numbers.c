// Desenvolva  um  algoritmo  que  receba  dois  números,  calcule  e  mostre  a  multiplicação 
// entre eles, se ambos forem iguais. Caso o primeiro seja maior que o segundo, mostre a 
// subtração do primeiro pelo segundo. Caso contrário, mostre a soma entre os dois.
#include <stdio.h>
int main(){
    float num1, num2;
    printf("Type a number: ");
    scanf("%f", &num1);
    printf("Type another number: ");
    scanf("%f", &num2);
    if (num1 == num2)
    {
        printf("%.2f times %.2f is equal to: %.2f", num1, num2, num1*num2);
    }else if (num1 > num2)
    {
        printf("%.2f minus %.2f is equal to: %.2f", num1, num2, num1-num2);
    }else
    {
        printf("%.2f plus %.2f is equal to: %.2f", num1, num2, num1+num2);
    }
    
    
    
}