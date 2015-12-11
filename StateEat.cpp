#include <iostream>
#include "StateEat.h"

StateEat * StateEat::get_instance()
{
	static StateEat instance;
	return &instance;
}

// @Override
void StateEat::update(Human & human)
{
	std::cout << "‹xŒe’†" << std::endl;
	/*
	motivation = 3;
	hunger += 1;
	if (hunger >= 5)
	{
		change_state(State::eating);
	}
	else if (motivation >= 3)
	{
		change_state(State::studying);
	}
	//*/
}



StateEat::StateEat()
{
	// Nothing
}

StateEat::~StateEat()
{
	// Nothing
}
