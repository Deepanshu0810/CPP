#include<iostream>
using namespace std;
bool flag=0;
void prime(int a){
    for (int i = 2; i < a; i++)
    {
        if (a%i == 0){
            cout<<"THE NUMBER IS NOT PRIME"<<endl;
            flag=1;
            break;
        }
    }
    if (flag==0){
        cout<<"THE NUMBER IS PRIME";
    }
}
int main(){
    int n;
    cout<<"ENTER A NUMBER : ";
    cin>>n;
    cout<<endl;
    prime(n);
    return 0;
}