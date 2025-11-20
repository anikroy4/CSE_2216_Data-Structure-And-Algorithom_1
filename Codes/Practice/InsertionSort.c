#include <stdio.h>


void insertionSort(int A[], int n){
    for (int i= 2 ;i<=n; i++){
        int key=A[i];
        int j=i-1;
        while(j>=1 && A[j]>key){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
        
    }
}


void printArray(int A[], int n){
    printf("\n\n/****************************/\n\n");
    for(int i=1; i<=n;i++){
        printf("%d ", A[i]);
    }
    printf("\n\n/*****************************/\n\n");
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
    insertionSort(A, n);
    printf("the sorted Array is:");
    printArray(A,n);

}
