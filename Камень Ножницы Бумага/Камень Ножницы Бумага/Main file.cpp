// ������ ������� ������ - ����.
// ������� ������ ����������

#include <iostream>
#include <ctime>
#include <Windows.h>

#include "Functions.h"
#include "Classes.h"

using namespace std;

enum WEAPONS
{
	SCISSORS = 1,
	ROCK = 2,
	PAPER = 3
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(0, "rus");
	srand(time(0));

	cout << "\t\t\t\t\t ���� ������, �������, ������ " << endl;

	cout << "\t\t ���� �������! " << endl;

	while (true)
	{
		int programWeapon = chooseRandomWeapon();
		int humanWeapon = atoi(chooseWeapon().c_str()); // �������������� ������ �� ������� � �����

		if (humanWeapon == programWeapon)
		{
			switch (humanWeapon)
			{
				case SCISSORS:
				{
					Scissors humanScissors;
					Scissors programScissors;
					cout << "�� ������� �������" << endl;
					cout << "��������� ������ �������" << endl;
					cout << endl;

					humanScissors.fight();
					programScissors.fight();
					cout << endl;

					cout << "������� ������, ������ ���� ����� � ����������..." << endl;
					cout << "�����!" << endl;
					break;
				}	
				case ROCK:
				{
					Rock humanRock;
					Rock programRock;

					cout << "�� ������� ������" << endl;
					cout << "��������� ������ ������" << endl;
					cout << endl;

					humanRock.fight();
					programRock.fight();
					cout << endl;

					cout << "����� �������, ������� ���� �� ����� � ����������� � �����..." << endl;
					cout << "�����!" << endl;
					break;
				}
				case PAPER:
				{
					Paper humanPaper;
					Paper programPaper;

					cout << "�� ������� ������" << endl;
					cout << "��������� ������ ������" << endl;
					cout << endl;

					humanPaper.fight();
					programPaper.fight();
					cout << endl;

					cout << "������ ������������, ������������ ���� �� ����� � ����������..." << endl;
					cout << "�����!" << endl;
					break;
				}
			}
		}

		else if (humanWeapon == SCISSORS && programWeapon == ROCK || humanWeapon == ROCK && programWeapon == SCISSORS)
		{
			Scissors scissors;
			Rock rock;
			
			if (humanWeapon == SCISSORS)
			{
				cout << "�� ������� �������" << endl;
				cout << "��������� ������ ������" << endl;
				cout << endl;

				scissors.fight();
				rock.fight();
				cout << endl;

				cout << "������ �������� � �������, �� ���� ������� ���������� � ���������..." << endl;
				cout << "�� ���������. � ��������� ��� ������..." << endl;
			}
			else
			{
				cout << "�� ������� ������" << endl;
				cout << "��������� ������ �������" << endl;
				cout << endl;

				rock.fight();
				scissors.fight();
				cout << endl;

				cout << "������ �������� � �������, �� ���� ������� ���������� � ���������..." << endl;
				cout << "�� ��������!" << endl;
			}
			break;
		}

		else if (humanWeapon == SCISSORS && programWeapon == PAPER || humanWeapon == PAPER && programWeapon == SCISSORS)
		{
			Scissors scissors;
			Paper paper;

			if (humanWeapon == SCISSORS)
			{
				cout << "�� ������� �������" << endl;
				cout << "��������� ������ ������" << endl;
				cout << endl;

				scissors.fight();
				paper.fight();
				cout << endl;

				cout << "������� ����������� �������� ������!" << endl;
				cout << "�� ��������!" << endl;
			}
			else
			{
				cout << "�� ������� ������" << endl;
				cout << "��������� ������ �������" << endl;
				cout << endl;

				paper.fight();
				scissors.fight();
				cout << endl;

				cout << "������� ����������� �������� ������!" << endl;
				cout << "�� ���������. � ��������� ��� ������..." << endl;
			}
			break;
		}	

		else if (humanWeapon == ROCK && programWeapon == PAPER || humanWeapon == PAPER && programWeapon == ROCK)
		{
			Rock rock;
			Paper paper;

			if (humanWeapon == PAPER)
			{
				cout << "�� ������� ������" << endl;
				cout << "��������� ������ ������" << endl;
				cout << endl;

				paper.fight();
				rock.fight();
				cout << endl;

				cout << "������ �������� ����������� ���������� ������!" << endl;
				cout << "�� ��������!" << endl;
			}
			else
			{
				cout << "�� ������� ������" << endl;
				cout << "��������� ������ ������" << endl;
				cout << endl;

				rock.fight();
				paper.fight();
				cout << endl;

				cout << "������ �������� ����������� ���������� ������!" << endl;
				cout << "�� ���������. � ��������� ��� ������..." << endl;
			}
			break;
		}
	}

	system("pause");
	return 0;
}