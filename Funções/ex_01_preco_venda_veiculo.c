#include <stdio.h>
#include <locale.h>
float CalcLucroDist(float preco_fa, float perc_lu){ /* Primeira função, cálculo do lucro distribuidor */
    return preco_fa * perc_lu / 100;
}
float CalcValorImp(float preco_fa, float perc_im){ /* Segunda função, cálculo do imposto */
    return preco_fa * perc_im / 100;
}
float CalcValorFinal(float preco_fa, float perc_lu, float perc_im){ /* Terceira função, preço final */
    return preco_fa + perc_lu + perc_im;
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    float preco_fab, perc_lucro, perc_imp, lucro_distribuidor, valor_impostos, preco;
    /*   Obtenção dos dados   */
    printf("Digite o preço de fábrica do veículo: ");
    scanf("%f", &preco_fab); 
    printf("Digite a porcentagem de lucro: ");
    scanf("%f", &perc_lucro);
    printf("Digite a porcentagem de impostos: ");
    scanf("%f", &perc_imp);
    /*   Exibindo os resultados:   */
    lucro_distribuidor = CalcLucroDist(preco_fab, perc_lucro);  
    printf("\nO lucro do distribuidor é: %.2f.", lucro_distribuidor);
    valor_impostos = CalcValorImp(preco_fab, perc_imp);
    printf("\nO valor de impostos é: %.2f.", valor_impostos);
    preco = CalcValorFinal(preco_fab, lucro_distribuidor, valor_impostos);
    printf("\nO preço final do veiculo é: %.2f.\n", preco);
}