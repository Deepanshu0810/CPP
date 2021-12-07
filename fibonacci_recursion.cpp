#include<iostream>
using namespace std;

int fibonacci(int a){
    if (a==0 or a==1){
        return a;
    }
    return fibonacci(a-1) + fibonacci(a-2);
}
int main()
{
    int n;
    cout<<"enter n to find the nth fibonnaci :";
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}
