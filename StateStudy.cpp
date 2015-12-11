#include <iostream>
#include "StateStudy.h"

StateStudy * StateStudy::get_instance()
{
	static StateStudy study;
	return &study;
}

// @Override
void StateStudy::update(Human & human)
{
	std::cout << "•×‹­’†" << std::endl;
	motivation -= 1;
	hunger += 1;
	if (hunger >= 5)
	{
		change_state(State::eating);
	}
	else if (motivation <= 0)
	{
		change_state(State::resting);
	}
}



StateStudy::StateStudy()
{
	// Nothing
}

StateStudy::~StateStudy()
{
	// Nothing
}
