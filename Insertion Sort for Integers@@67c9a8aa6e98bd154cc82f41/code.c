void insertionSort(int arr[],int n){
    int i,j,n;
    for(i=1;i<n;i++){
        m=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>m){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=m;
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}