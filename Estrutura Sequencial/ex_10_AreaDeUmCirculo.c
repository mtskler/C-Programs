#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    float raio;
    puts("Insira o raio:");
    scanf("%f", &raio);
    printf("�rea do c�rculo: %.2f", 3.14 * (raio*raio));
}