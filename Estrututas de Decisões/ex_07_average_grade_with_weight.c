#include <stdio.h>
int main(){
    // Weights
    const float w_g1 = 2;
    const float w_g2 = 3;
    const float w_g3 = 4;
    // Grades and average
    float g1, g2, g3, ave;
    printf("Type three grades: \n");
    printf("Grade 1 - Lab Work: ");
    scanf("%f", &g1);
    printf("Grade 2 - Semester Test: ");
    scanf("%f", &g2);
    printf("Grade 3 - Final Exam: ");
    scanf("%f", &g3);
    ave = (g1*w_g1 + g2*w_g2 + g3*w_g3) / (w_g1 + w_g2 + w_g3);
    if (ave <= 10 && ave >= 8 )
    {
        printf("\nAverage grade with weight: %.1f --> A.\n", ave);
    }else if (ave < 8 && ave >= 7)
    {
        printf("\nAverage grade with weight: %.1f --> B.\n", ave);
    }else if (ave < 7 && ave >= 6)
    {
        printf("\nAverage grade with weight: %.1f --> C.\n", ave);
    }else if (ave < 6 && ave >= 5)
    {
        printf("\nAverage grade with weight: %.1f --> D.\n", ave);
    }else if (ave < 5 && ave >= 0)
    {
        printf("\nAverage grade with weight: %.1f --> E.\n", ave);
    }else
    {
        printf("\nError. Try again with apropriate grades, (ranging from 0.0 to 10.0).\n");
    }
}