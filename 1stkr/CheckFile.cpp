#include "CheckFile.h"
using namespace std;
ofstream CheckFileOutput()
{

	cin.clear();
	cin.ignore();
	const int this_file = 1;
	string name;
	ofstream  FileRecorder;
	FileRecorder.exceptions(ofstream::badbit | ofstream::failbit);
	ifstream CheckFileExist;
	CheckFileExist.exceptions(ifstream::badbit | ifstream::failbit);
	while (true)
	{
		cout << "Enter file name or full way." << endl << "ENTER:";
		getline(cin, name);
		if (name.find(".txt") >= string::npos) {
			cout << "Wrong data type\n" << endl;
			continue;
		}
		try
		{
			CheckFileExist.open(name);
			cout << "A file with the same name already exists. " << endl
				<< "1 - Save in this file " << endl
				<< "2 - Chose another name " << endl;
			int var = CheckMenuItem(2);
			if (var == this_file)
			{
				FileRecorder.open(name);
				CheckFileExist.close();
			}
			else
			{
				CheckFileExist.close();
				cin.clear();
				cin.ignore();
				continue;
			}
		}
		catch (const exception&)
		{
			try
			{
				FileRecorder.open(name);
			}
			catch (const exception&)
			{
				cout << "Access error" << endl;
				continue;
			}

		}
		return FileRecorder;
	}
}
