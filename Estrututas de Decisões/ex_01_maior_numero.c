// (Adaptado de ASCENCIO e CAMPOS, 2008) Fa�a um programa que receba dois n�meros 
// e  mostre  o  maior  deles.  Caso  eles  sejam  iguais,  deve-se  mostrar  a  mensagem  "Os 
// n�meros s�o iguais"
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num1, num2;
    printf("Digite dois n�meros para saber qual o maior:\n");
    printf("Primeiro n�mero: ");
    scanf("%d", &num1);
    printf("Segundo n�mero: ");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("O n�mero %d � maior.", num1);
    }else if (num2 > num1)
    {
        printf("O n�mero %d � maior.", num2);
    }else
    {
        printf("Os dois n�meros s�o iguais.");
    }
}