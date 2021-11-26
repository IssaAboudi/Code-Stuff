#include <iostream>
#include <climits>
#include <cmath>
#include <fstream>
#include <string>

//Good Constants to know
const double G_CONST = 6.673e-11; //Gravitational Constant
const double SECONDS_IN_YEAR = 31536000;
const double MASS_OF_SUN = 1.989e30;
const double PI = 3.14159;

namespace Issa {
	void clearCIN(void);
	//Description:     Runs the cin.clear() and cin.ignore() methods to clear the cin buffer
	//Input:           None
	//Output:          None
	//Example Use:     clearCIN();

	int inputInt(int minValue, int maxValue, std::string nameOfValue, int userInput);

	float inputFloat(float minValue, float maxValue, std::string nameOfValue, float userInput);

	double inputDouble(double minValue, double maxValue, std::string nameOfValue, double userInput);

	std::string inputString(int minLength, int maxLength, std::string nameOfValue, std::string userInput);

	bool didTheyAnswerYes(void);

	double calculateVelocity(double distance);

	double calculatePeriod(double planetDistance);

	void makeUpperCase(char source[]);

	void makeLowerCase(char source[]);

	void readToCommas(std::string fileName);

	char askOverWrite(void);

	bool verifyAction(string userPrompt);

	string getRandomString(int Min, int Max);

	double getRandomDouble(int Min, int Max, int decimalPlaces);

	int getRandomInt(int Min, int Max);

	string centerString(string stringToCenter, int toWidth);

	void swap(int& x, int& y);

	void bubbleSort(int anArray[]);

	void selectSort(int anArray[]);

	//Overloaded Operators
	void operator++(int);
	void operator--(int);

	void operator=(const InventoryItem&);
	bool operator<(const InventoryItem& rval);
	bool operator>(const InventoryItem& rval);
	bool operator==(const InventoryItem& rval);
	bool operator<=(const InventoryItem& rval);
	bool operator>=(const InventoryItem& rval);


	friend std::ostream& operator<<(std::ostream& output, const InventoryItem& rval);

	float operator[](int index);

    std::vector<std::string> breakString(std::string inString, char delim);
}