#include <bits/stdc++.h>

using namespace std;

int main()
{
    string genero;
    int cerveja, refrigerante, espeto;
    double consumo, couvert, ingresso, total;

    cout << "Sexo: ";
    cin >> genero;

    cout << "Quantidade de cervejas: ";
    cin >> cerveja;

    cout << "Quantidade de refrigerantes: ";
    cin >> refrigerante;

    cout << "Quantidade de espetinhos: ";
    cin >> espeto;


    if (genero == "F") {
        ingresso = 8.0;
    }
    else {
        ingresso = 10.0;
    }

    consumo = cerveja * 5.0 + refrigerante * 3.0 + espeto * 7.0;

    if(consumo > 30.0) {
        couvert = 0.0;
    }
    else {
        couvert = 4.0;
    }

    total = ingresso + consumo + couvert;

    cout << fixed << setprecision (2);
    cout << endl << "RELATORIO:" << endl;
    cout << "Consumo = R$ " << consumo << endl;

    if (couvert == 0.0) {
        cout << "Isento de Couvert" << endl;
    }
    else{
        cout << "Couvert = R$" << couvert << endl;
    }

    cout << "Ingresso = R$ " << ingresso << endl;
    cout << endl << "Valor a pagar = R$" << total << endl;


    return 0;
}
