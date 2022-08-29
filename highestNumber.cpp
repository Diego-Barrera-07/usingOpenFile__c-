#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>

using namespace std;

int main()
{
    ifstream f;
    int i = 0;
    string listaNumeros;

    f.open("lista.dat", ios::in);

    if (!f)
    {
        cout << "No existe el archivo o no se pudo abrir";
        exit(1);
    }

    while (!f.eof())
    {
        i++;
        getline(f, listaNumeros);
    }

    // Convertir strring a vector
    vector<int> numbers(listaNumeros.begin(), listaNumeros.end());

    for (const char &c : numbers)
    {
        std::cout << c << "-";
    }

    int higher = 0;
    int amount = numbers.size();
    // int amount = numbers.length();

    for (int j = 0; j < amount; j++)
    {
        if (numbers[j] > higher)
        {
            higher = numbers[j];
        }
    }
    cout << "\nEl numero mayor es " << higher << endl;
    cout << "\nNumeros: ";

    return 0;
}
