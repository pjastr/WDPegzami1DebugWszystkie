#include <iostream>

using namespace std;

int main()
{
	int a = 4, b = 1, c = -4;
	int d = (a++) * 3 + b--; // a=  , b=  , c=  , d=
	c = (a += 2) | d; // a=  , b=  , c=  , d=
	d = (b -= 2); // a=  , b=  , c=  , d=
	a = a ^ c; // a=  , b=  , c=  , d=
	return 0;
}