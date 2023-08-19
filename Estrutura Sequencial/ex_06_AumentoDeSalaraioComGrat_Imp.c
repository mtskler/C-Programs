#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    float sal, novosal;
    puts("Insira o salário base:");
    scanf("%f", &sal);
    novosal = sal + sal*0.05 - sal*0.07;
    printf("Salário a receber: R$%.2f", novosal);

    // longer 'dumber' approach
    
    // float sal, imp, grat, novosal;
    // puts("Insira o salário base:");
    // scanf("%f", &sal);
    // grat = (sal*5)/100;
    // imp = (sal*7)/100;
    // novosal = (sal + grat) - imp;

    // printf("Salário a receber: R$%.2f", novosal);
}