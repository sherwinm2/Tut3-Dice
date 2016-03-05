#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

class Dice
{
	public:
		Dice(void);
		int roll(void);
};

Dice::Dice()	//contructor.
{
	srand(time(NULL));	//seeding of random number generator.
}

int Dice::roll()
{
	return (rand() % 6) + 1; // generates random numbers from 1 - 6, increments rollcount each time.
}

float average(Dice dice, int num)
{
	int i;
	float r;
	float c = 0;

	for (i = 1; i <= num; i++)
	{
		r = dice.roll();
		c = c + r;
		cout << "Roll " << i << ": " << r << endl;
	}
	
	
	return (c / (float)num);
}

int main()
{
	int i, n;
	Dice dice;

	cout << "Enter how many times you wish to roll the dice:";
	cin >> n;
	
	cout.precision(4);
	cout <<"The average value rolled out of "<< n << " roll(s) is: "<< fixed << average(dice, n) << endl;



	return 0;
}


		
