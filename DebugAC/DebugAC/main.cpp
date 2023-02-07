#include <iostream>

using namespace std;

int main()
{
	int a = 3, b = 1, c = -4, d;
	d = a++ + (b - c) % 3; //a=  ,b=  , c=  ,d=
	d = ++a + b - c % 3; //a=  ,b=  , c=  ,d=
	d = (b += c) + 2; //a=  ,b=  , c=  ,d=
	b = a ^ c; //a=  ,b=  , c=  ,d=
	return 0;
}