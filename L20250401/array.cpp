#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	float Color = 0;
	char Alphabet = 'A';
	bool Condition = true;
	bool IsFinish = false;
	bool IsRunning = true;

	char Key = 0;
	for ( ; IsRunning; )
	{
		//Input
		cin >> Key;

		// Procees
		if (Key == 'Q')
		{
			IsRunning = false;
		}

		//Render
		cout << "Hello World" << endl;
	}
	
	return 0;
}
