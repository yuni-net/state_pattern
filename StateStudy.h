#pragma once
#include "HumanState.h"

class StateStudy :public HumanState
{
public:
	static StateStudy & get_instance();

	// @Override
	void update(Human & human);



private:
	StateStudy();

	~StateStudy();
};