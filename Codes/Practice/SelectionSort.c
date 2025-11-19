#include <stdio.h>




void printArray(int A[], int n){
    printf("\n\n/****************************/\n\n");
    for(int i=1; i<=n;i++){
        printf("%d ", A[i]);
    }
    printf("\n\n/*****************************/\n\n");
}


void selectionSort(int A[], int n){
    for (int i= 1 ;i<=n-1; i++){
        int minPosition=i;

        for(int j=i+1;j<=n; j++ ){
            if(A[j]<A[minPosition]){
                minPosition=j;
            }
        }
        int temp= A[i];
        A[i]=A[minPosition];
        A[minPosition]=temp;
    }
}

int main(){
    int n;

    printf("Enter the size of the Array:\n");
    scanf("%d", &n);
    int A[n+1];

    printf("Enter the elements of the Array:\n");
    for(int i =1; i<=n; i++){
        scanf("%d",&A[i]);
    }
    printf("The array is:");
    printArray(A,n);
    selectionSort(A, n);
    printf("the sorted Array is:");
    printArray(A,n);

}
