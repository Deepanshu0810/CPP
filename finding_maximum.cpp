#include<iostream>
using namespace std;

void max(int a,int b, int c){
    if (a>b){
        if (a>c){
            cout<<"Maximum is :"<<a<<endl;
        }
        else{
            cout<<"Maximum is :"<<c<<endl;
        }
        }
    else{
        if (b>c){
            cout<<"Maximum is :"<<b<<endl;
        }
        else{
            cout<<"Maximum is :"<<c<<endl;
        }
    }
}

int main(){
    int n1,n2,n3;
    cout<<"Enter Three Numbers :"<<endl;
    cin>>n1;
    cin>>n2;
    cin>>n3;
    max(n1,n2,n3);
    
    return 0;
}