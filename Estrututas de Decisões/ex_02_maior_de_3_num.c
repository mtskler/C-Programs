// Desenvolva um algoritmo que receba tr�s n�meros. O algoritmo deve imprimir 
// "Condi��o satisfeita", na tela, caso o primeiro dado inserido seja maior do que os outros 
// dois  (o  primeiro  n�o  pode  ser  igual  a  nenhum).  Caso  contr�rio,  deve  ser  impressa  a 
// mensagem: "Erro".
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float num1, num2, num3;
    printf("Digite tr�s n�meros\n\n");
    printf("Primeiro n�mero: ");
    scanf("%f", &num1);
    printf("Segundo n�mero: ");
    scanf("%f", &num2);
    printf("Terceiro n�mero: ");
    scanf("%f", &num3);
    if (num1 > num2 && num1 > num3)
    {
        printf("\nCondi��o satisfeita.\n");
    }else
    {
        printf("\nErro.\n");
    }
}
