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
	cout << "������ ��� ����� ����: ";
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
	cout << "������ ����� �����: ";
	getline(cin, name);

	ofstream file(name + ".txt");
	if (file) {
		file << "���� �����������: " << text << endl << "����������� �����������: " << newtext << endl;
		file.close();
		cout << "���� �������� � ����";
	}
	else cout << "������� ������ � ����";

	int choose_menu;
	cout << "������ ����������� �� ������� ���� 1-��� 2-�: ";
	cin >> choose_menu;
	if (choose_menu == 1) {
		cout << "\033[2J\033[1;1H"; //�������� ������ 
		main();
	}
	else cout<<"�� ���������";

	return 0;

}