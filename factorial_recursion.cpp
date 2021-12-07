//finding factorial using recursion
#include<iostream>
using namespace std;

int factorial(int n){
    if (n<=1){
        return 1;
    } 
    return n*factorial(n-1);
}

int main(){
    int n;
    cout<<"ENTER A NUMBER TO FIND FACTORIAL : ";
    cin>>n;
    cout<<"THE FACTORIAL OF "<<n<<" IS :"<<factorial(n);
    
    return 0;

}