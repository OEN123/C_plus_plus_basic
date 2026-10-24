#include<iostream>
#include<Windows.h>

int main()
{
	SetConsoleOutputCP(CP_UTF8); // if you delete, the hindi don't show.
	std::cout << "Allow emoji or emoticons\n";
	std::cout << "✊\n";

	return 0;
}
