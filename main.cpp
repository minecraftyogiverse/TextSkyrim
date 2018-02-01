#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int stamina;

int main()
{
    class Race
    {
    private:
        string playerRace;

    public:
        friend void setRace(istream& in);

        friend string Get()
        {
            return playerRace;
        }
    };

    void Race::setRace(istream& in)
    {
        getline(in, playerRace);

    }

    float speed;
    int time;

	//character creation

	//begin setting player's race

	do
	{
		std::cout << "what is your race?(Nord, Orc, Dark Elf, Wood Elf, High Elf, imperial, Breton, Redguard, or Khajiit" << endl; // sets player race
		Race race;
		race.setRace(cin);

		std::transform(race.begin(), race.end(), race.begin, tolower);

		if (race != Nord || race != nord || race != Orc || race != orc || race != Dark Elf || race != Dark Elf || race != dark Elf || race != dark elf || race != Wood Elf || race != wood Elf || race != Wood elf || race != wood elf || race != High Elf || race != High elf || race != high Elf || race != high elf || race != Imperial || race != imperial || race != Breton || race != breton || race != Redguard || race != redguard || race != Khajiit || race != khajiit)
		std::cout << "please choose a listed race." << endl;

	} while (race != Nord || race != nord || race != Orc || race != orc || race != Dark Elf || race != Dark Elf || race != dark Elf || race != dark elf || race != Wood Elf || race != wood Elf || race != Wood elf || race != wood elf || race != High Elf || race != High elf || race != high Elf || race != high elf || race != Imperial || race != imperial || race != Breton || race != breton || race != Redguard || race != redguard || race != Khajiit || race != khajiit);

	// begin setting stamina variables for each race string

    if(race == nord || race == Nord)
    {
        stamina = 10;
        std::cout<<"you have " stamina "stamina" << endl;
    }

    else if(race == orc || race == Orc)
    {
        stamina = 15;
        std::cout<<"you have " stamina "stamina" << endl;
    }

    else if(race == dark elf || race == Dark Elf || race == Dark elf || race == dark Elf)
    {
        stamina = 2;
        std::cout<<"you have " stamina "stamina" << endl;
    }

    else if(race == wood elf || race == Wood Elf || race == Wood elf || race == wood Elf)
    {
        stamina = 7;
        std::cout<<"you have " stamina "stamina" << endl;
    }

    else if(race == high elf || race == High Elf || race == High elf || race == high Elf)
    {
        stamina = 3;
        std::cout<<"you have " stamina "stamina" << endl;
    }

	else if(race == imperial || race == Imperial)
	{
		stamina = 9;
		std::cout << "you have " stamina "stamina" << endl;
	}

	else if(race == breton || race == Breton)
	{
		stamina = 5;
		std::cout << "you have " stamina "stamina" << endl;
	}

	else if(race == redguard || race == Redguard)
	{
		stamina = 12;
		std::cout << "you have " stamina "stamina" << endl;
	}

	else if(race == khajiit || race == Khajiit)
	{
		stamina = 7;
		std::cout << "you have " stamina "stamina" << endl;
	}
	else
	{
		std::cout << "please select a listed race" << endl;
	}

    /*
    end setting stamina values
    end character creation
    */

    //begin walking

	do
	{
        std::cout << "What is your race?" << endl;

	}

}


