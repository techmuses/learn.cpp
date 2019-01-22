#include<iostream>
using namespace std;
int swap_value(int a , int b){ 
    int temp = 0;
for(int i = 1;i<3;i++){
    a=temp;
    a=b;
    b=temp;
}
}
int swap_address(int &a , int &b){ 
    int temp = 0;
for(int i = 1;i<3;i++){
    a=temp;
    a=b;
    b=temp;
}
}
int main(){
    int a  , b ;
    cout<<"Enter value of A: ";
    cin>>a;
    cout<<endl<<"Enter value of B: ";
    cin>>b;
cout<<endl<<"A="<<a<<endl;
cout<<"B="<<b<<endl;
  cout<<"Call By value";
  swap_value(a,b);
  cout<<"Call By address";
  swap_address(a,b);

 cout<<"After Swap";
cout<<"A="<<a<<endl;
cout<<"B="<<b<<endl;
}
