#include "minimal_fighter.h"

MinimalFighter::MinimalFighter()
{
        mHp = 0; mPower = 0; mStatus = Invalid;
}

MinimalFighter::MinimalFighter(int _hp, int _power)
{
        mHp = _hp;
        mPower = _power;
        if(mHp <= 0)
                mStatus = Dead;
        else mStatus = Alive;
}

MinimalFighter::~MinimalFighter() {}

int MinimalFighter::hp() { return mHp; }

int MinimalFighter::power() { return mPower; }

FighterStatus MinimalFighter::status() 
{
	if(mHp <= 0)
		mStatus = Dead;
	else mStatus = Alive;
	return mStatus; 
}

void MinimalFighter::setHp(int _hp) { mHp = _hp; }

void MinimalFighter::hit(MinimalFighter *_enemy)
{
	mHp = mHp - _enemy->power();
	int eneHp = _enemy->hp() - mPower;
	_enemy->setHp(eneHp);
}

void MinimalFighter::attack(MinimalFighter *_enemy)
{
	int eneHp = _enemy->hp() - mPower;
	mPower = 0;
	_enemy->setHp(eneHp);
}

void MinimalFighter::fight(MinimalFighter *_enemy)
{
	while(this->status() != Dead && _enemy->status() != Dead)
	{
		mHp = mHp - _enemy->power();
		int eneHp = _enemy->hp() - mPower;
		_enemy->setHp(eneHp);
	}
}		
