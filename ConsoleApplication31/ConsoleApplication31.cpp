#include <iostream>
#include <Windows.h>
#include<fstream>
#include<algorithm>
#include<string>
#include"Grade.h"
#include"Raid.h"
using namespace std;

//struct Pers {
//	string name;
//	string sur;
//	int ball;
//};
//
//bool poriv(Pers n1, Pers n2) {
//	return n1.ball > n2.ball;
//}

//struct List {
//	char leter;
//	const char* morse;
//};
//
//List mas[] = {
//	{'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."},
//	{'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"},
//	{'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"},
//	{'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
//	{'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"},
//	{'Z', "--.."}
//};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	/*ifstream file("list.txt");
	if (!file) {
		cout << "Файл не знайдено" << endl;
		return 1;
	}
	
	Pers* array = new Pers[10];

	int kill=0;
	for(int i=0;i<10;i++) {
		if (file >> array[i].name >> array[i].sur >> array[i].ball) {
			kill++;
		}
		else break;
	}
	file.close();
	sort(array, array + kill, poriv);
	for (int i = 0; i < kill; i++) {
		cout <<i+1<<") " << array[i].name << " " << array[i].sur << " " << array[i].ball << endl;
	}
	delete []array;*/

	/*string text;
	cout << "Введіть ваш текст англ: ";
	getline(cin, text);

	string textAp="", newtext="";
	for (int i = 0; i < text.size(); i++) {
		textAp += toupper(text[i]);
	}

	for (char s : textAp) {
		for (List i : mas) {
			if (i.leter == s) newtext += i.morse;
		}
	}
	string name;
	cout << "Введіть назву файла: ";
	getline(cin, name);

	ofstream file(name+".txt");
	if (file) {
		file << "Вфше повідомлення: " << text << endl << "Зашифроване повідомлення: " << newtext << endl;
		file.close();
		cout << "Данні збережені у файл";
	}
	else cout << "Помилка запису у файл";
	return 0;*/


	cout << "Меню завданнь\n1-Сортування оцінок\n2-Шифрування повідомлення\nВаш вибір: " << endl;
	int choose;
	cin >> choose;
	if (choose == 1) {
		cout << "\033[2J\033[1;1H"; //очищення екрана 
		grade();
	}
	else if (choose == 2) {
		cout << "\033[2J\033[1;1H"; //очищення екрана 
		raid();
	}

}

