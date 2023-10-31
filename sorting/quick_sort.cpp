#include<iostream>
using namespace std;

int partition(int A[],int l,int h){
    int pivot = A[l];
    int p=l+1;
    int q = h;
    while(p<=q){
        while(A[p]<=pivot){
            p++;
        }
        while(A[q]>pivot){
            q--;
        }
        if(p<q){
            int temp = A[p];
            A[p] = A[q];
            A[q] = temp;
        }
    }
    int temp = A[l];
    A[l] = A[q];
    A[q] = temp;
    return q;
}

void quick_sort(int A[],int l,int h){
    if(l<h){
        int j = partition(A,l,h);
        quick_sort(A,l,j-1);
        quick_sort(A,j+1,h);
    }
}

int main(){
    int A[] = {10,16,8,12,15,6,3,9,5};
    int n = sizeof(A)/sizeof(A[0]);
    quick_sort(A,0,n-1);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}