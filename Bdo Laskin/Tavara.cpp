#include "Tavara.h"
#include <vector>




Tavara::Tavara()
{

}
Tavara::~Tavara()
{
}
void Tavara::New_Item(string Name, int Amount, int Price)
{
	Tavara _Tavara(Name, Amount, Price);
	Tavarat.push_back(_Tavara);
}