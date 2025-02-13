#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b;
    char c;
    scanf("%d%d%c",&a,&b,&c);
    if(c=='+'){
        printf("%d\n",num1+num2);
    }else if(c=='-'){
        printf("%d\n",num1-num2);
    }else if(c=='*'){
        printf("%d\n",num1*num2);
    }else if(c=='/'){
        if(b==0){
            printf("Error");
        }else{
            printf("%d\n",num1/num2);
        }
    }else{
        printf("Error");
    }
    return 0;

}