#include "Menu.h"
using namespsce std;
int AscUserMenu()
{
	int variant;
	cout << "Для получения нажмите : " << endl
		<< " 1 списка поездов, следующих до заданного пункта назначения, ." << endl
		<< " списка поездов, следующих до заданного пункта назначения и отправляющихся после заданного часа, "
		<< "который находится в определенном промежутке " << endl
		<< " 3 списка поездов, отправляющихся до заданного пункта назначения и имеющих общие места. " << endl;
	variant = 	CheckMenuItem(3);
	return variant;
}

int AscUserInputType()
{
	int variant;
	cout << "Enter 1 for manual input " << endl
		<< "Enter 2 for file input " << endl;
	variant = CheckMenuItem(2);
	return variant;
}

int AscOutputType()
{
	int variant;
	cout << "Enter 1 for console output " << endl
		<< "Enter 2 for file output " << endl;
	variant = CheckMenuItem(2);
	return variant;
}

int AscOutputMenu()
{
	int variant;
	cout << "Enter 1 for overwriting an existing file " << endl
		<< "Enter 2 for creating a new file" << endl;
	variant =  CheckMenuItem(2);
	return variant;
}

int AscInitialDataSaveMenu()
{
	int variant;
	cout << "1 - сохранить исходные данные" << endl
		<< "2 - продолжить без сохранения " << endl;
	variant = CheckMenuItem(2);
	return variant;
}
