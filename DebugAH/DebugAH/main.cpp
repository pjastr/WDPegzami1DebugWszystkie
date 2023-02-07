#include <iostream>

using namespace std;

int main()
{
	int a = 5, b = -4, c = 2, d;
	d = b++ + (a - c) % 3; //a=  ,b=  , c=  ,d=
	a = ++a + c - b % 3; //a=  ,b=  , c=  ,d=
	d = (b += c) + 6; //a=  ,b=  , c=  ,d=
	b = a | c; //a=  ,b=  , c=  ,d=
	return 0;
}