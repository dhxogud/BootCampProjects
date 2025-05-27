#include <iostream>
#include <conio.h>
#include <Windows.h>


#define MAPSIZE 10

using namespace std;

const int Map[MAPSIZE][MAPSIZE] = {
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{ 1, 1, 1, 1, 0, 0, 0, 0, 0, 1},
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{ 1, 0, 0, 1, 0, 0, 0, 0, 0, 1},
	{ 1, 0, 0, 1, 0, 0, 0, 0, 0, 1},
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
};

struct Player
{
	int X = 1;
	int Y = 1;
	string Shape = "P";
};

Player* PlayerData = new Player();

int Key = 0;

void Input()
{
	Key = _getch();
}
void Tick()
{
	int CurrentPlayerY = PlayerData->Y;
	int CurrentPlayerX = PlayerData->X;

	if ((Key == 0x57 || Key == 0x77) && (CurrentPlayerY > 1)
		&& Map[CurrentPlayerY - 1][CurrentPlayerX] == 0) // w, W
	{
		(PlayerData->Y) -= 1;
	}
	else if ((Key == 0x41 || Key == 0x61) && (CurrentPlayerX > 1)
		&& Map[CurrentPlayerY][CurrentPlayerX - 1] == 0) // a, A
	{
		(PlayerData->X) -= 1;
	}
	else if ((Key == 0x53 || Key == 0x73) && (CurrentPlayerY < MAPSIZE - 1)
		&& Map[CurrentPlayerY + 1][CurrentPlayerX] == 0) // s, S
	{
		(PlayerData->Y) += 1;
	}
	else if ((Key == 0x44 || Key == 0x64) && (CurrentPlayerX < MAPSIZE - 1)
		&& Map[CurrentPlayerY][CurrentPlayerX + 1] == 0) // d, D
	{
		(PlayerData->X) += 1;
	}
}
void Render()
{
	system("cls");
	
	for (int y = 0; y < MAPSIZE; y++)
	{
		for (int x = 0; x < MAPSIZE; x++)
		{
			if (Map[y][x] == 1)
			{
				cout << '*';
			}
			else
			{
				cout << ' ';
			}
		}
		cout << endl;
	}


	COORD pos = { PlayerData->X, PlayerData->Y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	cout << (PlayerData->Shape) << endl;
}

int main()
{
	Render();

	bool IsRunning = true;
	while (IsRunning)
	{
		Input();
		Tick();
		Render();
	}

	delete PlayerData;
	PlayerData = nullptr;

	return 0;
}

