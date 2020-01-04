#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <Windows.h>

//using namespace std;

static const char characters[] = 
"qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890`~!@#$%^&*()_+{}|\;:,<.>/?"; //characters that are used for passcode **ADD MORE LATER**

int StringLength = sizeof(characters) - 1;

char GenRand() {
	return characters[rand() % StringLength];
}

int main(){
	
	srand(time(0));

	int length = 0;

	std::cout << "Enter the number of digits for your password" << std::endl;
	std::cin >> length;



	std::string Str;
	for (unsigned int i = 0; i < length; ++i)
	{
		Str += GenRand();
	}
	std::cout << "Password Made!" << std::endl;
	std::cout << Str << std::endl;

	std::cout << std::endl;
	system("PAUSE");
	return 0;
}