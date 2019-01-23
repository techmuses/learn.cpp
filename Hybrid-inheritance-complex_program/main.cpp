
#include<iostream>
#include<fstream>
using namespace std;
class student
{
public:
long int rno;
char nam[100];
char lnam[100];
void getrno()
{
    cout<<"Enter roll no: ";
    cin>>rno;
}

void getnam()
{
    cout<<"Enter student first name: ";
    cin>>nam;
    cout<<"Enter Student last name: ";
    cin>>lnam;
}
void outputrno()
{
    cout<<"Roll no: "<<rno;
}
void outputnam()
{
    cout<<endl<<"Name:  "<<nam<<" ";
    cout<<lnam<<endl;
}
};
class test : public student
{
    protected:
    float sub1,sub2,sub3;  

    public:
        int i;


                void inputmarks()

                {
                cout<<"Enter marks for sub1: ";
                cin>>sub1;
                for(i=1;i>=1;i++)
                {

                if(sub1>30){

            cout<<"Wrong value inserted!!"<<endl<<"Enter values between 0 - 30"<<endl;
             cout<<"Try again! ";
             inputmarks1();
       
        break;
}
else {
    cout<<endl<<"_______Values Accepted For Subject1________"<<endl;
    break;
}
                }
                cout<<"Enter marks for sub2: ";
                cin>>sub2;
                for(i=1;i>=1;i++)
                {

                if(sub2>30)
    {
           cout<<"Wrong value inserted!!"<<endl<<"Enter values between 0 - 30"<<endl;
         cout<<"Try again! ";
                inputmarks2();
        break;
}
else {
    cout<<endl<<"_______Values Accepted For Subject2________"<<endl;
    break;
}
                }
                cout<<"Enter marks for sub3: ";
                cin>>sub3;
                for(i=1;i>=1;i++)
                {

                if(sub3>30)
    {
           cout<<"Wrong value inserted!!"<<endl<<"Enter values between 0 - 30"<<endl;
         cout<<"Try again! ";
               inputmarks3();
        break;
}
else {
     cout<<endl<<"_______Values Accepted For Subject3________"<<endl;
    break;
}
                }
            }
            void inputmarks1(){
                 cout<<"Enter marks for sub1: ";
                cin>>sub1;
                for(i=1;i>=1;i++)
                {

                if(sub1>30){

            cout<<"Wrong value inserted!!"<<endl<<"Enter values between 0 - 30"<<endl;
             cout<<"Try again! ";
             inputmarks1();
       
        break;
}
else {
    cout<<endl<<"_______Values Accepted For Subject1________"<<endl;
    break;
}

                }
            }
            void inputmarks2(){
                 cout<<"Enter marks for sub2: ";
                cin>>sub2;
                for(i=1;i>=1;i++)
                {

                if(sub2>30){

            cout<<"Wrong value inserted!!"<<endl<<"Enter values between 0 - 30"<<endl;
             cout<<"Try again! ";
             inputmarks2();
       
        break;
}
else {
    cout<<endl<<"_______Values Accepted For Subject2________"<<endl;
    break;
}
                }
            }
                void inputmarks3(){
                 cout<<"Enter marks for sub3: ";
                cin>>sub3;
                for(i=1;i>=1;i++)
                {

                if(sub3>30){

            cout<<"Wrong value inserted!!"<<endl<<"Enter values between 0 - 30"<<endl;
             cout<<"Try again! ";
             inputmarks3();
       
        break;
}
else {
    cout<<endl<<"_______Values Accepted For Subject3________"<<endl;
    break;
}
                }
            }

            void outputmarks()
            {
                cout<<endl<<"Marks of subject 1: "<<sub1<<endl;
                cout<<endl<<"Marks of subject 2: "<<sub2<<endl;
                cout<<endl<<"Marks of subject 3: "<<sub3<<endl;

            }
};

class sports
{
  protected:
          float score;
          public:
              int i=1;
         void getsports()
          {
              cout<<endl<<"Enter sports score: ";
              cin>>score;
              for(i=1;i>=1;i++)
                {
              if(score>30){

        cout<<"Wrong value inserted!!"<<endl<<"Enter values between 0 - 30"<<endl;
        cout<<"Try again! ";
         inputmarks_sports();
              
        break;
}
else {
     cout<<endl<<"_______Values Accepted For Sports________"<<endl;
    break;
}
          }
          }
              void inputmarks_sports(){
                 cout<<"Enter marks for Sports: ";
                cin>>score;
                for(i=1;i>=1;i++)
                {

                if(score>30){

            cout<<"Wrong value inserted!!"<<endl<<"Enter values between 0 - 30"<<endl;
             cout<<"Try again! ";
             inputmarks_sports();
       
        break;
}
else {
    cout<<endl<<"_______Values Accepted For Sports________"<<endl;
    break;
}
                }
            }
};
class result: public test, public sports
{
    float Total,percentage;
      public:
      void resultdisplay(){
   cout<<endl<<"----------------RESULTS------------------"<<endl;
                
                
                    cout<<endl<<"Marks of subject 1: "<<sub1<<endl;
                
                 
                    cout<<endl<<"Marks of subject 2: "<<sub2<<endl;
                

                    cout<<endl<<"Marks of subject 3: "<<sub3<<endl;
  
                
                    cout<<endl<<"Marks of sports   : "<<score<<endl;
        
        cout<<"Total score: "<<Total;
        if(Total<=35)
        {

        cout<<endl<<" U Failed ";
        cout<<"With Percentage score: "<<percentage<<"%"<<endl;

        }
        else if(Total<=55)
        {

        cout<<endl<<" Pass!!----->Average result ";
        cout<<"With Percentage score: "<<percentage<<"%"<<endl;

        }
        else if(Total<=75)
        {

        cout<<endl<<" Pass!!----->Above average result ";
        cout<<"With Percentage score: "<<percentage<<"%"<<endl;
        }
        else if(Total<=100)
        {
            cout<<endl<<" Pass!!----->Good Result ";
            cout<<"With Percentage score: "<<percentage<<"%"<<endl;
        }
        else{
            cout<<endl<<" Pass!!----->Awesome result ";
            cout<<"With Percentage score: "<<percentage<<"%"<<endl;
        }
      }
void resultoutput()
    {
        ofstream result_Student;
        result_Student.open("Result.csv");
        Total= sub1 + sub2 + sub3 + score;
        percentage=((sub1+sub2+sub3+score)/120)*100;
        result_Student<<"-"<<","<<"-"<<","<<"-"<<","<<"-"<<","<<"-"<<","<<"-"<<","<<"Results"<<"-"<<","<<"-"<<","<<"-"<<","<<"-"<<","<<"-"<<","<<"-"<<endl;
                result_Student<<"Name: "<<nam<<" ";
                result_Student<<lnam<<endl;
                result_Student<<"Roll No. : "<<rno<<endl;
                if(sub1<=0)
                {
                    result_Student<<endl<<"[Incorect input] or [U scored : 0] in - Subject1"<<endl;
                }
                else{
                    result_Student<<endl<<"Marks of"<<"," << "subject 1:" <<","<<sub1<<endl;
                }
                   if(sub2<=0)
                {
                   result_Student<<endl<<"[Incorect input] or [U scored : 0] in - Subject2"<<endl;
                }
                else{
                    result_Student<<endl<<"Marks of" <<","<<"subject 2:" <<","<<sub2<<endl;
                }

                   if(sub3<=0)
                {
                    result_Student<<endl<<"[Incorect input] or [U scored : 0] in - Subject3"<<endl;
                }
                else{
                    result_Student<<endl<<"Marks of"<<"," "subject 3:" <<","<<sub3<<endl;
                }
                   if(score<=0)
                {
                    result_Student<<endl<<"[Incorect input] or [U scored : 0] in - Sports"<<endl;
                }
                else{
                      result_Student<<endl<<"Marks of"<<"," "sports :" <<","<<score<<endl;
                }
        result_Student<<"Total score: "<<","<<Total<<endl;;
        if(Total<=35)
        {

        result_Student<<" U Failed "<<endl;
        result_Student<<"With Percentage score: "<<","<<percentage<<"%"<<endl;

        }
        else if(Total<=55)
        {

        result_Student<<" Pass!!----->Average result "<<endl;
        result_Student<<"With Percentage score: "<<","<<percentage<<"%"<<endl;

        }
        else if(Total<=75)
        {

        result_Student<<" Pass!!----->Above average result "<<endl;
       result_Student<<"With Percentage score: "<<","<<percentage<<"%"<<endl;
        }
        else if(Total<=100)
        {
             result_Student<<" Pass!!----->Good Result "<<endl;
           result_Student<<"With Percentage score: "<<","<<percentage<<"%"<<endl;
        }
        else{
            result_Student<<" Pass!!----->Awesome result "<<endl;
            result_Student<<"With Percentage score: "<<","<<percentage<<"%"<<endl;
        }
        result_Student<<endl<<"# Result Generation System - Made With Hybrid Inheritance in C++!!"<<endl;
    }
     void outputscore()
          {
              cout<<"Result Generation Sucessfull! "<<endl;
              cout<<"Please Check Result.csv ";
          }
};

int main()
{
    result r;
    r.getrno();
    r.getnam();
    r.outputrno();
    r.outputnam();
    r.inputmarks();
    r.outputmarks();
    r.getsports();
    r.resultoutput();
    r.outputscore();
    r.resultdisplay();
}
