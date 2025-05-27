#pragma once
#include "BaseStat.h"

class PlayerStat : public BaseStat
{
public:
	PlayerStat();
	virtual ~PlayerStat();
	void OnDead(BaseStat* Attacker) override;
	void GainReward(int Gold, float Exp);
protected:
	int Gold;
	float Exp;
};

