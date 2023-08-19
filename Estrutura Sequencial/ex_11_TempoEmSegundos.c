#include <stdio.h>
int main(){
    int seg, min, hr;
    printf("Insira o tempo em segundos:\n");
    scanf("%d", &seg);
    hr = seg / 3600;
    seg = seg % 3600;
    min = seg / 60;
    seg = seg % 60;
    printf("Horas: %d.\n", hr);
    printf("Minutos: %d.\n", min);
}