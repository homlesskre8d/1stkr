#include "InputCheck.h"
using namespace std;
int CheckIntValue()
{
	string valueInput;
	int value;

	while (true)
	{
		cout << "ENTER : ";
		cin >> valueInput;
		try
		{
			value = stoi(valueInput);
			if (value > 0)
				return value;
			else
				throw value;
		}
		catch (exception)
		{

			cout << " Eror.Try again. " << endl;
		}
		catch (int ex_value)
		{
			cout << ex_value << " - uncorrect input .Try again." << endl;
		}
	}
}

int CheckMenuItem(int numberOfPoints)
{
	string valueInput;
	int value;
	while (true)
	{
		cout << "ENTER : ";
		cin >> valueInput;
		try
		{
			value = stoi(valueInput);
			if (value <= numberOfPoints && value >= 1)
				return value;
			else
				throw value;
		}
		catch (exception)
		{

			cout << "Error. Try again. " << endl;
		}
		catch (int ex_value)
		{
			cout << ex_value << " menu item does not exist.Try again." << endl;
		}
	}
}

string CheckLineString(ifstream& file)
{

	string tempValue = "";
	try
	{
		getline(file, tempValue);
		return tempValue;
	}
	catch (const exception)
	{
		cout << "There is not enough data in the file or incorrect file filling form." << endl;
		throw invalid_argument("Wrong type. Expected string");

	}
}



int CheckLineInt(ifstream& file)
{
	string tempValue = "";
	int tempInt = 0;
	try
	{
		getline(file, tempValue);
	}
	catch (const exception)
	{
		cout << "There is not enough data in the file or incorrect file filling form." << endl;
		throw invalid_argument("Not enough data");

	}
	try
	{
		tempInt = stoi(tempValue);
		if (tempInt < 0)

		{
			throw  invalid_argument("Out of range ");
		}
		else
			return tempInt;
	}
	catch (const exception)
	{
		cout << "Wrong data type." << endl;
		throw invalid_argument("Wrong data type.");
	}
}
