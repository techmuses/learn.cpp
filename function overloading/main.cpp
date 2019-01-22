# include <iostream>
using namespace std;
void func(char c){
    cout<<c<<endl;
}
void func(int a){
    cout<<a<<endl;
}
void func(float b){
    cout<<b;
}
int main(){
    int a;
    char a,c;
    float b;
    cin>>a>>b>>c;
    func(c);
    func(a);
    func(b);
}