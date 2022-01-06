#include <iostream>
using namespace std;
#define row 3
#define column 3
/* Function Prototype */
void multiply(int a[row][column], int b[row][column], int m[row][column]);

int main()
{
 int a[row][column], b[row][column], m[row][column];
 /* Reading First Matrix a */
 cout<<"Enter First Matrix:\n";
 for(row=0;row< 3;row++)
 {
  for(column=0;column< 3;column++)
  {
   cout<<"\nFpr first matrix Enter  the element for: \t"<<a[row][column];
   cin>>a[i][j];
  }
 }
 /* Reading Second Matrix b */
 cout<<"Enter Second Matrix:\n";
 for(row=0;row< 3;row++)
 {
  for(column=0;column< 3;column++)
  {
   cout<<"\nFpr second matrix Enter  the element for: \t"<<b[row][column];
   cin>>b[row][column]);
  }
 }
 /* Function Call */
 multiply(a,b,m);
 /* Keep in mind that m is empty array.
    We will multiply a and b matrix in user
    defined function and resultant matrix will
    be stored in m and after function call we can
    access resultant matrix from main function
    since change in array from user defined
    function are automatically reflected back
    in main function */
 /* Displaying Resultant Matrix m */
 printf("Result:\n");
 for(row=0;row< 3;row++)
 {
  for(column=0;column< 3;column++)
  {
   cout<<m[row][column];
  }
  cout<<"\n";
 }
 getch();
 return 0;
}
/* Function Definition */
void multiply(int a[row][column], int b[row][column], int m[row][column]);
{
 int k;
 /* Multiplication */
 for(row=0;row< 3;row++)
 {
  for(column=0;column< 3;column++)
  {
   m[row][column]=0;
   for(k=0;k< 3;k++)
   {
    m[row][column] +=a[row][k] * b[k][column];
   }
  }
 }
}
