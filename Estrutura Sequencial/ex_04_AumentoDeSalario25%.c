#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    float salario;

    puts("Insira o sal�rio");
    scanf("%f", &salario);
    printf("Novo sal�rio: R$%.2f", ((salario*25)/100)+salario);
}