#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, nota3, media;
    puts("Informe três notas, em sequência:");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);
    media = (nota1 + nota2 + nota3) / 3;
    printf("Média aritmética: %.2f", media);
}