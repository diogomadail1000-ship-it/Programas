#include <iostream>

using namespace std;

int main() {
    double n1, n2;
    double menor, maior;

    cout << "Digite o primeiro valor (n1): ";
    cin >> n1;

    cout << "Digite o segundo valor (n2): ";
    cin >> n2;

    if (n1 > n2) {
        menor = n2;
        maior = n1;
    } else {
        menor = n1;
        maior = n2;
    }

    cout << "Valores em ordem crescente: " << menor << " e " << maior << endl;

    return 0;
}