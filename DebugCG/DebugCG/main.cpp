#include <iostream>

using namespace std;

int main()
{
	int a = 3, b = 4, c = -2;
	int d = (a++) * 3 + b--; // a=  , b=  , c=  , d=
	c = (a += 5) | --d; // a=  , b=  , c=  , d=
	d = (b -= 3); // a=  , b=  , c=  , d=
	a = a | c++; // a=  , b=  , c=  , d=
	return 0;
}