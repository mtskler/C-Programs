// (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba um número 
// inteiro e verifique se esse número é par ou ímpar. 
#include <stdio.h>
int main(){
    int num;
    printf("Type a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("%d is even.", num);
    }else
    {
        printf("%d is odd.", num);
    }
}