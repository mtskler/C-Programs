#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int ano_nas, ano_atual, idade, ano_2030;
    printf("Digite seu ano de nascimento: ");
    scanf("%d", &ano_nas);
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);
    idade = ano_atual - ano_nas;
    ano_2030 = 2030 - ano_nas;
    printf("\nVocê tem %d anos hoje, e em 2030 terá %d.\n", idade, ano_2030);
    return(0);
}