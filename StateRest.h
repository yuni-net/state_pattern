#pragma once
#include "HumanState.h"

class StateRest :public HumanState
{
public:
	static StateRest * get_instance();

	// @Override
	void update(Human & human);



private:
	StateRest();

	~StateRest();
};