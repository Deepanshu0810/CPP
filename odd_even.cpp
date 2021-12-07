#include<iostream>
using namespace std;

void check_even(int a){
    if (a%2==0){
        cout<<a<<" is even"<<endl;
    }
    else{
        cout<<a<<" is odd"<<endl;
    }    
}
int main(){
    int n1;
    cout<<"ENTER A NUMBERS :"<<endl;
    cin>>n1;
    check_even(n1);
    return 0;

}