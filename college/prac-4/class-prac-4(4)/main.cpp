#include <iostream>
using namespace std;
class Time
{
    // Access specifier
    public:
 
    // Data Members
    int h;
    int m;
    int s;
    int total;
 
 
    // Member Functions()
    void display()
    {
        cout << total << " seconds is equivalent to " << h << " hours " << m
    << " minutes " << s << " seconds"<<endl ;
    }
   
     void setData()
    {
      cout << "input total seconds" <<endl;
      cin >> total;
       
    }
   
     void getSecondsTotal()
    {
      cout << "total seconds" <<endl;
      cout << total;
       
    }
   
    void CalculateTime(){
       
        m = total / 60;
        s = total % 60;
        h = m / 60;
        m = m % 60;
   
 
   
    }
};
 
 
int main() {
 
    // Declare an object of class geeks
    Time t1;
 
   t1.setData();
    t1.CalculateTime();
 
   t1.display();
 
 
    return 0;
}