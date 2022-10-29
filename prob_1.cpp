#include <stdio.h>
int main (){
    double height , incm;
    scanf("%lf", &height);
    incm = height * 2.54;

    if(incm < 150){
        printf("Short \n");
    }
    else if(incm >=150 && incm <= 160){
        printf("Average \n");
    }
    else{
        printf("Tall \n");
    }

    return 0;
}
