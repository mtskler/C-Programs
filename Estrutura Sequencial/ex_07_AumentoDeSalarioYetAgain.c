#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    float salBase;
    puts("Insira o salário base");
    scanf("%f", &salBase);
    printf("Salário a receber: R$%.2f", (salBase - salBase*0.10)+600);
}