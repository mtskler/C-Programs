#include <stdio.h>
#include <locale.h>
void Fracao(float numero, int *inteiro, float *frac){
    *inteiro = (int)numero;
    *frac = numero - (float)*inteiro;
}
int main(){
    float num, parte_frac;
    int parte_int;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite um número real:");
    scanf("%f", &num);
    Fracao(num, &parte_int, &parte_frac);
    printf("Parte inteira do número: %d\n", parte_int);
    printf("Parte fracionária do número: %f\n", parte_frac);
}