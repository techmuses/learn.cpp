#include<iostream>
using namespace std;
int main(){
    int a  , b ;
    cout<<"Enter value of A: ";
    cin>>a;
    cout<<endl<<"Enter value of B: ";
    cin>>b;
cout<<endl<<"A="<<a<<endl;
cout<<"B="<<b<<endl;
 swap(a,b);
cout<<"A="<<a<<endl;
cout<<"B="<<b<<endl;
}
int swap(int a , int b){ 
    int temp = 0;
for(int i = 1;i<3;i++){
    a=temp;
    a=b;
    b=temp;
}
}