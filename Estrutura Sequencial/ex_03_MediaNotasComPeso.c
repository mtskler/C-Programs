#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
    float n1, n2, n3, mediaf;
    int p1, p2, p3;
    setlocale(LC_ALL, "Portuguese");
    puts("Digite 3 notas e seus respectivos pesos:");

    puts("Insira a primeira nota:");
    scanf("%f", &n1);
    puts("Insira o peso da segunda nota:");
    scanf("%d", &p1);

    puts("Insira a segunda nota:");
    scanf("%f", &n2);
    puts("Insira o peso da segunda nota:");
    scanf("%d", &p2);

    puts("Insira a terceira nota:");
    scanf("%f", &n3);
    puts("Insira o peso da terceira nota:");
    scanf("%d", &p3);

    mediaf = (n1*p1 + n2*p2 + n3*p3)/(p1+p2+p3);
    printf("Média ponderada: %.2f", mediaf);
    system("pause");
}