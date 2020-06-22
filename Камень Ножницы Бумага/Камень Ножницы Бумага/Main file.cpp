// Камень Ножницы Бумага - игра.
// Человек против компьютера

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

	cout << "\t\t\t\t\t Игра камень, ножницы, бумага " << endl;

	cout << "\t\t Матч начался! " << endl;

	while (true)
	{
		int programWeapon = chooseRandomWeapon();
		int humanWeapon = atoi(chooseWeapon().c_str()); // Преобразование строки из функции в число

		if (humanWeapon == programWeapon)
		{
			switch (humanWeapon)
			{
				case SCISSORS:
				{
					Scissors humanScissors;
					Scissors programScissors;
					cout << "Вы выбрали ножницы" << endl;
					cout << "Компьютер выбрал ножницы" << endl;
					cout << endl;

					humanScissors.fight();
					programScissors.fight();
					cout << endl;

					cout << "Ножницы резали, резали друг друга и затупились..." << endl;
					cout << "Ничья!" << endl;
					break;
				}	
				case ROCK:
				{
					Rock humanRock;
					Rock programRock;

					cout << "Вы выбрали камень" << endl;
					cout << "Компьютер выбрал камень" << endl;
					cout << endl;

					humanRock.fight();
					programRock.fight();
					cout << endl;

					cout << "Камни стучали, стучали друг по другу и рассыпались в песок..." << endl;
					cout << "Ничья!" << endl;
					break;
				}
				case PAPER:
				{
					Paper humanPaper;
					Paper programPaper;

					cout << "Вы выбрали бумагу" << endl;
					cout << "Компьютер выбрал бумагу" << endl;
					cout << endl;

					humanPaper.fight();
					programPaper.fight();
					cout << endl;

					cout << "Бумаги обворачивали, обворачивали друг по друга и запутались..." << endl;
					cout << "Ничья!" << endl;
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
				cout << "Вы выбрали ножницы" << endl;
				cout << "Компьютер выбрал камень" << endl;
				cout << endl;

				scissors.fight();
				rock.fight();
				cout << endl;

				cout << "Камень ударился о ножницы, от чего ножницы затупились и сломались..." << endl;
				cout << "Вы проиграли. В следующий раз повезёт..." << endl;
			}
			else
			{
				cout << "Вы выбрали камень" << endl;
				cout << "Компьютер выбрал ножницы" << endl;
				cout << endl;

				rock.fight();
				scissors.fight();
				cout << endl;

				cout << "Камень ударился о ножницы, от чего ножницы затупились и сломались..." << endl;
				cout << "Вы победили!" << endl;
			}
			break;
		}

		else if (humanWeapon == SCISSORS && programWeapon == PAPER || humanWeapon == PAPER && programWeapon == SCISSORS)
		{
			Scissors scissors;
			Paper paper;

			if (humanWeapon == SCISSORS)
			{
				cout << "Вы выбрали ножницы" << endl;
				cout << "Компьютер выбрал бумагу" << endl;
				cout << endl;

				scissors.fight();
				paper.fight();
				cout << endl;

				cout << "Ножницы безжалостно изрезали бумагу!" << endl;
				cout << "Вы победили!" << endl;
			}
			else
			{
				cout << "Вы выбрали бумагу" << endl;
				cout << "Компьютер выбрал ножницы" << endl;
				cout << endl;

				paper.fight();
				scissors.fight();
				cout << endl;

				cout << "Ножницы безжалостно изрезали бумагу!" << endl;
				cout << "Вы проиграли. В следующий раз повезёт..." << endl;
			}
			break;
		}	

		else if (humanWeapon == ROCK && programWeapon == PAPER || humanWeapon == PAPER && programWeapon == ROCK)
		{
			Rock rock;
			Paper paper;

			if (humanWeapon == PAPER)
			{
				cout << "Вы выбрали бумагу" << endl;
				cout << "Компьютер выбрал камень" << endl;
				cout << endl;

				paper.fight();
				rock.fight();
				cout << endl;

				cout << "Бумага довольно причмокивая проглотила камень!" << endl;
				cout << "Вы победили!" << endl;
			}
			else
			{
				cout << "Вы выбрали камень" << endl;
				cout << "Компьютер выбрал бумагу" << endl;
				cout << endl;

				rock.fight();
				paper.fight();
				cout << endl;

				cout << "Бумага довольно причмокивая проглотила камень!" << endl;
				cout << "Вы проиграли. В следующий раз повезёт..." << endl;
			}
			break;
		}
	}

	system("pause");
	return 0;
}