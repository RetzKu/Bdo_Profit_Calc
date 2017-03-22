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
private:
	string _name;
	int _amount;
	int _price;
};

