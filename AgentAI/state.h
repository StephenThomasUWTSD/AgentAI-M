#ifndef STATE_H
#define STATE_H
//----------------
class Agent;  //forward reference for Agent class

class State
{
public:
	//called by Agents update() method   
	virtual void Execute(Agent*) = 0;  //=0 means not implemented here.

	//Enter() to be executed when state is entered
	virtual void Enter(Agent*) = 0;
	//Exit() to be entered when state is exited
	virtual void Exit(Agent*) = 0;


};


#endif