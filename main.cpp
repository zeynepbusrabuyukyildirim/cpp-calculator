#include <iostream>
using namespace std;

int main() {
double a, b;
char op;

```
cout << "Enter the first number: ";
cin >> a;

cout << "Enter an operator (+, -, *, /): ";
cin >> op;

cout << "Enter the second number: ";
cin >> b;

if(op == '+') {
    cout << "Result: " << a + b;
}
else if(op == '-') {
    cout << "Result: " << a - b;
}
else if(op == '*') {
    cout << "Result: " << a * b;
}
else if(op == '/') {
    if(b != 0)
        cout << "Result: " << a / b;
    else
        cout << "Error: Division by zero is not allowed!";
}
else {
    cout << "Error: Invalid operator!";
}

return 0;
```

}
