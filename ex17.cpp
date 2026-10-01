#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    int segredo = rand() % 10 + 1;
    int palpite = 0;
    int tentativas = 0;

    while (tentativas < 5 && palpite != segredo) {
        cout << "Palpite de 1 a 10: ";
        cin >> palpite;
        tentativas++;

        if (palpite == segredo) cout << "Acertou em " << tentativas << " tentativa(s)!\n";
        else if (palpite < segredo) cout << "Tente um numero maior.\n";
        else cout << "Tente um numero menor.\n";
    }

    if (palpite != segredo)
        cout << "Fim! O numero era " << segredo << ".\n";
    return 0;
}
