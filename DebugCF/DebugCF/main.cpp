#include <iostream>

using namespace std;

int main()
{
	int a = 6, b = -2, c = -4;
	int d = (a++) * 3 + b--; // a=  , b=  , c=  , d=
	c = (a += 5) | d; // a=  , b=  , c=  , d=
	d = (b -= 3); // a=  , b=  , c=  , d=
	a = a | c++; // a=  , b=  , c=  , d=
	return 0;
}