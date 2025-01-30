#include<stdio.h>
int isMSBSet(int number){
    return(number &(1<<31)) !=0;
}
int main(){
    int number;
    scanf("%d",&number);
    if(isMSBSet(number)){
        printf("Set\n");
    }else{
        printf("Not Set\n");
    }
    return 0;
}