#include<iostream>

void selection_sort(int A[], int n){
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(A[j]<min){
                min=j;
            }
        }
        if(min!=i){
            int temp = A[i];
            A[i] = A[min];
            A[min] = temp;
        }
    }
}

int main(){
    int A[] = {2,7,4,1,5,3};
    int n = sizeof(A)/sizeof(A[0]);
    selection_sort(A,n);
    return 0;
}