#include"Functions.h"

string chooseWeapon()
{
    string weapon = "IncorrectWeapon";

    cout << "Выберите оружие: " << endl;
    cout << "1 - Ножницы" << endl;
    cout << "2 - Камень" << endl;
    cout << "3 - Бумага" << endl;

    while (true)
    {
        cout << "Введите тип оружия: ";
        cin >> weapon;

        if (weapon != "1" && weapon != "2" && weapon != "3")
        {
            cout << "Тип оружия " << weapon << " отсутствует!" << endl;
            cout << "Доступные типы оружия: " << endl;
            cout << "1 - Ножницы" << endl;
            cout << "2 - Камень" << endl;
            cout << "3 - Бумага" << endl;
            cout << endl;
        }
        else
        {
            break;
        }
    }
    cout << endl << endl;
    return weapon;
}

int chooseRandomWeapon()
{
    int randomWeapon = rand() % (4 - 1) + 1; // от 1 до 3
    return randomWeapon;
}

