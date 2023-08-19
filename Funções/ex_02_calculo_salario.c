#include <stdio.h>
#include <locale.h>

float CalcSal(float hor, float sal){
    float valor_hora_trab, sal_brut, imp, sal_final;
    valor_hora_trab = sal / 2.0;
    sal_brut = hor * valor_hora_trab;
    imp = sal_brut * 0.03;
    sal_final = sal_brut - imp;
    return sal_final;
}
int main(){
    // TODO: 
    float sal_ini, sal_fin, horas;
    setlocale(LC_ALL, "Portuguese");
    printf("Informe o número de horas trabalhadas: ");
    scanf("%f", &horas);
    printf("Informe o valor do salário mínimo: ");
    scanf("%f", &sal_ini);
    sal_fin =  CalcSal(horas, sal_ini);
    printf("\nO valor do salário a receber é de: R$%.2f.\n", sal_fin);
}