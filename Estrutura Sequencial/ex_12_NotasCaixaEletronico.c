#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int valor, dois, cinco, dez, vinte, cinq, cem;
    puts("Insira o valor a sacar:");
    scanf("%d", &valor);
    cem = valor / 100;
    valor = valor % 100;
    cinq = valor / 50;
    valor = valor % 50;
    vinte = valor / 20;
    valor = valor % 20;
    dez = valor / 10;
    valor = valor % 10;
    cinco = valor / 5;
    valor = valor % 5;
    dois = valor / 2;

    printf("Nº notas de R$ 100,00 : %d\n", cem);
    printf("Nº notas de R$ 50,00 : %d\n", cinq);
    printf("Nº notas de R$ 20,00 : %d\n", vinte);
    printf("Nº notas de R$ 10,00 : %d\n", dez);
    printf("Nº notas de R$ 5,00 : %d\n", cinco);
    printf("Nº notas de R$ 2,00 : %d\n", dois);
}