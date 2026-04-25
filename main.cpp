#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Ilk sayiyi gir: ";
    cin >> a;

    cout << "Operator gir (+ - * /): ";
    cin >> op;

    cout << "Ikinci sayiyi gir: ";
    cin >> b;

    if(op == '+') {
        cout << "Sonuc: " << a + b;
    }
    else if(op == '-') {
        cout << "Sonuc: " << a - b;
    }
    else if(op == '*') {
        cout << "Sonuc: " << a * b;
    }
    else if(op == '/') {
        if(b != 0)
            cout << "Sonuc: " << a / b;
        else
            cout << "0'a bolunemez!";
    }
    else {
        cout << "Gecersiz operator!";
    }

    return 0;
}
