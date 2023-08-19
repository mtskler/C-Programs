#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float sal, porc;
    puts("Digite o salário:");
    scanf("%f", &sal);
    fflush(stdin);
    puts("Insira o percentual de aumento:");
    scanf("%f", &porc);

    printf("Valor do aumento: R$%.2f\n", (sal*porc)/100);
    printf("Novo salário: R$%.2f\n", ((sal*porc)/100)+sal);
}