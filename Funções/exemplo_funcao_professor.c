#include <stdio.h>
#include <locale.h>
float calcLucroDist(float p_fab, float por_dist){
    return p_fab * por_dist / 100.0;
}
float calcImpostos(float p_fab, float por_imp){
    return p_fab * por_imp / 100.0;
}
float calcPrecoFinal(float p_fab, float v_dist, float v_imp){
    return p_fab + v_dist + v_imp;
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    float preco_f, porce_dist, porc_i, lucr_dist, imp, vlr_f;
    printf("Insira o preço da fábrica:\n");
    scanf("%f", &preco_f);
    printf("Insira a porcentagem de lucro do distribuidor:\n");
    scanf("%f", &porce_dist);
    printf("Insira a porcentagem de impostos:\n");
    scanf("%f", &porc_i);
    lucr_dist = calcLucroDist(preco_f, porce_dist);
    imp = calcImpostos(preco_f, porc_i);
    vlr_f = calcPrecoFinal(preco_f, lucr_dist, imp);
    printf("Lucro do distribuidor: R$ %.2f.\n", lucr_dist);
    printf("Impostos: R$ %.2f.\n", imp);
    printf("Valor final: R$ %.2f.\n", vlr_f);
}