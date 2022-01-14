#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	int a;
	int b;
	int f;
	cout << "Type a: ";
	cin >> a;
	cout << "Type b: ";
	cin >> b;
	cout << "Type f: ";
	cin >> f;
	cout << (a + b - f / a) + f * a * -(a + b);
}