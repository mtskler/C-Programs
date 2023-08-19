#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, num3, num4;
    puts("Digite 4 números para a realização da soma: ");
    puts("Primeiro número:");
    scanf("%d", &num1);

    puts("Segundo número:");
    scanf("%d", &num2);

    puts("Terceiro número:");
    scanf("%d", &num3);

    puts("Quarto número:");
    scanf("%d", &num4);
    printf("O resultado é: %d", num1 + num2 + num3 + num4);
}