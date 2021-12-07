//this program will convert the temperture in celcius to Fahrenheit
#include<iostream>
using namespace std;

int main(){
    float temp;
    float fahren;
    cout<<"enter the temperature in celcius :";
    cin>>temp;
    fahren=((9*temp)/5)+32;
    cout<<endl<<temp<<" degree cecius is "<<fahren<< "degree fahrenheit";
    return 0;
}