#include <iostream>
using namespace std;
 
int sum(int a, int b = 15) {
   int result;
   result = a + b;
  
   return (result);
}
int main () {
   // local variable declaration:
   int a = 150;
   int b = 250;
   int result;
 
   // calling a function to add the values.
   result = sum(a, b);
   cout << "Total value is :" << result << endl;

   // calling a function again as follows.
   result = sum(a);
   cout << "Total value is :" << result << endl;
 
   return 0;}
