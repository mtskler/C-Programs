#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, nota3, media;
    puts("Informe tr�s notas, em sequ�ncia:");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);
    media = (nota1 + nota2 + nota3) / 3;
    printf("M�dia aritm�tica: %.2f", media);
}