#include "Tavara.h"
#include <conio.h>
#include "Tuote.h"

using namespace std;

bool New_Items();
int Profit_Calc(int Price);

	Tavara _Tavara;
	Tuote _Tuote;

int main()
{
	bool State;
	string Name;
	int Price;
	int Profit;
	int Price1;
	

	cout << "1.Lisää Käytetty esine" << endl;
	cout << "2.Poistu" << endl;
	char Menu = getch();
	switch (Menu)
	{
	case '1':

		cout << "Nimi: ";
		getline(cin, Name);

		cout << "Raha ennen: ";
		cin >> Price1;

		cout << "Raha jälkeen";
		cin >> Price;
		Price = Price1 - Price;

		cin.ignore(256, '\n');
		do
		{
			State = New_Items();
			cout << endl;
		} while (State);
		Profit = Profit_Calc(Price);
		cout << Profit;
		break;
	case '2':
		break;
	}
	

	cout << endl << "press anykey to shutdown";
	int ass = getch();
	return 0;
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
		return true;
	case '2':
		return false;
	}
}
int Profit_Calc(int Price)
{
	int Prof = 0;
	int n = _Tavara.Tavarat.size();
	for (int i = 0; i < n; i++)
	{
		Prof = Prof + _Tavara.Get_Calculated_Profit(i);
	}
	
	Prof = Prof - Price;
	return Prof;

}


