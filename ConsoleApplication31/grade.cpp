#include <iostream>
#include <Windows.h>
#include<fstream>
#include<algorithm>
#include<string>
#include"Main.h"
using namespace std;

struct Pers {
	string name;
	string sur;
	int ball;
};

bool poriv(Pers n1, Pers n2) {
	return n1.ball > n2.ball;
}


int grade()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	ifstream file("list.txt");
	if (!file) {
		cout << "Файл не знайдено" << endl;
		return 1;
	}

	Pers* array = new Pers[10];

	int kill = 0;
	for (int i = 0; i < 10; i++) {
		if (file >> array[i].name >> array[i].sur >> array[i].ball) {
			kill++;
		}
		else break;
	}
	file.close();
	sort(array, array + kill, poriv);
	for (int i = 0; i < kill; i++) {
		cout << i + 1 << ") " << array[i].name << " " << array[i].sur << " " << array[i].ball << endl;
	}
	delete[]array;

	int choose_menu;
	cout << "Хочешь повернутись на головне меню 1-так 2-ні: ";
	cin >> choose_menu;
	if (choose_menu == 1) {
		main();
	}
	else cout << "До побачення";

	return 0;
}