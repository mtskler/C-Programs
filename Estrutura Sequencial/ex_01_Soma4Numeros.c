#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, num3, num4;
    puts("Digite 4 n�meros para a realiza��o da soma: ");
    puts("Primeiro n�mero:");
    scanf("%d", &num1);

    puts("Segundo n�mero:");
    scanf("%d", &num2);

    puts("Terceiro n�mero:");
    scanf("%d", &num3);

    puts("Quarto n�mero:");
    scanf("%d", &num4);
    printf("O resultado �: %d", num1 + num2 + num3 + num4);
}