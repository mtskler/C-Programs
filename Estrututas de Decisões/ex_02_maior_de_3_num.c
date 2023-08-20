// Desenvolva um algoritmo que receba três números. O algoritmo deve imprimir 
// "Condição satisfeita", na tela, caso o primeiro dado inserido seja maior do que os outros 
// dois  (o  primeiro  não  pode  ser  igual  a  nenhum).  Caso  contrário,  deve  ser  impressa  a 
// mensagem: "Erro".
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float num1, num2, num3;
    printf("Digite três números\n\n");
    printf("Primeiro número: ");
    scanf("%f", &num1);
    printf("Segundo número: ");
    scanf("%f", &num2);
    printf("Terceiro número: ");
    scanf("%f", &num3);
    if (num1 > num2 && num1 > num3)
    {
        printf("\nCondição satisfeita.\n");
    }else
    {
        printf("\nErro.\n");
    }
}
