#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    float num1, num2;
    puts("Insira dois n�meros maiores que zero:");
    printf("Primeiro n�mero: ");
    scanf("%f", &num1);
    printf("Segundo n�mero: ");
    scanf("%f", &num2);

    printf("Resultado: %.2f ^ %.2f = %.2f", num1, num2, pow(num1, num2));
    return(0);
}