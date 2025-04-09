#include<stdio.h>
int main(){
    int n,i;
    scanf("%d\n",&n);
    int arr[n];
    for( i=0;i<n;i++){
        scanf("%d/n",&arr[i]);
    }
    
   int freq[1000]={0};
    for( i=0;i<n;i++){
        freq[arr[i]]++;  
        
        
    }
    for(int j=0;j<n;j++){
            if(freq[arr[i]]>0)
              {
                printf("%d %d\n",arr[i],freq[arr[i]]);
                freq[arr[i]]=0;
              }
            
        }
    return 0;
}