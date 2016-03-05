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
		int rollcounter(void);
	
	private:
		int rollcount;
};

Dice::Dice()	//contructor
{
	rollcount = 0;
	srand(time(NULL));	//seeding of random number generator
}

Dice::~Dice()	//destructor
{

}

