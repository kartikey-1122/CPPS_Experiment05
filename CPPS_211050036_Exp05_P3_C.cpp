// recusrsive funciton to find sum of digits of a number
#include<iostream>
using namespace std;


int sum_of_digit(int n)
{
	if (n == 0)
	return 0;
	return (n % 10 + sum_of_digit(n / 10));
}


int main()
{
	int number;
    cout<<"Enter a Number to find addition of its digits: "<<endl;
    cin>>number;
	int result = sum_of_digit(number);
	cout << "Sum of digits in "<< number<<" is "<<result << endl;
	return 0;
}
