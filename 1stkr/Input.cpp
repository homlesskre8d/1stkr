#include "Input.h"

Train* ConsoleInput(int count)
{
    std::string valueAddress;
    int valueFloor;
    int valueNumberOfRooms;
    double valueSpace;
	Train* array = new Train[count];

    for (int i = 0; i < count; i++)
    {
        std::cout << "Enter address(#" + std::to_string(i+1) + ")." << std::endl << "ENTER: ";
        std::cin >> valueAddress;

        std::cout << "Enter floor(#" + std::to_string(i + 1) + ")." << std::endl;
        valueFloor =  CheckIntValue();

        std::cout << "Enter number of rooms(#" + std::to_string(i + 1) + ")." << std::endl;
        valueNumberOfRooms = CheckIntValue();

        std::cout << "Enter space(#" + std::to_string(i + 1) + ")." << std::endl;
        valueSpace = CheckDoubleValue();

        std::cout << "Correct data entered(#" << i + 1 << ")!" << std::endl;

        array[i] = Train(valueAddress, valueFloor, valueNumberOfRooms, valueSpace);
    }
	return array;
}

Train* FileInput()
{
	std::string fileName = "";	
	std::ifstream file;
	int count = 0;

	file.exceptions(std::ifstream::badbit | std::ifstream::failbit);
	while (true)
	{
		std::cout << "Enter file name. " << std::endl << "ENTER : ";
		std::cin >> fileName;
		try
		{
			file.open(fileName);
			std::cout << "Sucefull file open " << std::endl;
		}
		catch (const std::exception)
		{
			std::cout <<  "Eror.Try again ." << std::endl;

		}

		std::string valueAddress;
		int valueFloor;
		int valueNumberOfRooms;
		double valueSpace;
		Train* array;

		try
		{
			count = CheckLineInt(file);
			array = new Train[count];
			for (int i = 0; i < count; i++)
			{
				valueAddress = CheckLineString(file);
				valueFloor = CheckLineInt(file);
				valueNumberOfRooms = CheckLineInt(file);
				valueSpace = CheckLineDouble(file);
				
				array[i] = Train(valueAddress, valueFloor, valueNumberOfRooms, valueSpace);

			}
		}
		catch (std::invalid_argument iaex)
		{
			file.close();
			continue;
		}

		file.close();
		return array;

	}
}

