/*
91. Escreva um programa que utilize uma função para exibir o seguinte padrão:
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/
#include <iostream>
using namespace std;

int main() {
    int n = 9;  // Tam máximo da linha com asteriscos

    // Parte superior do padrão
    for (int i = 1; i <= n; i += 2) {
        for (int j = 0; j < (n - i) / 2; ++j)
            cout << "  ";
        for (int j = 0; j < i; ++j)
            cout << "* ";
        cout << endl;
    }

    // Parte inferior do padrão
    for (int i = n - 2; i > 0; i -= 2) {
        for (int j = 0; j < (n - i) / 2; ++j)
            cout << "  ";
        for (int j = 0; j < i; ++j)
            cout << "* ";
        cout << endl;
    }

    return 0;
}
