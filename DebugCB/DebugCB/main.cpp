#include <iostream>

using namespace std;

int main()
{
	int a = 10, b = -5, c = -11;
	int d = (a++) * 3 + b--; // a=  , b=  , c=  , d=
	c = (a += 5) | d; // a=  , b=  , c=  , d=
	d = (b -= 2); // a=  , b=  , c=  , d=
	a = a ^ c; // a=  , b=  , c=  , d=
	return 0;
}