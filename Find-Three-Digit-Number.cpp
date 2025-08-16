#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter any three Digit Number: ";
    cin>>number;
    if(number > 99 &&  number < 1000){
    cout<<"congrats you have entered corret Three Digit Number";
    }
    else{
    cout<<"opps! NOt a Three Digit number Try Again";
    }
    return 0;
}