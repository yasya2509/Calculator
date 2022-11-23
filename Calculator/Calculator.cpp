
#include <iostream>
using namespace std;

double Calculate(double a, char operation, double b)
{
    switch (operation) {
    case '+':
        cout << "a + b = " << a + b << endl;
        break;
    case '-':
        cout << "a - b = " << a - b << endl;
        break;
    case '*':
        cout << "a * b = " << a * b << endl;
        break;
    case '/':
        cout << "a / b = " << a / b << endl;
        break;
    }
    return 0;
}

int main()
{
    double a, b;
    char operation;
    cin >> a >> operation >> b;
    cout << Calculate(a, operation, b) << endl;

    return 0;
  
} 

