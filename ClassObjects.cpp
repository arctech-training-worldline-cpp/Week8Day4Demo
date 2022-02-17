#include <iostream>
#include <fstream>
using namespace	std;

class Contestant{
	public:
	string name;
	int age, rating;
	
		Contestant(){}
		Contestant(string, int, int);
		void WriteTofile(void);
		void HighestRatedCantestant(void);
};
Contestant :: Contestant(string nameVal, int ageVal, int ratingVal) 
{
	name = nameVal;
	age = ageVal;
	rating = ratingVal;
}
void Contestant :: WriteTofile()
{
	ofstream fileStream;
	fileStream.open("Sample.txt");

	Contestant obj("John", 30, 4);
	Contestant obj1("Ahmed", 31, 3);
	Contestant obj2("Ajay", 32, 5);

	fileStream.write((char *)&obj, sizeof(obj));
	fileStream.write((char *)&obj1, sizeof(obj1));
	fileStream.write((char *)&obj2, sizeof(obj2));

	fileStream.close();
}
void Contestant :: HighestRatedCantestant()
{
	ifstream fileStream;
	fileStream.open("Sample.txt");

	Contestant obj;
	fileStream.read((char*) & obj, sizeof(obj));
	int max = 0;
	while (!fileStream.eof())
	{
		if(obj.rating > max)
			max = obj.rating;
		
		fileStream.read((char*) & obj, sizeof(obj));
	}
	cout << "Highest Rting" << max << endl;
 	fileStream.close();
}

int main()
{
	Contestant obj;

	obj.WriteTofile();
	obj.HighestRatedCantestant();

	return 0;
}