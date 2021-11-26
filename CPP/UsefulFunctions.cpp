/*
 * UsefulFunctions.cpp
 *
 *  Created on: Oct 6, 2020
 *
 *      Author: Matthew Issa
 */
#include "UsefulFunctions.h"

void Issa::clearCIN(void) {
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
}


int Issa::inputInt(int minValue, int maxValue, std::string nameOfValue, int userInput) {
	while (true) {
		std::cout << "Please enter the number of " << nameOfValue << " between " << minValue << " and " << maxValue << std::endl;
		std::cin >> userInput;
		Issa::clearCIN();

		if (userInput < minValue) {
			std::cout << "Error: your input is not between " << minValue << " and " << maxValue << std::endl;
		}
		else if (userInput > maxValue) {
			std::cout << "Error: your input is not between " << minValue << " and " << maxValue << std::endl;
		}
		else {
			return userInput;
		}
	}
}

float Issa::inputFloat(float minValue, float maxValue, std::string nameOfValue, float userInput) {
	while (true) {
		std::cout << "Please enter the number of " << nameOfValue << " between " << minValue << " and " << maxValue << std::endl;
		std::cin >> userInput;
		Issa::clearCIN();

		if (userInput < minValue) {
			std::cout << "Error: your input is not between " << minValue << " and " << maxValue << std::endl;
		}
		else if (userInput > maxValue) {
			std::cout << "Error: your input is not between " << minValue << " and " << maxValue << std::endl;
		}
		else {
			return userInput;
		}
	}
}

double Issa::inputDouble(double minValue, double maxValue, std::string nameOfValue, double userInput) {

	while (true) {
		std::cout << "Please enter the number of " << nameOfValue << " between " << minValue << " and " << maxValue << std::endl;
		std::cin >> userInput;
		Issa::clearCIN();

		if (userInput < minValue) {
			std::cout << "Error: your input is not between " << minValue << " and " << maxValue << std::endl;
		}
		else if (userInput > maxValue) {
			std::cout << "Error: your input is not between " << minValue << " and " << maxValue << std::endl;
		}
		else {
			return userInput;
		}
	}
}

std::string Issa::inputString(int minLength, int maxLength, std::string nameOfValue, std::string userInput) {
	while (true) {
		std::cout << "Please enter " << nameOfValue << " (Must be between " << minLength << " and " << maxLength << " letters)" << std::endl;
		std::getline(std::cin, userInput);

		if (userInput.size() < minLength) {
			std::cout << "Error: your input is not between " << minLength << " and " << maxLength << std::endl;
		}
		else if (userInput.size() > maxLength) {
			std::cout << "Error: your input is not between " << minLength << " and " << maxLength << std::endl;
		}
		else {
			return userInput;
		}
	}
}

bool Issa::didTheyAnswerYes(void) {
	std::string userInput;
	std::cout << "Answer Yes or No" << std::endl;
	std::getline(std::cin, userInput);
	if (userInput == "Yes" || userInput == "yes") {
		return true;
	}
	else {
		return false;
	}
}

double Issa::calculateVelocity(double distance) {
	double orbitSpeed = 0.0;

	orbitSpeed = sqrt((G_CONST * MASS_OF_SUN) / distance);
	return orbitSpeed;
}

double Issa::calculatePeriod(double planetDistance) {


	double orbitSpeed = calculateVelocity(planetDistance);
	double orbitPeriod = ((2 * PI * planetDistance) / orbitSpeed) / SECONDS_IN_YEAR;
	return orbitPeriod;
}

void Issa::makeUpperCase(char source[]) {
	int i = 0;
	while (source[i] != '\0') {
		source[i] = toupper(source[i]);
		i++;
	}
}
void Issa::makeLowerCase(char source[]) {
	int i = 0;
	while (source[i] != '\0') {
		source[i] = tolower(source[i]);
		i++;
	}
}

void Issa::readToCommas(std::string fileName) {
	std::string valueString;
	char charRead = ' ';
	std::ifstream inputFile;
	inputFile.open(fileName);

	while (!inputFile.eof()) {
		valueString = " ";
		while (charRead != ',' && !inputFile.eof()) {
			charRead = inputFile.get();
			if (charRead != ',' && static_cast<int>(charRead) != -1 && charRead != ' ') {
				valueString += charRead;
			}
			else {}
		}
		std::cout << valueString << std::endl;
		charRead = ' ';
	}
}
string Issa::getRandomString(int Min, int Max) {
	string tempString;

	int size = getRandomInt(Min, Max);
	for (int ctr = 0; ctr < size; ctr++) {
		char tempChar = getRandomInt(97, 122);
		tempString += tempChar;
	}//for

	return tempString;
}//getRandomString


//Display a prompt asking the user if they want to
//sort the vector ascending or descening.
bool Issa::verifyAction(string userPrompt) {
	char userInput;
	bool returnValue = false;

	while (true) {
		cout << "\n";
		cout << userPrompt << "\n";
		cout << "<Y>es, <N>o ==> ";
		cin >> userInput;
		if (toupper(userInput) == 'Y') {
			returnValue = true;
			break;
		}//if
		else if (toupper(userInput) == 'N') {
			returnValue = false;
			break;
		}//else if
		else {
			cout << "Invalid selection, please try again\n";
		}//else
		clearCIN();
	}//while

	clearCIN();
	return returnValue;
}//verifyAction

char Issa::askOverWrite(void) {
	char userChoice;

	cout << "You already have data loaded into the system\n";
	cout << "Do you want to (O)verwrite, (A)ppend or (Q)uit? ";
	cin >> userChoice;
	switch (toupper(userChoice)) {
	case 'O':
	{
		break;
	}//case O
	case 'A':
		break;
	case 'Q':
	default:
	{
		cout << "Operation Aborted\n";
		return 'Q';
	}//default
	}//switch

	return toupper(userChoice);

}//askOverwrite

double Issa::getRandomDouble(int Min, int Max, int decimalPlaces) {
	double returnNum;
	int tempInt;
	double tempDouble;

	while (true) {
		returnNum = ((double)rand() / RAND_MAX);
		tempInt = (returnNum * Max) * (pow(10, decimalPlaces));
		tempDouble = static_cast<double>(tempInt) / (pow(10, decimalPlaces));
		if (tempDouble >= Min)
			break;
		else {}
	}//while
	return tempDouble;
}//getRandomDouble

int Issa::getRandomInt(int Min, int Max) {
	int tempInt = 0;

	while (true) {
		tempInt = rand() % Max;
		if (tempInt >= Min)
			break;
		else {}
	}//while

	return tempInt;
}//getRandomInt

string Issa::centerString(string stringToCenter, int toWidth) {
	string outputString;
	int l = 0;
	int pos = 0;

	l = static_cast<int>(stringToCenter.length());
	pos = (toWidth - l) / 2;
	for (int i = 0; i < pos; i++) {
		outputString = outputString + " ";
	}//for
	outputString = outputString + stringToCenter;
	return outputString;
}//centerString

void Issa::swap(int& x, int& y) { //swap function
	int tempValue = x;
	x = y;
	y = tempValue;
}

void Issa::bubbleSort(int anArray[]) { //classical bubble sort
	bool swapped = true; // flag variable
	while (swapped == true) {
		swapped = false;
		for (int i = 0; i < ARRAYSIZE - 1; i++) {
			if (anArray[i] > anArray[i + 1]) {
				swapped = true;
				swap(anArray[i], anArray[i + 1]); // call swap function
			}
			else {}
		}
	}
}

void Issa::selectSort(int anArray[]) { //select sort
	//pointer1 loop (i)
	for (int i = 0; i < ARRAYSIZE - 1; i++) {
		//pointer2 loop (j)
		for (int j = i + 1; j < ARRAYSIZE; j++) {
			if (anArray[i] > anArray[j]) {
				swap(anArray[i], anArray[j]);
			}
			else {}
		}
	}
}

bool intLinearSearch(std::vector<int>& aVector, int search) {
	int position = -1;
	bool found = false;
	while (!found) {
		for (unsigned int i = 0; i < aVector.size(); i++) {
			if (aVector[i] == search) {
				found = true;
				position = i;
			}//if
			i++;
		}//for
	}//while
	return found;
}//intLinearSearch

void Issa::operator++(int) {
	this->currentInventory++;
}

void Issa::operator--(int) {
	this->currentInventory--;
}

void Issa::operator=(const InventoryItem& rightValue) {
	this->currentInventory = rightValue.currentInventory;
	this->itemCost = rightValue.itemCost;
}

bool Issa::operator<(const InventoryItem& rval) {
	bool returnValue;

	if (this->currentInventory < rval.currentInventory) {
		returnValue = true;
	}
	else {
		returnValue = false;
	}
	return returnValue;
}
bool Issa::operator>(const InventoryItem& rval) {
	return (this->currentInventory > rval.currentInventory) ? true : false;
}

bool Issa::operator==(const InventoryItem& rval) {
	return (this->currentInventory == rval.currentInventory) ? true : false;
}

bool Issa::operator<=(const InventoryItem& rval) {
	return (this->currentInventory <= rval.currentInventory) ? true : false;
}

bool Issa::operator>=(const InventoryItem& rval) {
	return (this->currentInventory >= rval.currentInventory) ? true : false;
}

std::ostream& operator<<(std::ostream& lval, const InventoryItem& rval) {
	lval << rval.itemName << ", " << rval.currentInventory << ", " << rval.itemCost << ", " << rval.itemPrice;
}

float Issa::operator[](int index) {
	if (index >= 0 and index <= 12) {
		return this->priceHistory[index];
	}
	else {
		return -999;
	}
}

std::vector<std::string> Issa::breakString(std::string inString, char delim){
    //This function is about splitting a string into smaller strings using a specified delimiter.

    std::vector<std::string> collection; //holds all of the broken up strings
    std::string part; //temporarily holds each of the broken strings to add to collection

    //holds location of things in the string (start, end, delim etc)
    unsigned long startPos = 0; //references first character of the string
    unsigned long delimPos = 0; //references first delimiter
    unsigned long endPos = inString.size(); //references last character of string

    //initializes the positions
    if(inString.find(delim) == std::string::npos) { //if not found in string
        delimPos = inString.size(); //store pos last character in string
    } else {
        delimPos = inString.find(delim); //store pos where delim found in string
    }

    //Loop goes through the bigger string and breaks down each part of the string according to the delimiter
    do {
        if (startPos == endPos) { //if reached the end of the string
            break; //break out of the loop
        }
        part = inString.substr(startPos, delimPos - startPos); //stores part (leading up to the delim) in string
        if (delimPos + 1 < endPos){
            delimPos++; //moving one character past the delim in the string
        }
        startPos = delimPos; //stores next part after delim (leading up to next delim)
        if(inString.find(delim, delimPos) == std::string::npos) { //if not found in string
            delimPos = inString.size(); //store pos last character in string
        } else {
            delimPos = inString.find(delim, delimPos); //store pos where delim found in string
        }

        collection.push_back(part); //add part to the vector
    } while(delimPos != std::string::npos);


    return collection;
}

