#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;



// ���� ����: �޸��� ����
// ���� �޸��� Ʈ���� �ְ�, Ʈ������ �޸��� ������ ���۵ȴ�.
// Ʈ���� �ٴڰ� ��, ������� �������� ������ �ִ�.
// Ʈ���� ������� �������� 1������ �����ϸ�, �ٴڰ� ���� �������̴�.
// �ٴڰ� ��, �����, ������, �÷��̾�, ���� �ɸ��ʹ� ��� ��ġ�� ����� ������ �ִ�.
// �÷��̾� �ɸ��Ϳ� ���� (AI) �ɸ��ʹ� ���� �޸��� Ʈ������ �����Ѵ�.
// �÷��̾�� AI�� �޸� �� �ִ�.
// �÷��̾�� AI�� ��ġ�� �̵��ӵ��� ������.
// ������ ���۵ǰ� ������ �Ѵ�.

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

// ����������
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
		cout << "�÷��̾� ����!";
		isRunning = false;
	}
	else if (Competition->X >= RunningTrack->Goal.X)
	{
		cout << "�÷��̾� ���!";
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