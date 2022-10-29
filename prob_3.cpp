#include <stdio.h>
int main(){
    int a,b ,c;
    scanf("%d %d %d", &a, &b, &c);

    if(a > 0&& b>0 && c > 0 && (a+b+c == 180)){
        printf("Triangle is Possible \n");
    }else{
    printf("Triangle is not Possible \n");
    }
    return 0;
}
