#include "Tavara.h"
#include <conio.h>
#include "Tuote.h"
#include <Windows.h>

using namespace std;

bool New_Items();
int Profit_Calc(int Price);
void Clear_Lines(short Start, short End);
void Print(string Line, int Endlines);
int Get_Number(short Start, short End)

	Tavara _Tavara;
	Tuote _Tuote;

	short x = 0;
	short y = 0;
	short mb = 0;

int main()
{
	bool State;
	string Name;
	int Price;
	int Profit;
	int Price1;
	

	Print("1.Lis‰‰ K‰ytetty esine",1);
	Print("2.Poistu", 1);
	char Menu = getch();
	switch (Menu)
	{
	case '1':

		/*cout << "Nimi: ";
		getline(cin, Name);*/

		Print("Raha ennen: ", 0);
		cin >> Price1;

		Print("Raha j‰lkeen: ", 0);
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
	char Menu = NULL;
	
	if (mb == 0)
	{
		Clear_Lines(0, 4);
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0, 0 });
		Print("Lis‰t‰‰nkˆ uusi tuotos?", 1);
		Print("1. Lis‰‰", 1);
		Print("2. Poistu", 1);

		Menu = getch();
		Clear_Lines(0,4);
	}
	else
	{
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0, 4 + mb });

		Print("Lis‰t‰‰nkˆ uusi tuotos?", 1);
		Print("1. Lis‰‰", 1);
		Print("2. Poistu", 1);

		
		Menu = getch();
		Clear_Lines(mb + 2, mb + 6);
	}
		
	switch (Menu)
	{
	case '1':

		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { x, y });
		cout <<  "Nimi: ";
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { x, y+1+mb });
		getline(cin, Name);

		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { x+20, y });
		cout << "Maara: ";
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { x+20, y+1+mb });
		while (!(cin >> Amount)) {
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { x + 20, y + 1 + mb });
			for (int i = 20; i < 40; i++)
			{
				cout << " ";
			}
			cin.clear();
			cin.ignore(256, '\n');
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { x + 20, y + 1 + mb });
		}
			

		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { x+40, y });
		cout << "Hinta: ";
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { x+40, y+1+mb });
		cin >> Price;
		cin.ignore(256, '\n');
		mb = mb + 1;


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
void Clear_Lines(short Start, short End)
{
	string Empty_Line(99,' ');
	for (short i = Start; i < End; i++)
	{
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0, i });
		cout << Empty_Line;
	}
}
void Print(string Line, int Endlines)
{
	int n = Line.length();
	for (int i = 0; i < n; i++)
	{
		if (Line[i] == -28)
		{
			Line[i] = char(132);
		}
		if (Line[i] == -10)
		{
			Line[i] = char(148);
		}
	}
	cout << Line;
	for (int i = 0; i < Endlines; i++)
	{
		cout << endl;
	}
}
int Get_Number(short Start, short End)
{

}


