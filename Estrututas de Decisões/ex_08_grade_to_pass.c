#include <stdio.h>
int main(){
    float g1, g2, g3, ave;
    printf("Give 3 grades for the average. Range 0.0 - 10.0.\n");
    printf("Grade 1: ");
    scanf("%f", &g1);
    printf("Grade 2: ");
    scanf("%f", &g2);
    printf("Grade 3: ");
    scanf("%f", &g3);
    ave = (g1 + g2 + g3) / 3;

    if (ave >= 0 && ave < 3){
        printf("\nFinal grade: %.1f", ave);
        printf("Failed.");
    }else if (ave >= 3 && ave < 7){
        printf("\nFinal grade: %.1f", ave);
        printf(" - Exam.\n");
        printf("Grade needed to pass: %.1f.", 12 - ave);
    }else if (ave >= 7 && ave <= 10){
        printf("\nFinal grade: %.1f", ave);
        printf(" - Approved.");
    }else {
        printf("Error, please try again.");
    }
}