// (Adaptado de ASCENCIO e CAMPOS, 2008) Fa�a um programa que receba um n�mero 
// inteiro e verifique se esse n�mero � par ou �mpar. 
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