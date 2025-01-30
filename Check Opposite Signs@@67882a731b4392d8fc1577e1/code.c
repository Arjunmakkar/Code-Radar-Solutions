#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int oppositeSigns=(a*b<0);
    if(oppositeSigns){
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}