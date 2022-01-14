#include <iostream>
#include <string>

int main()
{
	std::string surname;
	std::cout << "What is your surname? ";
	getline(std::cin, surname);
	std::string name;
	std::cout << "What is your name? ";
	getline(std::cin, name);
	std::string old;
	std::cout << "How old are you? ";
	getline(std::cin, old);
	std::cout << surname << " " << name << "," << old << "!\n";
}