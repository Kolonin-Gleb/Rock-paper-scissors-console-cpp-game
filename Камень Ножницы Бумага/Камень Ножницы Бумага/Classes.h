#pragma once

#include <iostream>
using namespace std;

class Weapons
{
public:
	virtual void fight() = 0;
};

class Scissors : public Weapons
{
public:
	void fight() override;
};

class Rock : public Weapons
{
public:
	void fight() override;
};

class Paper : public Weapons
{
public:
	void fight() override;
};
