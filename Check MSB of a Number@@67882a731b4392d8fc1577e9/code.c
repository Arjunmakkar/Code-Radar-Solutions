#include<stdio.h>
#include<limits.h>
int main(){
    int num;
    scanf("%d",&num);
    int msb_position=sizeof(int) * CHAR_BIT-1;
    int mask=1<<msb_position;
    int(num & mask){
        printf("Set\n");
    }else{
        printf("Not Set\n");
        }
    return 0;
}