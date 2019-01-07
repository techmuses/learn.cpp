#include<iostream>
using namespace std;
int main(){
    int i=10;
    int &j=i;
    cout<<"Address of I =" <<&i<<endl;
cout<<"Address of j = "<<&j<<endl;
i++;
cout<<"I="<<i<<endl;
j++;
cout<<"J"<<j;
}