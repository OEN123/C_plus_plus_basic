#include<iostream>
#include<Windows.h>

int main()
{
	SetConsoleOutputCP(CP_UTF8); // if you delete, the kanji don't show.
	std::cout << "Allow japanese symbols\Kanji\n";
	std::cout << "私はプログラマーです\n";

	return 0;
}
