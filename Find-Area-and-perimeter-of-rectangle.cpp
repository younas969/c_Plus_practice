#include<iostream>
using namespace std;
int main(){
    float leanth,width,area,perimeter;
    cout<<"Enter The rectangle length :";
    cin>>leanth;
    cout<<"Enter The rectangle width : ";
    cin>>width;
    area=leanth*width ;
    perimeter=2*(leanth+width);
    cout<<"Area of rectangle is = "<<area << endl;
    cout<<"perimeter of rectangle is = "<<perimeter<< endl;
    if(area>perimeter){
        cout<<"Area of rectangle is greater than perimeter "<< endl;
    }
    else if(area<perimeter){
    cout<<"Area of rectangle is less than perimeter "<< endl;
        }
    else{
    cout<<"Area and  perimeter of rectangle are equal "<< endl;
    }
    return 0;
}