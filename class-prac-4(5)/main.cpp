#include<iostream>
using namespace std;
class student
{
private:
int rollno, marks[6], per,temp ;
char name[20], grade;
public:
void getdata(){
        cout<<"Enter rollno:" <<endl;
    cin>>rollno;
        cout<<"Enter name:" <<endl;
    cin>>name;
        cout<<"Enter 6 Subjects Marks in values of out of 100:" <<endl;
        for(int i=0; i<6;i++){
            cin>>marks[i];
        if(marks[i]>100){
             marks[i] = 0;
            cout<<"Wrong entry please enter between 0-100 ";
        }
        else{
           cout<<"Values Accepted! - Please Continue";
        }
        }
        
}
void percentage(){
    temp=0;
    for(int i=0 ; i<6; i++){
         temp=temp+marks[i];
         per=((float)temp/600)*100;
    }
    cout<<"Total percentage : "<<per<<"%"<<endl;
}
void grades(){
    if(per<30){
        cout<<" U failed!"<<" "<<endl<<"# F - Grade"<<endl;
    }
    else if(per< 45){
        cout<<" Just passed!"<<" "<<endl<<"# D - Grade"<<endl;
    }
    else if(per< 60){
        cout<<" Average Score!"<<" "<<endl<<"# C - Grade"<<endl;
    }
    else if(per<80){
        cout<<" Good Score!"<< " "<<endl<<"# B- Grde"<<endl;
    }
    else{
        cout<<" Awesome Score!"<<" "<<endl<<"# A- Grade";
    }

}
};
int main(){
    student s1;
    s1.getdata();
    s1.percentage();
    s1.grades();
}
