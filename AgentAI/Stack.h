#pragma once
class Stack
{
public:
#define SIZE 20
	int data[SIZE];
	int sp = -1;
	int push(int);
	int pop(void);
	Stack();
	~Stack();
};

