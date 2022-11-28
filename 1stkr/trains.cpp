#include "trains.h"

Train::Train()
{
	 destination = "";
	 TrainNumber;
	 hour;
	 CountCope;
	 CountPlac;

}

Train::Train(std::string valuedestination, int valueTrainNumber, int valuehour, int valueCountCope, int valueCountPlac)
	:destination(valuedestination), TrainNumber(valueTrainNumber), hour(valuehour), CountCope(valueCountCope), CountPlac(valueCountPlac)
{}

std::string Train::Getdestination()
{
	return destination;
}



int Train::Gethour()
{
	return hour;
}



int Train::GetCountCope()
{
	return CountCope;
}


int Train::GetCountPlac()
{
	return CountPlac;
}





bool Train::operator==(const Train& other) // ÏÅĞÅÃĞÓÇÊÀ ÎÏÅĞÀÒÎĞÀ ÄËß ÑĞÀÂÍÅÍÈß ò.å ÷òîá áëÿòü ìîæíî áûëî ñğàâíèâàòü şíèò òåñòû

{
	return address == other.address && floor == other.floor 
		&& numberOfRooms == other.numberOfRooms && space == other.space;
}

bool Train::operator!=(const Train& other)
{
	return !(*this == other);
}

std::string Train::GetAddress()
{
	return std::string();
}
