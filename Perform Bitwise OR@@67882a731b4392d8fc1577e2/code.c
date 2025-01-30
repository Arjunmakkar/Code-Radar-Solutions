#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int bitwise=a|b;
    if(bitwise){
        print("%d\n",bitwise);
    }
    return 0;

}