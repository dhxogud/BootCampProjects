#include <iostream>
#include <ctime>

using namespace std;


int main()
{
	srand((unsigned int)time(NULL));
	int Ball[52];

	for (int i = 0; i < 52; ++i)
	{
		int choice = (int)(rand() % 52) + 1;
		
		for (int j = i - 1; j >= 0; --j)
		{
			while (Ball[j] == choice)
			{
				choice = (int)(rand() % 52) + 1;
			}
		}

		Ball[i] = choice;
	}


	for (int b : Ball)
	{
		cout << "»ÌÀº °ø ";
		cout << b << endl;
	}

	return 0;
}