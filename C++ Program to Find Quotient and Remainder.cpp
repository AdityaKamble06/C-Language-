//Example: Compute quotient and remainder

#include<iostream>
using namespace std;

int main()
{
 int divisor, dividend, quotient, remainder;
 
 cout << "Enter dividend: ";
 cin >> dividend;
 
 cout <<"Enter divisor: ";
 cin >> divisor;
 
 quotient = dividend / divisor;
 remainder = dividend % divisor;
 
 cout << "Quotient = " << quotient << endl;
 cout << "Remainder = " << remainder;
 
 return 0;
}

//Output
Enter dividend: 45
Enter divisor: 5
Quotient = 9
Remainder = 0
