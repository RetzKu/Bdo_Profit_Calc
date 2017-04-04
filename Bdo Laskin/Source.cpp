#include "Tavara.h"
#include <conio.h>
#include <Windows.h>	

using namespace std;

bool New_Items();

	Tavara _Tavara;
int main()
{
	bool State;

	do
	{
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0, 0 });
		State = New_Items();
	} while (State);
	

}
bool New_Items()
{
	string Name;
	int Amount, Price;

	cout << "Lisätäänkö itemi" << endl;
	cout << "1. Lisää" << endl;
	cout << "2. Poistu" << endl;

	char Menu = NULL;
	Menu = getch();
	switch (Menu)
	{
	case '1':
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0, 6 });
		cout << "Nimi: ";
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0, 7 });
		getline(cin, Name);

		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 7, 6 });
		cout << "Maara: ";
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 7, 7 });
		cin >> Amount;

		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 15, 6 });
		cout << "Hinta: ";
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 15, 7 });
		cin >> Price;
		cin.ignore(256, '\n');

		_Tavara.New_Item(Name, Amount, Price);
		_Tavara.New_Item("perese", 25, 23);
		return true;
	case '2':
		return false;
	}
}
void Clear_input()
{

}

