#include <iostream>
#include "Human.h"

Human::Human()
{
	state = State::resting;
	hunger = 0;
	fatigue = 0;
	motivation = 3;
}

void Human::change_state(const int state)
{
	this->state = state;
}

void Human::life()
{
	switch (state)
	{
	case State::studying:
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
		break;

	case State::resting:
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
		break;

	case State::eating:
		std::cout << "H–’†" << std::endl;
		hunger = 0;
		motivation += 1;
		change_state(State::resting);
		break;
	}
}