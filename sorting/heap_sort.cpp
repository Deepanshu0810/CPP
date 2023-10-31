#include<iostream>
using namespace std;

void heapify(int A[],int n){
    for(int i=n-1;i>=0;i--){
        int l = 2*i+1;
        int r = 2*i+2;
        int max = i;
        if(l<n && A[l]>A[max]){
            max = l;
        }
        if(r<n && A[r]>A[max]){
            max = r;
        }
        if(max!=i){
            int swap = A[i];
            A[i] = A[max];
            A[max] = swap;
        }
    }
}

void heap_sort(int A[],int n){
    heapify(A,n);
    for(int i=n-1;i>=0;i--){
        int swap = A[0];
        A[0] = A[i];
        A[i] = swap;
        heapify(A,i);
    }
}

int main(){
    int A[] = {10,20,15,12,40,25,18};
    int n = sizeof(A)/sizeof(A[0]);
    heap_sort(A,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}