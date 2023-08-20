// (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba dois números 
// e  mostre  o  maior  deles.  Caso  eles  sejam  iguais,  deve-se  mostrar  a  mensagem  "Os 
// números são iguais"
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num1, num2;
    printf("Digite dois números para saber qual o maior:\n");
    printf("Primeiro número: ");
    scanf("%d", &num1);
    printf("Segundo número: ");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("O número %d é maior.", num1);
    }else if (num2 > num1)
    {
        printf("O número %d é maior.", num2);
    }else
    {
        printf("Os dois números são iguais.");
    }
}