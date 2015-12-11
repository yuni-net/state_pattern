#pragma once
#include "HumanState.h"

class StateEat :public HumanState
{
public:
	static StateEat * get_instance();

	// @Override
	void update(Human & human);



private:
	StateEat();

	~StateEat();
};