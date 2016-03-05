#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

class Dice
{
	public:
		Dice(void);
		~Dice(void);
		int roll(void);
		int getrollcounter(void);
	
	private:
		int rollcount;
};

Dice::Dice()	//contructor.
{
	rollcount = 0;
	srand(time(NULL));	//seeding of random number generator.
}

Dice::~Dice()	//destructor.
{

}

int Dice::getrollcounter()
{
	return rollcount;
}

int Dice::roll()
{
	rollcount++;
	return (rand() % 6) + 1; // generates random numbers from 1 - 6, increments rollcount each time.
}

int main()
{
	Dice dice;
	cout << dice.roll() << endl;

}