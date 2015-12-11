#pragma once

class HumanState;

struct State
{
	enum
	{
		studying,
		resting,
		eating,
		quantity
	};
};


class Human
{
public:
	Human();
	void change_state(HumanState * state);
	void life();



private:
	int hunger;		// • Œ¸‚è“x
	int fatigue;	// ”æ‚ê
	int motivation;
	HumanState * state;
};
