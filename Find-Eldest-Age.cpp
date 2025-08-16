#include<iostream>
using namespace std;
int main(){
    int name1;
    cout<<"Enter the Younas Age :";
    cin>>name1;
        int name2;
        cout<<"\nEnter the Kashif Age :";
    cin>>name2;
        int name3;
    cout<<"\nEnter the Atif Age :";
    cin>>name3;
    if(name1>name2 && name1>name3){
    cout<<"The eldest is younas";
    }
      else if(name2>name1 && name2>name3){
    cout<<"The eldest is Kashif";
      }
   else if(name3>name2 && name3>name1){
    cout<<"The eldest is Atif";
   }
    else{
    cout<<"No eldest";
}
    
    return 0;
    
}