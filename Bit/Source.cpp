#include <iostream>
#include <cstddef>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    // Проверяем количество аргументов
    if (argc != 2)
    {
        cout << "Введите одно число при запуске программы.";
        return 1;
    }

    // Преобразуем строку в число
    int number = stoi(argv[1]);

    // Выводим биты числа
    for (int i = 31; i >= 0; i--)
    {
        cout << ((number >> i) & 1);
    }

    cout << endl;

    return 0;
}