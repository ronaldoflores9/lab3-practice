#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    cout<<"Enter first number: "<<endl;
    cin>> num1;
    cout<<"Enter second number: "<<endl;
    cin>>num2;
    if (num1<num2){
        cout<<"Num 2 is bigger"<<endl;
    }else{
        cout<<"Num 1 is bigger"<<endl;
    }
    return 0;
}