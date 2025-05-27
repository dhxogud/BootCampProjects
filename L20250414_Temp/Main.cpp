#include <iostream>
#include "APlayer.h"
#include "AMonster.h"

using namespace std;

class State
{
public:
	int Id;
	string Name;
};

class Transition
{
public:
	int CurrentState;
	string Condition;
	int NextState;
};

class Monster
{
public:
	int State;
	string Condition;
};

class MonsterFSM
{
public:
	State States[4];
	Transition Transitions[5];

	void Process(Monster* _Monster)
	{
		for (int i = 0; i < 5; i++)
		{
			if (_Monster->State == States[i].Id &&
				_Monster->Condition == Transitions[i].Condition)
			{
				_Monster->State = Transitions[i].NextState;
			}
		}
	}

	string FindName(int FindId)
	{
		for (int i = 0; i < 4; ++i)
		{
			if (States[i].Id == FindId)
			{
				return States[i].Name;
			}
		}
		return "";
	}
};

class Icon
{

};
class Skill
{
public:
	int MaxSkillLevel;
	int CurrentSkillLevel;

	Skill* NextSkill;

	void UseSkillPoint();
};

class SkillTree
{
public:
	Skill Skills[22];

};
int main()
{

	MonsterFSM MyMonsterFSM;

	MyMonsterFSM.States[0].Id = 1;
	MyMonsterFSM.States[0].Name = "��ȸ";

	MyMonsterFSM.States[1].Id = 2;
	MyMonsterFSM.States[1].Name = "�߰�";

	MyMonsterFSM.States[2].Id = 3;
	MyMonsterFSM.States[2].Name = "����";

	MyMonsterFSM.States[3].Id = 4;
	MyMonsterFSM.States[3].Name = "����";

	MyMonsterFSM.Transitions[0].CurrentState = 1;
	MyMonsterFSM.Transitions[0].Condition = "���߰�";
	MyMonsterFSM.Transitions[0].NextState = 2;

	MyMonsterFSM.Transitions[1].CurrentState = 2;
	MyMonsterFSM.Transitions[1].Condition = "����ħ";
	MyMonsterFSM.Transitions[1].NextState = 1;

	MyMonsterFSM.Transitions[2].CurrentState = 2;
	MyMonsterFSM.Transitions[2].Condition = "�����Ÿ�����";
	MyMonsterFSM.Transitions[2].NextState = 3;

	MyMonsterFSM.Transitions[3].CurrentState = 3;
	MyMonsterFSM.Transitions[3].Condition = "�����Ÿ���Ż";
	MyMonsterFSM.Transitions[3].NextState = 2;

	MyMonsterFSM.Transitions[4].CurrentState = 3;
	MyMonsterFSM.Transitions[4].Condition = "HP����";
	MyMonsterFSM.Transitions[4].NextState = 4;


	Monster monster;
	monster.State = 1;
	monster.Condition = "���߰�";
	MyMonsterFSM.Process(&monster);
	cout << MyMonsterFSM.FindName(monster.State) << endl;


	monster.Condition = "����ħ";
	MyMonsterFSM.Process(&monster);
	cout << MyMonsterFSM.FindName(monster.State) << endl;

	APlayer* player = new APlayer();

	player->X = 10;
	player->Y = 10;
	player->Move();

	AMonster* Monster = new AMonster();

	Monster->X = 10;
	Monster->Y = 10;
	Monster->Move();

	delete player;
	player = nullptr;

	delete Monster;
	Monster = nullptr;

	return 0;
}
