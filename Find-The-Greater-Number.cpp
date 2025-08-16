#include<iostream>
using namespace std;
int main(){
    int number1,number2,number3;
cout<<"Enter 1st number = ";
cin>>number1;
cout<<"Enter 2nd number = ";
cin>>number2;
cout<<"Enter 3rd number = ";
cin>>number3;
if(number1 > number2 && number1> number3){
cout<< " First Number is greater " << number1;
}
else if(number2 > number1 && number2 > number3){
cout<< " Second Number is greater " <<number2 ;
}
else{
    cout<<"Third Number is  greater "<< number3;

}
    return 0;
}