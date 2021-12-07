//this program will print the sum of all positive numbers upto "n"
#include<iostream>
using namespace std;

int main(){
    int n;
    int sum=0;
    cout<<"Enter the value of n :";
    cin>>n;
    for (int i = 2; i <= n; i++)
    {
        if (i%2==0){
            sum+=i;
        }
    }
    cout<<endl<<"The Sum of all positive numbers upto"<<n<<"is :"<<sum;
    return 0;
}