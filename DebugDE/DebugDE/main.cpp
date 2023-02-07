#include <iostream>

using namespace std;

int main()
{
	int a = 3, b = -5, c = -2, d = 5;
	d = (a++) | 5 + b--; // a=  , b=  , c=  , d=
	c = (a += 3) | --d; // a=  , b=  , c=  , d=
	d = (b -= 2); // a=  , b=  , c=  , d=
	a = --a ^ c++; // a=  , b=  , c=  , d=
	return 0;
}