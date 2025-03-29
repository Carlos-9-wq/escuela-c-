#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    int opcn, res;

    cout << "¿Que desea realizar?" << endl;
    cout << "1. Suma." << endl;
    cout << "2. Resta." << endl;
    cout << "3. Multiplicacion." << endl;
    cin >> opcn;

    if (opcn == 1) {
        cout << "1er numero: " << endl;
        cin >> n1;
        cout << "2do numero: " << endl;
        cin >> n2;
        res = n1 + n2;
        cout << "El resultado de la suma es: " << res << endl;
    }
    else if (opcn == 2) {
        cout << "1er numero: " << endl;
        cin >> n1;
        cout << "2do numero: " << endl;
        cin >> n2;
        res = n1 - n2;
        cout << "El resultado de la resta es: " << res << endl;
    }
    else if (opcn == 3) {
        cout << "1er numero: " << endl;
        cin >> n1;
        cout << "2do numero: " << endl;
        cin >> n2;
        res = n1 * n2;
        cout << "El resultado de la multiplicacion es: " << res << endl;
    }
    else {
        cout << "Opcion invalida." << endl;
    }

    return 0;
}

