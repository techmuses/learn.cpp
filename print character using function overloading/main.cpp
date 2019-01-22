# include <iostream>
using namespace std;
void func(char a){
    cout<<"char1= "<<a<<endl;
}
void func(int b){
    cout<<"overloaded char= "<<b<<endl;
}
int main(){
    char a;
    int b;
    cin>>a;
    cin>>b;
    func(a);
    func(b);
}