#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d/n",&arr[i]);
    }
    int freq;
    for(int i=0;i<n;i++){
        freq=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                freq++;
            }
        }
        printf(freq);
    }
    return 0;


}