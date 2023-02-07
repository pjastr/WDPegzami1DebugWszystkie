#include <iostream>

using namespace std;

int main()
{
	int a = 2, b = 4, c = -2, d =6;
	d = (a += 6) | (c -= 2); // a=  , b=  , c=  , d=
	c = (a += 3) | --d; // a=  , b=  , c=  , d=
	a = (b -= 2); // a=  , b=  , c=  , d=
	d = --a ^ c++; // a=  , b=  , c=  , d=
	return 0;
}