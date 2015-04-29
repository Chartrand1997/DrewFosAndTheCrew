#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>

using namespace std;

int main()
{

	cout << "Andrew Foster" << endl << "Nate Hodge" << endl << "Justin Chartrand" << endl << "3rd Hour" << endl;
	
	int gamerunning = 1;
	int levelselection = 0;
	int progress = 0;
	int available = 0;
	string reader = "Test";
	string selected = "You have selected: ";
	string ls = "Select your your level ";

	do
	{

		if (levelselection == 0)
		{

			ifstream stream("Progress.txt");
			for (string reader; getline(stream, reader);)
			{

				if (reader == "levelone")
				{
					progress = 0;
				}
				else if (reader == "leveltwo")
				{
					progress = 1;
				}
				else if (reader == "levelthree")
				{
					progress = 2;
				}
				else (reader != "levelone" || reader != "leveltwo" || reader != "levelthree");
				
				ofstream streamtwo("progress.txt");
				streamtwo.write("levelone", ios::trunc);
			}


			if (progress == 0)
			{

				cout << ls << endl;

				while (!(cin >> available))
				{

					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "You cannot play that level. Please select another.";
				}
				
				cout << selected << levelselection;

			}
			else if (progress == 1)
			{

				cout << ls << endl;
				cin >> levelselection;

			}
			else if (progress == 2)
			{

				cout << ls << endl;
				cin >> levelselection;

			}
			else (progress < 0 || progress > 2);
			
			progress = 0;
			
		}

	} while (gamerunning = 0);
		
	system("pause");
	return 0;
}