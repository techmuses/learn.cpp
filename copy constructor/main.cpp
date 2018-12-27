#include<iostream>
using namespace std;
class sample 
{
    private:
    int x, y;   //data members

    public:

    sample(int x1, int y1) 
    {
        x = x1; // x= 10
        y = y1; // y = 15
    }
     /* Copy constructor */
/*
Classname(const classname & objectname)
{
    . . . .
}
*/
   
    sample (const sample &obj_copy)
    {
        x = obj_copy.x;
        y = obj_copy.y;
    }

    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
};
/* main function */
int main()
{
    sample obj1(10, 15);     // Normal constructor
    sample obj2 = obj1;      // Copy constructor = normal constructor 
    cout<<"Normal constructor : ";
    obj1.display();
    cout<<"Copy constructor : ";
    obj2.display();
    return 0;
}
