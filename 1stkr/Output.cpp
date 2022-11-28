#include "Output.h"
using namespace std;
void FileOutput(Train* array, string var, int endSize)
{
	ofstream fileRecorder = CheckFileOutput();

	fileRecorder << var << endl;

	for (int i = 0; i < endSize; i++)
	{
		fileRecorder << "train #" << i + 1 << endl;

		fileRecorder << "destination " + array[i].Getdestination() << endl;

		fileRecorder << "departure time " + to_string(array[i].Gethour()) << endl;

		fileRecorder << "Count of Cope " + to_string(array[i].GetCountCope()) << endl;

		fileRecorder << "Count of Plac " + to_string(array[i].GetCountPlac()) + "\n" << endl;
	}

	cout << "File saved successfully!!!" << endl;;
	
	fileRecorder.close();
}


void InitialFileOutput(Flat* array, int size )
{
	ofstream fileRecorder = CheckFileOutput();
	fileRecorder << size << endl;
	for (int i = 0; i < size; i++)
	{
		fileRecorder << array[i].GetAddress() << endl;
		fileRecorder << array[i].GetFloor() << endl;
		fileRecorder << array[i].GetNumberOfRooms() << endl;
		fileRecorder << array[i].GetSpace() << endl;

	}
}

void ConsoleOutput(Flat* array, string var, int endSize)
{

	cout << var;
	for (int i = 0; i < endSize; i++)
	{
		cout << "Flat #" << i + 1 << endl;

		cout << "Address is " + array[i].GetAddress() << endl;;
		
		cout << "Floor is " + to_string(array[i].GetFloor()) << endl;

		cout << "Number of rooms is " + to_string(array[i].GetNumberOfRooms()) << endl;

		cout << "Space is " + to_string(array[i].GetSpace()) + "\n" << endl;
	}
}
