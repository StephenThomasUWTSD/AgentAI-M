#include "Dungeon.h"
#include "Agent.h"
#include "Stack.h"
#include "SearchAlgorithms.h"
#include <iostream>
using namespace std;
int main()
{
	DungeonClass dungeon;
	Stack stack;
	dungeon.loadLayout();
	//stack
	for (int i = 0; i<SIZE + 3; i++)
	{
		cout << "Pushing " << i << endl;
		stack.push(i);
	}

	for (int i = 0; i<SIZE + 3; i++)
	{
		cout << "Popping " << stack.pop() << endl;
	}
	/*should output SIZE lines onto the console window showing array content*/
	char response;
	std::cin >> response;
	return 0;
}