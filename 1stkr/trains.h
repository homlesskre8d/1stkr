#pragma once
#include <iostream>
using namespace std;
class Train
{
private:
	string destination;
	int TrainNumber;
	int hour;
	int CountCope;
	int CountPlac;

public:
	Train();
	Train(string destination, int TrainNumber, int hour, int CountCope, int CountPlac);

	string Getdestination();

	int Gethour();

	int GetCountCope();

	int GetCountPlac();


	bool operator == (const Train& other); // делаем возможность сравнивать
	bool operator != (const Train& other);
};

