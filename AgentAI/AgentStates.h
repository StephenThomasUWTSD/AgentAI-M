#pragma once
#ifndef AGENT_STATES_H
#define AGENT_STATES_H
#include "State.h"


class Agent;//forward ref to Agent
//Each state derived from State superclass

class InWork : public State
{
private:


public:
	InWork(){};
	//this is a singleton
	static InWork* Instance();
	virtual void Execute(Agent*);
	virtual void Enter(Agent*);
	virtual void Exit(Agent*);
};


class AtHome : public State
{
private:


public:
	AtHome(){};
	static AtHome* Instance();
	virtual void Execute(Agent*);
	virtual void Enter(Agent*);
	virtual void Exit(Agent*);
};

#endif

