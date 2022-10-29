#include <stdio.h>
int main(){

    double temp;
    scanf("%lf", &temp);

    if(temp < 0){
        printf("Freezing \n");
    }
    else if(temp >=0 && temp <10){
        printf("Very Cold \n");

    }
    else if(temp >=10 && temp <20){
        printf("Cold \n");

    }
    else if(temp >=20 && temp <30){
        printf("Normal Temperature \n");

    }
    else if(temp >=30 && temp <40){
        printf("Hot \n");

    }
    else{
        printf("Very Hot \n");

    }
    return 0;
}
