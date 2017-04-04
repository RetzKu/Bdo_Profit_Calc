#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Tavara
{
public:
	Tavara();
	Tavara(string name, int amount, int price) { _name = name, _amount = amount, _price = price; }
	void Huutoa()
	{
		cout << _name << " " << _amount << " " << _price << endl;
	}
	void New_Item(string name, int amount, int price);
	~Tavara();
	vector<Tavara> Tavarat;
	int Get_Calculated_Profit(int i)
	{
		Prof = Tavarat[i]._price*Tavarat[i]._amount;
		Prof = Prof * 0.7;
		Prof = Prof * 1.3;
		return Prof;
	}
private:
	string _name;
	int _amount;
	int _price;
	int Prof;
};

