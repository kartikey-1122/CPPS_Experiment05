#include<iostream>
using namespace std;
void swap(int& a,int& b){
    int z=a;
    a=b;
    b=z;
}
int main(){
    int a=211050036,b=59;
    cout<<"The value of a and b before swapping is  "<<a<<" & "<<b<<endl;
    swap(a,b);
    cout<<"The value of a and b after swapping is "<<a<<" & "<<b<<endl;
    return 0;
}