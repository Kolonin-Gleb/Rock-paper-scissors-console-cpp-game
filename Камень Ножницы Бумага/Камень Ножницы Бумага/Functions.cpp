#include"Functions.h"

string chooseWeapon()
{
    string weapon = "IncorrectWeapon";

    cout << "�������� ������: " << endl;
    cout << "1 - �������" << endl;
    cout << "2 - ������" << endl;
    cout << "3 - ������" << endl;

    while (true)
    {
        cout << "������� ��� ������: ";
        cin >> weapon;

        if (weapon != "1" && weapon != "2" && weapon != "3")
        {
            cout << "��� ������ " << weapon << " �����������!" << endl;
            cout << "��������� ���� ������: " << endl;
            cout << "1 - �������" << endl;
            cout << "2 - ������" << endl;
            cout << "3 - ������" << endl;
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
    int randomWeapon = rand() % (4 - 1) + 1; // �� 1 �� 3
    return randomWeapon;
}

