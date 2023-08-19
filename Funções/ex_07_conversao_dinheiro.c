#include <stdio.h>
#include <locale.h>
void Convers(float real, float *dola, float *eur, float *ien){
    *dola = real/4;
    *eur = real/4.25;
    *ien = real/0.10;
}
int main(){
    float reais, dol, euro, iene;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite a quantidade de dinheiro: ");
    scanf("%f", &reais);
    Convers(reais, &dol, &euro, &iene);
    printf("Em dólares: %.2f\n", dol);
    printf("Em euros: %.2f\n", euro);
    printf("Em ienes: %.2f\n", iene);
}