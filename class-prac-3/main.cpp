#include<iostream>
using namespace std;
class book
{
private:
char bookname[100], authorname[15];
int rate,qty,t_price;
 public:
   void input_value (){
       cout<<"Enter bookname:"<<endl;
       cin>>bookname;
       cout<<"Enter authorname:"<<endl;
       cin>>authorname;
       cout<<"Enter rate:"<<endl;
       cin>>rate;
       cout<<"Enter Quantity:"<<endl;
       cin>>qty;
   }
   void showdata(){
       cout<<"bookname:"<<bookname<<endl;
       cout<<"authorname"<<authorname<<endl;
        cout<<"rate"<<rate<<endl;
          }
    void price(){
        t_price = rate * qty;
        cout<<"Total Price: "<<t_price;
    }
};

int main(){
    book b1;
    b1.input_value();
    b1.showdata();
    b1.price();
}