#include<stdio.h>
int main(){
    int n;
    int odd=0;
    int even=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(n%2==0){
            even++;
        }else{
            odd++;
        }
    }
    printf("%d %d\n",even,odd);
    return 0;
}