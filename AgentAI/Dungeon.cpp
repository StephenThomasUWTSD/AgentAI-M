#include "Dungeon.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
//construct
DungeonClass::DungeonClass()
{
}

//destruct
DungeonClass::~DungeonClass()
{
}

//file in/out. for reading the dungeon from file(may break into its own class depending on how development goes
void DungeonClass::loadLayout()
{
	string line;
	ifstream myfile("testdungeon.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';
		}
		myfile.close();
	}

	else cout << "Unable to open file";

	
}

void DungeonClass::defineTiles()
{

}