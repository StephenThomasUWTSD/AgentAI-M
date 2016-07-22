#include "Stack.h"



Stack::Stack()
{
}

int Stack::push(int item)
{
	if (sp < SIZE - 1)
	{
		sp++;
		data[sp] = item;
		return 0;
	}
	else
		return -1;
}

int Stack::pop(void)
{
	int temp;
	if (sp>-1)
	{
		temp = data[sp];
		sp--;
		return temp;
	}
	else
		return -1;
}
Stack::~Stack()
{
}
