#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;



// 설계 예시: 달리기 시합
// 세상엔 달리기 트랙이 있고, 트랙에서 달리기 시합이 시작된다.
// 트랙은 바닥과 벽, 출발점과 도착점을 가지고 있다.
// 트랙에 출발점과 도착점은 1개씩만 존재하며, 바닥과 벽은 여러개이다.
// 바닥과 벽, 출발점, 도착점, 플레이어, 상대방 케릭터는 모두 위치와 모양을 가지고 있다.
// 플레이어 케릭터와 상대방 (AI) 케릭터는 각각 달리기 트랙위에 존재한다.
// 플레이어와 AI는 달릴 수 있다.
// 플레이어와 AI는 위치와 이동속도를 가진다.
// 시합은 시작되고 끝나야 한다.

class AWall
{
public:
	int X = 0;
	int Y = 0;
	char Shape = '*';
};

class AFloor
{
public:
	int X = 0;
	int Y = 0;
	char Shape = ' ';
};

class AStart
{
public:
	int X = 0;
	int Y = 0;
	char Shape = 'S';
};

class AGoal
{
public:
	int X = 30;
	int Y = 1;
	char Shape = 'G';
};
class ARunningTrack
{
public:
	AStart Start;
	AGoal Goal;
	AWall Walls[60];
	AFloor Floors[30];
};

class APlayerCharacter
{
public:
	int X = 0;
	int Y = 1;
	char Shape = 'P';

	void Move()
	{
		int moveSpeed = (int) (rand() % 4);
		X += moveSpeed;
	}
};

class ACompetitonCharacter
{
public:
	int X = 0;
	int Y = 1;
	char Shape = 'C';


	void Move()
	{
		int moveSpeed = (int)(rand() % 4);
		X += moveSpeed;
	}
};

// 전역변수들
ARunningTrack* RunningTrack = new ARunningTrack();
APlayerCharacter* Player = new APlayerCharacter();
ACompetitonCharacter* Competition = new ACompetitonCharacter();

int Key;
bool isRunning = true;


void Initialize()
{
	srand(unsigned int(time(NULL)));

	for (int i = 0; i < 30; ++i)
	{
		(RunningTrack->Walls)[i].X = i;
		(RunningTrack->Walls)[i].Y = 1;

		(RunningTrack->Floors)[i].X = i;
		(RunningTrack->Floors)[i].Y = 2;

		(RunningTrack->Walls)[30 + i].X = i;
		(RunningTrack->Walls)[30 + i].Y = 3;
	}

	Player->X = 0;
	Player->Y = 1;
	Competition->X = 0;
	Competition->Y = 1;
}

void Input()
{
	Key = _getch();
}

void Tick()
{
	if (Key == 32)
	{
		Player->Move();
		Competition->Move();
	}

	if (Player->X >= RunningTrack->Goal.X)
	{
		cout << "플레이어 도착!";
		isRunning = false;
	}
	else if (Competition->X >= RunningTrack->Goal.X)
	{
		cout << "플레이어 사망!";
		isRunning = false;
	}
}

void Render()
{
	system("cls"); //
	for (int i = 0; i < 30; ++i)
	{
		cout << (RunningTrack->  Walls)[i].Shape;
	}
	cout << endl;
	for (int i = 0; i < 30; ++i)
	{
		cout << (RunningTrack->Floors)[i].Shape;
	}
	cout << endl;
	for (int i = 30; i < 60; ++i)
	{
		cout << (RunningTrack->Walls)[i].Shape;
	}
	cout << endl;

	COORD CompPos = { Competition->X, Competition->Y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CompPos);
	cout << (Competition->Shape);

	COORD PlayerPos = { Player->X, Player->Y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), PlayerPos);
	cout << (Player->Shape);
}

void Clear()
{
	delete RunningTrack;
	RunningTrack = nullptr;
}


int main()
{
	Initialize();

	while (isRunning)
	{
		Input();
		Tick();
		Render();
	}

	Clear();

	return 0;
}