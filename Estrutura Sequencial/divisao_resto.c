#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int num;
    puts("Digite um número:");
    scanf("%d", &num);
    if (num % 2 == 1){
        printf("O número digitado é ímpar!\n");
    }else{
        printf("O número digitado é par!\n");
    }
}