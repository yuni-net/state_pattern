#pragma once

class Human;

class HumanState
{
public:
	HumanState();

	virtual void update(Human & human);



	~HumanState();
private:

};