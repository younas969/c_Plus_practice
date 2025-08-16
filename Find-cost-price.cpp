#include<iostream>
using namespace std;
int main(){
int cp;
        cout<<"Enter the cost price :";
    cin>>cp;

    int sp;
    cout<<"Enter the selling  price :";
    cin>>sp;
    if(sp>cp){
      cout<<"You have proft = " <<sp-cp ;
    }
        else if(sp<cp){
       cout<<"You have  loose  = " <<cp-sp ;
    }
    else{
        cout<<"No proft no loss ";
    }
    return 0;
}