#include <iostream>
using namespace std;

int main()
{
    double a, b, c;

    cout << "Valor A: ";
    cin >> a;
    cout << "Valor B: ";
    cin >> b;
    cout << "Valor C: ";
    cin >> c;

    if (a > b && a > c)
        cout << "O maior e o A (" << a << ")" << endl;
    else if (b > a && b > c)
        cout << "O maior e o B (" << b << ")" << endl;
    else if (c > a && c > b)
        cout << "O maior e o C (" << c << ")" << endl;

    else if (a == b && a > c)
        cout << "Os maiores sao o A e o B (" << a << ")" << endl;
    else if (a == c && a > b)
        cout << "Os maiores sao o A e o C (" << a << ")" << endl;
    else if (b == c && b > a)
        cout << "Os maiores sao o B e o C (" << b << ")" << endl;

    else
        cout << "Os tres valores sao iguais (" << a << ")" << endl;

    return 0;
}