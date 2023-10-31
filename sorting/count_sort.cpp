#include<iostream>
using namespace std;

void count_sort(int A[],int n){
    int max = A[0];
    for(int i=1;i<n;i++){
        if(A[i]>max){
            max = A[i];
        }
    }
    int* count = new int[max+1];
    int* ans = new int[n];
    for(int i=0;i<max+1;i++){
        count[i] = 0;
    }
    for(int i=1;i<=max;i++){
        count[i]+=count[i-1];
    }
    for(int i=n-1;i>=0;i--){
        ans[--count[A[i]]] = A[i];
    }
    for(int i=0;i<n;i++){
        A[i] = ans[i];
    }
}

int main(){
    int A[] = {1,4,2,3,5,1,2,3,4,5,1,2,3,4,5};
    int n = sizeof(A)/sizeof(A[0]);
    count_sort(A,n);
    return 0;
}