#pragma once
#include "Tavara.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Tuote
{
public:
	Tuote() {};
	Tuote(string Name, vector<Tavara> Output, int invested, int profit);
	~Tuote();

private:
	string _Name;
	int _Invested;
	int _Profit;
};

