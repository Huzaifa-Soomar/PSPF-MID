#include <iostream>
using namespace std;
int main() {
int num1, num2, result;
char operat;
cout << "Enter first number: ";
cin >> num1;
cout << "Enter second number: ";
cin >> num2;
cout << "Enter operator (+, -, *, /): ";
cin >> operat;
if (operat == '+' || operat == '-' || operat == '*' || operat == '/') {
 if (operat == '+') {
 result = num1 + num2;
 }else if (operat == '-') {
result = num1 - num2;
} else  if (operat == '*') {
result = num1 * num2;
} 
else if (operat == '/') {
 if (num2 == 0) {
  cout << "Division by zero is not allowed." << endl;
}else {
 result = num1 / num2;
} 
}
} else {
 cout << "Invalid operator. Please enter one of (+, -, *, /)." << endl;
}
  cout  << "Result  : " << result ;
  return 0;
}
