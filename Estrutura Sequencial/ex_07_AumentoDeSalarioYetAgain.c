#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    float salBase;
    puts("Insira o sal�rio base");
    scanf("%f", &salBase);
    printf("Sal�rio a receber: R$%.2f", (salBase - salBase*0.10)+600);
}