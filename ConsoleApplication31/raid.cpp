#include <iostream>
#include <Windows.h>
#include<fstream>
#include<algorithm>
#include<string>
#include"Main.h"
using namespace std;
struct List {
	char leter;
	const char* morse;
};

List mas[] = {
	{'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."},
	{'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"},
	{'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"},
	{'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
	{'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"},
	{'Z', "--.."}
};

int raid()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string text;
	cin.ignore();
	cout << "Введіть ваш текст англ: ";
	getline(cin, text);

	string textAp = "", newtext = "";
	for (int i = 0; i < text.size(); i++) {
		textAp += toupper(text[i]);
	}

	for (char s : textAp) {
		for (List i : mas) {
			if (i.leter == s) newtext += i.morse;
		}
	}
	string name;
	cin.ignore();
	cout << "Введіть назву файла: ";
	getline(cin, name);

	ofstream file(name + ".txt");
	if (file) {
		file << "Ваше повідомлення: " << text << endl << "Зашифроване повідомлення: " << newtext << endl;
		file.close();
		cout << "Данні збережені у файл";
	}
	else cout << "Помилка запису у файл";

	int choose_menu;
	cout << "Хочешь повернутись на головне меню 1-так 2-ні: ";
	cin >> choose_menu;
	if (choose_menu == 1) {
		cout << "\033[2J\033[1;1H"; //очищення екрана 
		main();
	}
	else cout<<"До побачення";

	return 0;

}