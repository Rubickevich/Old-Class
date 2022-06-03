#include <iostream>
class Competitor
{
	char lastName[40];
	bool gender; //1 - male, 0 - female
	int medalCount;
public:
	//setters
	void SetLastName(char* lastName)
	{
		strcpy_s(this->lastName,40, lastName);
	}
	void SetGender(bool gender) { this->gender = gender; }
	void SetMedalCount(int medalCount) { this->medalCount = medalCount; }
	//getters
	char* GetLastName()
	{
		return lastName;
	}
	bool GetGender() { return gender; }
	int GetMedalCount() { return medalCount; }
};
int main()
{
	//task 4 - creating object and pointer to object
	Competitor specialCompetitor; 
	Competitor* ptr = &specialCompetitor;
	//end of task 4
	Competitor competitors[3];
	std::cout << "Please fill data about the competitors" << std::endl;
	char lastName[40];
	int medalCount;
	bool gender;
	for(int i = 0; i < 3; i++)
	{
		std::cout << "Competitor #" << i + 1 << std::endl;
		std::cout << "Write lastname: ";
		std::cin >> lastName;
		competitors[i].SetLastName(lastName);
		std::cout << "Write medal count: ";
		std::cin >> medalCount;
		competitors[i].SetMedalCount(medalCount);
		std::cout << "Write gender (1 - male, 0 - female): ";
		std::cin >> gender;
		competitors[i].SetGender(gender);
	}
	std::cout << "Enter last name of a competitor to seek for: ";
	std::cin >> lastName;
	for (int i = 0; i < 3; i++)
	{
		if (strcmp(competitors[i].GetLastName(),lastName) == 0)
			std::cout << "Found a match! " << (competitors[i].GetGender() ? "Male" : "Female") << " competitor with " << competitors[i].GetMedalCount() << " medals";
	}
}