#include<iostream>
using namespace std;
class sample
{
    static int c;
    public:
        sample(){
            c++;
        }
static int display(){
    return c;
}
};
int sample :: c;
int main(){
    sample s1,s2,s3,s4;
    cout<<"total Object = "<<sample :: display();
}