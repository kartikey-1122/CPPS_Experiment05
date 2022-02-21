#include <iostream>
using namespace std;
int sum(int a , int b){
    return a+b;
}

int main (){
    int num1,num2;
    cout<<"Enter First Number: "<<endl;
    cin>>num1;
    cout<<"Enter Second Number: ";
    cin>>num2;
    cout<<"Additon of "<<num1<<" & "<<num2<<" is "<<sum(num1,num2)<<endl;
    return 0;
}