#include<stdio.h>
int findLargest(int arr[],int size){ 
    int max=arr[0];                 
    for(int i=1;i<size;i++){   
        if(arr[i]>max)              
            max=arr[i];              
    }
    return max;
}
int main(){
    int size;
    printf("enter array size: ");
    scanf("%d",&size);                
    int arr[size];                     
    printf("enter %d elements:\n",size);
    for (int i=0;i<size;i++)     
        scanf("%d",&arr[i]);
    int largest=findLargest(arr,size);   
    printf("largest element=%d",largest);
    return 0;
}

