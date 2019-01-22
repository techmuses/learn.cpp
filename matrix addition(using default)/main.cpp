#include<iostream>
using namespace std;
    int m1[3][3];
    int m2[3][3];
    int sum[3][3];

 void getdata1(int row=3, int col=3){
   cout << "Enter the elements of first 1st matrix: ";
   for (int i = 0;i<row;i++ ) {
     for (int j = 0;j < col;j++ ) {
       cin>>m1[i][j];
     }
   }
 }
 void getdata2(int row=3 , int col=3){
     cout << "Enter the elements of first  matrix 2: ";
   for (int i = 0;i<row;i++ ) {
     for (int j = 0;j<col;j++ ) {
       cin>>m2[i][j];
     }
   }
 }
 void sum1(int row=3, int col=3){
      cout<<"Output: ";
   for (int i = 0;i<row;i++ ) {
      for (int j = 0;j<col;j++ ) {
        sum[i][j]=m1[i][j]+m2[i][j];
        cout<<sum[i][j]<<" ";
      }
   }
 }
int main(){
getdata1();
getdata2();
sum1();
}