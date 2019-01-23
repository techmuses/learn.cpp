#include <iostream>
using namespace std;
class Item
{
    // Access specifier
    public:
 
    // Data Members
    int code;
    int cost;
    int qty;
    int total_price;
   
 // Member Functions()
    void display()
    {
       cout << "code is: " << code;
        cout << "cost is: " << cost;
       cout << "qty is: " << qty;
       cout << "total_price is: " << total_price;
       
    }
   
     void getData()
    {
       cin >> code;
        cin >> cost;
      cin >> qty;
       
    }
   
    void CalculateTotalPrice(){
       
    total_price = qty*cost;
    }
};
 
 
int main() {
 
    // Declare an object of class geeks
   Item i1;
 
   i1.getData();
   i1.display();
   i1.CalculateTotalPrice();
 
 
    return 0;
}