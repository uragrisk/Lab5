# include <iostream>
# include <string>
# include <vector>

using namespace std;


class Musician
{

private:
	string name;
	int fee;
	int age;
	string country;
	bool band;

protected:
public:
	Musician() {}
	Musician(string name, int fee, int age, string country, bool band);
	~Musician(){}
	string getName();
	int getFee();
	int getAge();
	string getCountry();
	bool getBand();
};

