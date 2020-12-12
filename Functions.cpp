#include "class.h"
#include "MusicFestival.h"

Musician::Musician(string name, int fee, int age, string country, bool band)
{
	this->name = name;
	this->fee = fee;
	this->age = age;
	this->country = country;
	this->band = band;
}
string Musician::getName()
{
	return name;
}
int Musician::getFee()
{
	return fee;
}
int Musician::getAge()
{
	return 0;
}
string Musician::getCountry()
{
	return country;
}
bool Musician::getBand()
{
	return band;
}
MusicFestival::MusicFestival(vector <Musician> Artists, int budget)
{
	this->Artists = Artists;
	this->budget = budget;
	for (int i = 0; i < size(this->Artists); i++)
	{
		this->current_budget += this->Artists[i].getFee();
	}
}
void MusicFestival::check()
{

	if (current_budget < budget) {
		for (int i = 0; i < (size(this->Artists)); i++)
		{

			cout << "Artist" << " " << i + 1 << "\t" << this->Artists[i].getName() << endl;
		}
	}
	else
	{
		Artists.clear();
	}
}
void MusicFestival::addMusician(Musician a) {
	if (a.getFee() + current_budget < budget) {
		Artists.push_back(a);
		current_budget = current_budget + a.getFee();
		cout << "Artist " << a.getName() << " has been succesfully added to the list." << endl;
	}
	else {
		cout << "We can not afford this artist, but we still have " << budget - current_budget << " dollars." << endl;
	}
}
void MusicFestival::removeMusician(Musician a) {
	Artists.pop_back();
	cout << "Artist " << a.getName() << " has been removed from the list." << endl;
}
void MusicFestival::Print()
{
	for (int i = 0; i < (size(this->Artists)); i++)
	{
		cout << "Musician #" << i + 1 << " is " << this->Artists[i].getName() << endl;
	}
}
