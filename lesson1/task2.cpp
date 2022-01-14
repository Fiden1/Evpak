#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	int Number1;
	cout << "Первое число: ";
	cin >> Number1;
	int Number2;
	cout << "Первое число: ";
	cin >> Number2;
	cout << Number1 % Number2;
}