#include <iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout << "Enter 3 integer a , b , c: ";
    cin >> a>>b>>c;

    cout << "You entered " <<endl<<a<<endl<<b<<endl<<c<<endl;
    if(a>b){
        if(a>c){
            cout<<" a is bigger";
        }
        else{
            cout<<"c is bigger";
        }
    }
    else {
        if(b>c){
            cout<<"b is bigger";
        }
        else{
            cout<<"c is bigger";
        }
    }
}
