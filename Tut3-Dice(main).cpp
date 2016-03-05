#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

class Dice
{
	public:
		Dice(void);
		int roll(void);
		void setsumrollvals(float);
		float getsumrollvals();
	private:
		float sumval;
};

Dice::Dice()	//contructor.
{
	sumval = 0;
	srand(time(NULL));	//seeding of random number generator.
}

int Dice::roll()
{
	return (rand() % 6) + 1; // generates random numbers from 1 - 6, increments rollcount each time.
}

void Dice::setsumrollvals(float r)
{
	sumval = sumval + r;
}

float Dice::getsumrollvals()
{
	return sumval;
}

float average(Dice dice, int num)
{
	float sum;

	sum = dice.getsumrollvals() / (float)num;
	
	return sum;
}

int main()
{
	int i, n;
	float r;
	
	Dice dice;

	cout << "Enter how many times you wish to roll the dice:";
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		r = dice.roll();
		dice.setsumrollvals(r);
		cout << "Roll " << i << ": " << (int)r << endl;
	}
	
	cout.precision(4);
	cout <<"The average value rolled out of "<< n << " rolls is: "<< fixed << average(dice, n) << endl;

	return 0;
}


		
