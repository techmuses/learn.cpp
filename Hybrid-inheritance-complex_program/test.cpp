#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int a=23;
    char b[20] = "jainal";

        ofstream test;
        test.open("test.csv");
        
            test<<" "<<","<<" "<<","<<" "<<","<<" "<<","<<" "<<","<<" "<<","<<" "<<","<<b<<"%"<<","<<"Results"<<" "<<","<<a<<","<<" "<<","<<" "<<","<<" "<<","<<" "<<","<<" "<<endl;
        
}