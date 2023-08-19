#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    float num, quad, cubo, raizQuad, raizCub;
    puts("Insira um número:");
    scanf("%f", &num);

    quad = num * num;
    cubo = num * num * num;
    raizQuad = sqrt(num);
    raizCub = pow(num, 1.0/3.0);

    printf("Quadrado: %f\n", quad);
    printf("Cubo: %f\n", cubo);
    printf("Raiz quadrada: %f\n", raizQuad);
    printf("Raiz cúbica: %f", raizCub);
    return 0;
}