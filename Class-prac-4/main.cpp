#include<iostream>
using namespace std;
class player
{
     public:

 char name[10];
 int age, runs, hi, lo, tsts , avg;

    //syntax    class classname 

   void input_value ()     // syntax data_type function_name()   input function created which takes values
   {
       cout<<"enter player name:"<<endl;
       cin>>name;
       cout<<"enter player age:"<<endl;
       cin>>age;
        cout<<"enter player runs:"<<endl;
        cin>>runs;
       cout<<"enter highest score:"<<endl;
       cin>>hi;
       cout<<"Enter Lowest Score: "<<endl;
       cin>>lo;
       cout<<"enter total tests:"<<endl;
       cin>>tsts;
 
}
    void output_value()  // output funct  i o n         
    {
       
        cout<<"name:"<<name<<endl;
        cout<<"Runs"<<runs<<endl;
        cout<<"High Score:"<<hi<<endl;
        cout<<"low score:"<<lo<<endl;
        cout<<"Total Tests"<<tsts<<endl;       
    }
    void average(){
        cout<<"Average: "<<runs/tsts;
    }

};                //ends with semicolon    class ends here

int main()

{
  player s1;

  s1.input_value();

  s1.output_value();
  s1.average();

}
