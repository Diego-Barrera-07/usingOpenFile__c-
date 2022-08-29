#include <iostream>
#include <vector>
#include <fstream>
#include <stdlib.h>

using namespace std;
int main()
{
    ofstream o;
    cout << "Agrega numeros, digita -9999 para detener el bucle" << endl;
    int number;
    int cantidad = 0;
    vector<int> numbers;

    do
    {

        cin >> number;

        if (number != -9999)
        {
            numbers.push_back(number);
            cantidad++;
        }

    } while (number != -9999);

    cout << "\nNumeros: " << endl;

    o.open("lista.dat", ios::out);

    if (o.fail())
    {
        cout << "No pudiste crear este archivo";
        exit(1);
    }

    for (int i = 0; i < cantidad; i++)
    {
        cout << numbers[i] << " ";
        o << " " << numbers[i];
    }
    cout << "\n";


    o.close();

    return 0;
}