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
	int hunger;		// ������x
	int fatigue;	// ���
	int motivation;
	HumanState * state;
};
