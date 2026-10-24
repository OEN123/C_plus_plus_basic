#include<iostream>
#include<Windows.h>

int main()
{
	SetConsoleOutputCP(CP_UTF8); // if you delete, the hindi don't show.
	std::cout << "Allow Hindi char show\n";
	std::cout << "मैं एक प्रोग्रामर हूं\n";

	return 0;
}
