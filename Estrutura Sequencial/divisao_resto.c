#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int num;
    puts("Digite um n�mero:");
    scanf("%d", &num);
    if (num % 2 == 1){
        printf("O n�mero digitado � �mpar!\n");
    }else{
        printf("O n�mero digitado � par!\n");
    }
}