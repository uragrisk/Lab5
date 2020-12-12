# include <vector>
class MusicFestival
{
private:
	int budget;
	int current_budget;
	vector <Musician> Artists;
public:
	MusicFestival(vector <Musician> Artists, int budget);
	void check();
	void addMusician(Musician a);
	void removeMusician(Musician a);
	void Print();
};