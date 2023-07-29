// sum of all even numbers 1 to n
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int i = 0;

    int sum = 0;
    while(i<=n){
        sum = sum + i;
        i = i + 2;
    }
    cout<<"The sum of even nos is: "<< sum <<endl;

    return 0;
}