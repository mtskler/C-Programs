#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    float base, alt;
    puts("Insira a base:");
    scanf("%f", &base);
    fflush(stdin);
    puts("Insira a altura:");
    scanf("%f", &alt);
    printf("Área do triângulo: %.2f", (base*alt)/2);
}