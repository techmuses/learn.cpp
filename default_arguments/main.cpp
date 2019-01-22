// tablearg.cpp
// demonstrates funciotn arguments
# include <iostream>
using namespace std;
void repchar ( char ch )
{
for (int j=0; j<45; j++) {//function body
cout << ch;
cout << endl;
}
} //function declaration
void repchar1 ( char ch )
{
for (int j=0; j<45; j++) {//function body
cout << ch;
cout << endl;
}
} 
void repchar2 ( char ch , int a)
{
for (int j=0; j<45; j++) {//function body
cout << a;
cout << endl;
}
} 
int main ()
{
repchar('*');
repchar1('+');
repchar2('+', 30);
return 0;
}
