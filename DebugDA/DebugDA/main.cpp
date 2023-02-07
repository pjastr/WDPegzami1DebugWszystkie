#include <iostream>

using namespace std;

int main()
{
	int a = 3, b = -3, c = -5, d = 1;
	d = (a++) | 3 + b--; // a=  , b=  , c=  , d=
	c = (a += 7) | --d; // a=  , b=  , c=  , d=
	d = (b -= 2); // a=  , b=  , c=  , d=
	a = a ^ c++; // a=  , b=  , c=  , d=
	return 0;
}