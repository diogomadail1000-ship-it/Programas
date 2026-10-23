#include <iostream>
using namespace std;

int main() {
    int idade;
    cout << "Idade =";
    cin >> idade;
    if (idade >= 18) {
        cout << "Maior de idade";
    } else if (idade < 16) {
        cout << "Menor de 16 anos";
    }
    else {
        cout << "Menor, com 16 ou mais anos";
    }   
    return 0;
}