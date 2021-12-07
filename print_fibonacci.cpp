#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n to print n terms of fibonnaci :";
    cin>>n;
    int a=0;
    int b=1;
    while (n!=0)
    {
        cout<<a<<endl;
        int c=a+b;
        a=b;
        b=c;
        n=n-1;

    }
    
    return 0;
}
