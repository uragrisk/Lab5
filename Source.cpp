# include "class.h"

int main()
{
	Musician first("Imagine Dragons",100000, 8, "USA", 1);
	Musician second("Drake", 150000, 34, "Canada", 0);
	Musician third("Ariana Grande", 300000, 27, "USA", 0);
	Musician fourth("Justin Bieber", 75000, 26, "Canada", 0);
	Musician fiveth("Eminem", 130000, 48, "Canada", 0);
	Musician sixth("One Direction", 150000, 10, "UK", 1);
	Musician seventh("Okean Elzy", 150000, 26, "Ukrain", 1);
	vector <Musician>arr(7);
	arr[0] = first;
	arr[1] = second;
	arr[2] = third;
	arr[3] = fourth;
	arr[4] = fiveth;
	arr[5] = sixth;
	arr[6] = seventh;

	MusicFestival one(arr, 10000000);
	one.check();

	return 0;
}
