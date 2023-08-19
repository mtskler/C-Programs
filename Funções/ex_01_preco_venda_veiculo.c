#include <stdio.h>
#include <locale.h>
float CalcLucroDist(float preco_fa, float perc_lu){ /* Primeira fun��o, c�lculo do lucro distribuidor */
    return preco_fa * perc_lu / 100;
}
float CalcValorImp(float preco_fa, float perc_im){ /* Segunda fun��o, c�lculo do imposto */
    return preco_fa * perc_im / 100;
}
float CalcValorFinal(float preco_fa, float perc_lu, float perc_im){ /* Terceira fun��o, pre�o final */
    return preco_fa + perc_lu + perc_im;
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    float preco_fab, perc_lucro, perc_imp, lucro_distribuidor, valor_impostos, preco;
    /*   Obten��o dos dados   */
    printf("Digite o pre�o de f�brica do ve�culo: ");
    scanf("%f", &preco_fab); 
    printf("Digite a porcentagem de lucro: ");
    scanf("%f", &perc_lucro);
    printf("Digite a porcentagem de impostos: ");
    scanf("%f", &perc_imp);
    /*   Exibindo os resultados:   */
    lucro_distribuidor = CalcLucroDist(preco_fab, perc_lucro);  
    printf("\nO lucro do distribuidor �: %.2f.", lucro_distribuidor);
    valor_impostos = CalcValorImp(preco_fab, perc_imp);
    printf("\nO valor de impostos �: %.2f.", valor_impostos);
    preco = CalcValorFinal(preco_fab, lucro_distribuidor, valor_impostos);
    printf("\nO pre�o final do veiculo �: %.2f.\n", preco);
}