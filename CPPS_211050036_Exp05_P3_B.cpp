#include <iostream>
using namespace std;
int factorial(int a){
    if(a<=1){
        return 1;
    }
    return a*factorial(a-1);
}

int main (){
    int deriveNumber=(36%6)+7;
    cout<<"Factorial of "<<deriveNumber<<" is "<<factorial(deriveNumber);
    return 0;
}