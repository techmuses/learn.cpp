#include<iostream>
using namespace std;
int &zerosmaller(int &a, int &b){
   
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int a,b;
     cin>>a>>b;
    zerosmaller(a,b)= 0;
    cout<<a<<b;
}