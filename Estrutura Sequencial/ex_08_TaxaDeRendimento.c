#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    float depos,taxa;
    puts("Insira o valor do dep�sito:");
    scanf("%f", &depos);
    fflush(stdin);
    puts("Qual � a taxa?");
    scanf("%f", &taxa);
    printf("Rendimento: R$%.2f\n", (depos*taxa)/100);
    printf("Valor total: R$%.2f\n", depos + (depos*taxa)/100);
}