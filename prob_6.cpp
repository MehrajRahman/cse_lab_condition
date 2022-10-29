#include <stdio.h>
int main(){
    double weight, height,inm, bmi;

    scanf("%lf %lf", &weight, &height);
    inm = height * 0.0254;

    bmi = weight / (inm * inm);

    if(bmi < 18.5){
        printf("BMI = %.3lf \n", bmi);
        printf("Underweight \n");

    }
    else if(bmi >=18.5 && bmi < 25.0){
        printf("BMI = %.3lf \n", bmi);
        printf("Normaal weight \n");

    }
    else if(bmi >= 25.0 && bmi < 30){
        printf("BMI = %.3lf \n", bmi);
        printf("Overweight \n");
    }
    else{
        printf("BMI = %.3lf \n", bmi);
        printf("Obesity \n");
    }




    return 0;
}

