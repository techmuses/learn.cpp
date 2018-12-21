#include<iostream>
using namespace std;
class sample
{
char nm;
public:

    void input()
    {
        cin>>nm;
    }
    void output()
    {
        //cout<<"no="<<no<<endl;
        cout<<"name"<<nm;
    }
};
int main()
{
    int n;
    sample s1[20];

cout<<"enter array count";
cin>>n;
for(int i=0;i<n;i++)
{
    s1[i].input();

}
for(int i=0;i<n;i++)
{
    s1[i].output();

}
}
