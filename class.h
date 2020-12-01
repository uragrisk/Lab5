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
	Musician(string name, int fee, int age, string country, bool band)
	{
		this->name = name;
		this->fee =fee;
		this->age = age;
		this->country = country;
		this->band = band;
	}
	~Musician(){}
	string getName()
	{ 
		return name;
	}
	int getFee()
	{
		return fee;
	}
	int getAge()
	{
		return 0;
	}
	string getCountry()
	{
		return country;
	}
	bool getBand() 
	{
		return band;
	}
};

class MusicFestival
{

public:
	MusicFestival(vector <Musician> Artists, int budget)
	{
		this->Artists = Artists;
		this->budget = budget;
		for (int i = 0; i < size(this->Artists); i++)
		{
			this->current_budget += this->Artists[i].getFee();
		}
	}
	void check() 
	{
		
		if (current_budget < budget) {
			for (int i = 0; i < (size(this->Artists)); i++)
			{
				
				cout << "Artist" <<" "<< i + 1 << "\t" << this->Artists[i].getName() << endl;
			}
		}
		else
		{
			Artists.clear();
		}
	}


	void addMusician(Musician a) {
		if (a.getFee() + current_budget < budget) {
			Artists.push_back(a);
			current_budget = current_budget + a.getFee();
			cout << "Artist " << a.getName() << " has been succesfully added to the list." << endl;
		}
		else {
			cout << "We can not afford this artist, but we still have " << budget - current_budget << " dollars." << endl;
		}
	}
	void removeMusician(Musician a) {
		Artists.pop_back();
		cout << "Artist " << a.getName() << " has been removed from the list." << endl;
	}

	void Print()
	{
		for (int i = 0; i < (size(this->Artists)); i++)
		{
			cout << "Musician #" << i + 1 << " is " << this->Artists[i].getName() << endl;
		}

	}
	
private:
	
	int budget;
	int current_budget;
	vector <Musician> Artists;

	


	 

protected:
};