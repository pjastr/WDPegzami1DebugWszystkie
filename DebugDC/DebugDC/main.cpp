#include <iostream>

using namespace std;

int main()
{
	int a = 2, b = -3, c = -4, d = 6;
	d = (a++) | 5 + b--; // a=  , b=  , c=  , d=
	c = (a += 3) | --d; // a=  , b=  , c=  , d=
	d = (b -= 2); // a=  , b=  , c=  , d=
	a = --a ^ c++; // a=  , b=  , c=  , d=
	return 0;
}