#include<iostream>
#include<random>
#include<typeinfo>

std::random_device rd;
std::mt19937 gen(rd());
unsigned int RAND = gen();

int main()
{
	std::cout << RAND << "\n";
	return 0;
}
