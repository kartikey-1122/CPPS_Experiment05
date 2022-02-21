// factorial of number
#include <iostream>
using namespace std;
int factorial(int a)
{
    if (a <= 1)
    {
        return 1;
    }
    return a *factorial(a - 1);
}
int main(){
    int number;
    cout<<"Enter a number to find factorial of it: ";
    cin>>number;
    factorial(number);
    cout<<"The factorial of "<<number<<" is "<<factorial(number)<<endl;

    return 0;
}