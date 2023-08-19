#include <stdio.h>
#include <locale.h>
float CalcRacao(float kg_ra, float num_ga, float gr_ra_dia){
    float resto = kg_ra - (num_ga * gr_ra_dia / 1000.0);
    int i;
    for (i=1 ; i<5 ; i++)
    {
        resto = resto - (num_ga * gr_ra_dia / 1000.0);
    }
    return resto;
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    float kg_saco, num_gatos, g_racao_dia, qnt_res;
    printf("Informe o peso do saco de ra��o em kilos: ");
    scanf("%f", &kg_saco);
    printf("Informe a quantidade de gatos: ");
    scanf("%f", &num_gatos);
    printf("Informe a quantidade de ra��o por dia em gramas: ");
    scanf("%f", &g_racao_dia);
    qnt_res = CalcRacao(kg_saco, num_gatos, g_racao_dia);
    printf("\nAp�s 5 dias a quantidade restante de ra��o ser�: %.3fkg.", qnt_res);
}
