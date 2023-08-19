#include <stdio.h>
#include <locale.h>
float CalcDeg(double deg, double alt){
    double num_deg = (alt*100)/deg;
    return num_deg;
}
int main(){
    double cm_deg, alt_esc, deg;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira a altura de cada degrau em centímetros:\n");
    scanf("%lf", &cm_deg);
    printf("Insira a altura da escada em metros:\n");
    scanf("%lf", &alt_esc);
    deg = CalcDeg(cm_deg, alt_esc);
    printf("Número de degrais: %.0lf", deg);
}