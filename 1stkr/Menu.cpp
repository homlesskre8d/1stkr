#include "Menu.h"
using namespsce std;
int AscUserMenu()
{
	int variant;
	cout << "��� ��������� ������� : " << endl
		<< " 1 ������ �������, ��������� �� ��������� ������ ����������, ." << endl
		<< " ������ �������, ��������� �� ��������� ������ ���������� � �������������� ����� ��������� ����, "
		<< "������� ��������� � ������������ ���������� " << endl
		<< " 3 ������ �������, �������������� �� ��������� ������ ���������� � ������� ����� �����. " << endl;
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
	cout << "1 - ��������� �������� ������" << endl
		<< "2 - ���������� ��� ���������� " << endl;
	variant = CheckMenuItem(2);
	return variant;
}
