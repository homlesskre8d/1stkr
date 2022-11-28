#pragma once
#include "trains.h"


Train* GetListWithSetdestination(Train* array, string destination, int& endSize);

Train* GetListWithSetdestinationandpastehour(Train* array, string destination, int hour, int& endSize);

Train* GetListWithSetdestinationandSpaces(Train* array, string destination, int& endSize);