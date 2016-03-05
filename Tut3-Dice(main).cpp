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
	float avrg;

	avrg = dice.getsumrollvals() / (float)num;
	
	return avrg;
}

float average(int arr[], int s)
{
	float avrg = 0;
	int i;

	for (i = 0; i < s; i++)
	{
		avrg = avrg + (float)arr[i];
	}

	avrg = avrg / (float)s;
	return avrg;
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
	cout << "The average value rolled out of " << n << " rolls is: " << fixed << average(dice, n) << endl;

	const int size = 10;
	int arr[size];
	
	cout << endl << "Enter the 10 values to put into your array: " << endl;
	for (i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	cout << "The average value of the array is: " << fixed << average(arr, size) << endl;

	return 0;
}


		
