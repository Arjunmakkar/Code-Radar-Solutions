#include<stdio.h>
int main(){
    int a,b,c;
    float avg;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    avg=(float)(a+b+c)/3;
    printf("Average: %.2f\n",avg);
    return 0;
}