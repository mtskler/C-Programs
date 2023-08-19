#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    float salario;

    puts("Insira o salário");
    scanf("%f", &salario);
    printf("Novo salário: R$%.2f", ((salario*25)/100)+salario);
}