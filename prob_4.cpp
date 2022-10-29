#include <stdio.h>

int main (){
    int bp, sp;
    printf("Enter Buying Price = ");
    scanf("%d", &bp);
    printf("Enter Selling Price = ");
    scanf("%d", &sp);
    if(bp > sp){
        printf("LOSS \n");
    }
    else if(sp > bp){
        printf("PROFIT \n");
    }
    else{
        printf("NO PROFIT NO LOSS \n");
    }

    return 0;

}

