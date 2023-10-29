#include<iostream>

void insertion_sort(int A[],int n){
    for(int i=1;i<n;i++){
        int key = A[i];
        int j = i-1;
        while(j>=0 && A[j]>key){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}

int main(){
    int A[] = {2,7,4,1,5,3};
    int n = sizeof(A)/sizeof(A[0]);
    insertion_sort(A,n);
    return 0;
}