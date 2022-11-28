#pragma once
#include "trains.h"
#include <iostream>
#include <string>
#include <fstream>
#include "CheckFile.h"
void FileOutput(Train* array, std::string var, int endSize);
void ConsoleOutput(Train* array, std::string var, int endSize);
void InitialFileOutput(Train* array, int size);
