#include<iostream>
using namespace std;
class constr
{
 public:
 int a1;
 constr(int x) // this is a constructure 
  {
   a1=x; // a1=10
  }
};

int main()
{
 constr c1(10); // class_name objectName(10)
 cout << c1.a1; // objectname.variable/parameter inside a constructorr
}
