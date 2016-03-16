/* copyright 2016 jkrizek16 */

#include <iostream>
#include <cmath>
using namespace std;


int main() {
   double a = 0.0;
   double b = 0.0;
   double c = 0.0;
   string total;
   
   cout << "Please enter 'a': ";
   cin >> a;
   
   cout << "Please enter 'b': ";
   cin >> b;
   
   cout << "Please enter 'c': ";
   cin >> c;
   
   double answer;
   double positive;
   double num1, num2;
   
   double x = pow (b,2) -4 * a * c;
   
   if (x >= 0) {
      num1 = (-b + sqrt (x)) / (2*a);
      num2 = (-b - sqrt (x)) / (2*a);
      cout << "Answers: " << num1 << " and " << num2 << " .";
   }
   else {
      cout << "The answers are complex: ";
      
      cout << (-b) << " + " << sqrt(-x) << "i" << "/" << 2*a;
      cout << " and ";
      cout << (-b) << " - " << sqrt(-x) << "i" << "/" << 2*a;
      
   }
   return 0;
}