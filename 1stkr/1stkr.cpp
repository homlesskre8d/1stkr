#include "trains.h"
#include"Menu.h"
#include "Input.h"
#include "Output.h"
#include "GetList.h"

using namespace std;

enum class InputType
{
	Console = 1,
	File
};


enum class ListType
{
	TrainsSetdestination = 1,
	Setdestinationandpastehour,
	SetdestinationandSpaces
};

enum class Answer
{
	Yes = 1,
	No
};


int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "verbeckiy daniil 1st kr" << endl;
	while (true)
	{

		Train* array = nullptr;
		int count = 0;

		InputType inputVar = static_cast<InputType>(AscUserInputType());

		switch (inputVar)
		{
		case InputType::Console:
			cout << "Enter trains count. " << endl;
			count = CheckIntValue();
			array = ConsoleInput(count);
			break;


		case InputType::File:
			array = FileInput();
			break;
		}

		if (inputVar == InputType::Console)
		{
			Answer initialDataVar = static_cast<Answer> (AscInitialDataSaveMenu());
			if (initialDataVar == Answer::Yes)
				InitialFileOutput(array, count);
		}


		Train* endList = nullptr;
		int endSize = 0;

		string Setdestination;

		int Sethour;

		string listType;

		ListType var = static_cast<ListType>(AscUserMenu());
		switch (var)
		{
		case ListType::TrainsSetdestination:
			cout << "input destination:";
			getline(cin, Setdestination);
			//Setdestination = CheckLineString();
			listType = "trains going to " + Setdestination + "\n";
			endList = GetListWithSetdestination(array, Setdestination, endSize);
			break;

		case ListType::Setdestinationandpastehour:
			cout << "input destination:";
			getline(cin, Setdestination);
			//Setdestination = CheckLineString();
			cout << endl;
			cout << "input hour";
			Sethour = CheckIntValue();
			cout << endl;

			listType = "trains going to " + Setdestination + " paste " + to_string(Sethour) + "\n";

			endList = GetListWithSetdestinationandpastehour(array, Setdestination, Sethour, endSize);
			break;

		case ListType::SetdestinationandSpaces:
			cout << "input destination:";
			getline(cin, Setdestination);
			//Setdestination = CheckLineString();

			listType = "trains going to " + Setdestination + " and have spaces \n";
			endList = GetListWithSetdestinationandSpaces(array, Setdestination, endSize);
			break;
		}

		InputType outputVar = static_cast<InputType> (AscOutputType());

		switch (outputVar)
		{
		case InputType::Console:
			ConsoleOutput(array, listType, endSize);
			break;
		case InputType::File:
			FileOutput(array, listType, endSize);
			break;
		}

		delete[] array;
		delete[] endList;
		cout << "Завершить программу 1 - да 2 - нет " << endl;
		Answer exitVar = static_cast<Answer>(CheckIntValue());
		switch (exitVar)
		{
		case Answer::Yes:
			return 0;

		case Answer::No:
			continue;

		}
	}
}

