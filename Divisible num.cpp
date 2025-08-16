#include<iostream>
using namespace std;
int main (){
    int a;
    cout<<"Enter a number ";
    cin>>a;
    if( (a%5==0 || a%3==0 ) && (a!=15)){
    cout<<"Divisible Number ";
    }
    else{
    cout<<"Not Divisoble number ";
    }
    return 0;
}