#include<iostream>

void bubble_sort(int A[],int n){
    for(int i= 0;i<n-1;i++){
        bool flag = false;
        for(int j=0;j<n-1-i;j++){
            if(A[j]>A[j+1]){
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                flag = true;
            }
        }
        if(flag==false){
            break;
        }
    }
}

int main(){
    int A[] = {2,7,4,1,5,3};
    int n = sizeof(A)/sizeof(A[0]);
    bubble_sort(A,n);
    return 0;
}