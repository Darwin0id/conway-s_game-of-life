#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
#include "racunalnaIgra.h";


int main()
{
	racunalnaIgra novaInstanca;
	std::cout << novaInstanca.pokreniIgru(60, 60);

	for (;;)
	{
		system("CLS");
		std::cout << novaInstanca.azurirajIgru();
		Sleep(100);
	}


	return 0;
}