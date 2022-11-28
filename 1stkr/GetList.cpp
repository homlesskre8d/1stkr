#include "GetList.h"
#include "trains.h"

using namespace std;
Train* GetListWithSetdestination(Train* array, string destination,int& endSize)
{
	Train* tmp_list = new Train[size];
	endSize = 0;
	for (int i = 0; i < size; i++)
		if (array[i].Getdestination() == destination)
		{
			tmp_list[endSize] = array[i];
			endSize++;
		}
	Train* endList = new Train [endSize] ;
	for (int i = 0; i < endSize; i++)
		endList[i] = tmp_list[i];

	return endList;
}

Train* GetListWithSetdestinationandpastehour(Train* array, string destination, int hour, int& endSize)
{
	Train* tmp_list = new Train[size];
	endSize = 0;
	for (int i = 0; i < size; i++)
		if (array[i].Getdestination() == destination && array[i].Gethour() >= hour)
		{
			tmp_list[endSize] = array[i];
			endSize++;
		}
	Train* endList = new Train[endSize];
	for (int i = 0; i < endSize; i++)
		endList[i] = tmp_list[i];

	return endList;
}

Train* GetListWithSetdestinationandSpaces(Train* array, string destination,  int& endSize)
{
	Train* tmp_list = new Train[size];
	endSize = 0;
	for (int i = 0; i < size; i++)
		if (array[i].Getdestination() == destination && array[i].GetCountCope() + array[i].GetCountPlac() > 0)
		{
			tmp_list[endSize] = array[i];
			endSize++;
		}
	Train* endList = new Train[endSize];
	for (int i = 0; i < endSize; i++)
		endList[i] = tmp_list[i];

	return endList;
}
