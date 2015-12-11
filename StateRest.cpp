#include <iostream>
#include "StateRest.h"

StateRest * StateRest::get_instance()
{
	static StateRest instance;
	return &instance;
}

// @Override
void StateRest::update(Human & human)
{
	std::cout << "‹xŒe’†" << std::endl;
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
}



StateRest::StateRest()
{
	// Nothing
}

StateRest::~StateRest()
{
	// Nothing
}
