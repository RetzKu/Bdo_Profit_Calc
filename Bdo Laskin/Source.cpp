#include "Tavara.h"
#include <conio.h>

using namespace std;

bool New_Items();

	Tavara _Tavara;
int main()
{
	bool State;

	do
	{
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

		cout << "Nimi: ";
		getline(cin, Name);

		cout << "Maara: ";
		cin >> Amount;

		cout << "Hinta: ";
		cin >> Price;
		cin.ignore(256, '\n');

		_Tavara.New_Item(Name, Amount, Price);
		_Tavara.New_Item("perese", 25, 23);
		return true;
	case '2':
		return false;
	}
}


