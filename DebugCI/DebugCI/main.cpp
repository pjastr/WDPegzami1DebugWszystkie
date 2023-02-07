#include <iostream>

using namespace std;

int main()
{
	int a = 5, b = -8, c = -3;
	int d = (a++) * 3 + b--; // a=  , b=  , c=  , d=
	c = (a += 6) | --d; // a=  , b=  , c=  , d=
	d = (b -= 2); // a=  , b=  , c=  , d=
	a = a | c++; // a=  , b=  , c=  , d=
	return 0;
}