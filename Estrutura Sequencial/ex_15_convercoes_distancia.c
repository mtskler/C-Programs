#include <stdio.h>
#include <locale.h>

int main(){
    float pes, poleg, jarda, milha;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite a medida em pés: ");
    scanf("%f", &pes);
    poleg = pes * 12;
    jarda = pes / 3;
    milha = jarda / 1760;
    printf("\n%.2f pés são:\n", pes);
    printf("%.2f polegadas;\n", poleg);
    printf("%.2f jardas;\n", jarda);
    printf("%.5f milhas;\n", milha);
    return 0;
}