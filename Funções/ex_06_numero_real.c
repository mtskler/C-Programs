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
    printf("Digite um n�mero real:");
    scanf("%f", &num);
    Fracao(num, &parte_int, &parte_frac);
    printf("Parte inteira do n�mero: %d\n", parte_int);
    printf("Parte fracion�ria do n�mero: %f\n", parte_frac);
}