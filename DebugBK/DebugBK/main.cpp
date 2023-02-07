#include <iostream>

using namespace std;

int main()
{
	int a = 2, b = -4, c = -2;
	int d = (a++) * 2 + b--; // a=  , b=  , c=  , d=
	c = (a += 2) | d; // a=  , b=  , c=  , d=
	d = (b -= 2); // a=  , b=  , c=  , d=
	a = a ^ c; // a=  , b=  , c=  , d=
	return 0;
}