#include <iostream>
#include "Exercice.h"
#include "Solution1.h"
#include "Solution3.h"

#ifndef AUTOGRADING
#include "StudentConfiguration.h"
#endif

void printSortedWords(const std::vector<std::string>& words, const std::string& setName)
{
	Solution3 solution;
	solution.SetWords(words);
	solution.SortWords();

	std::vector<std::string> sortedWords = solution.GetSortedWords();

	std::cout << "Sorted Words for Set " << setName << ":" << std::endl;
	for (const std::string& word : sortedWords)
	{
		std::cout << word << std::endl;
	}

	std::cout << std::endl;
}

int main(int argc, char** argv)
{
#ifndef AUTOGRADING

	std::cout << "Local test" << std::endl;

	/*------------------------------ !!! Don't touch above !!! ------------------------------*/
	/*------------------------------------ STUDENT MAIN ------------------------------------*/

	// This is the main function for the student

	// You can use this function to test a specific exercice, for example exercice 1 test 1
	// You can test multiple exercices by calling multiple times the function AutograderRunTest
	ExerciceBase::AutograderRunTest(0, 0);
	ExerciceBase::AutograderRunTest(0, 1);

	//EXO 1 
	float convertedValue1 = Solution1::ConvertTemperature(71.97f, TemperatureUnits::KELVIN, TemperatureUnits::CELSIUS);
	std::cout << "Converted value: " << convertedValue1 << std::endl;

	float convertedValue2 = Solution1::ConvertTemperature(71.97f, TemperatureUnits::KELVIN, TemperatureUnits::FAHRENHEIT);
	std::cout << "Converted value: " << convertedValue2 << std::endl;

	float convertedValue3 = Solution1::ConvertTemperature(71.97f, TemperatureUnits::CELSIUS, TemperatureUnits::KELVIN);
	std::cout << "Converted value: " << convertedValue3 << std::endl;

	float convertedValue4 = Solution1::ConvertTemperature(21.56f, TemperatureUnits::CELSIUS, TemperatureUnits::CELSIUS);
	std::cout << "Converted value: " << convertedValue4 << std::endl;

	float convertedValue5 = Solution1::ConvertTemperature(62.02f, TemperatureUnits::FAHRENHEIT, TemperatureUnits::CELSIUS);
	std::cout << "Converted value: " << convertedValue5 << std::endl;

	

	//Exo 3 

	std::vector<std::string> Set1 = { "Hello", "World", "This", "Is", "A", "Test" };
	std::vector<std::string> Set2 = { "prepare", "big", "Baby", "during", "article", "Left", "community", "war", "choice", "ten", "doctor", "main", "trouble", "involve", "main", "part", "area", "agency", "Water", "Raise" };

	// Print sorted words for Set1
	printSortedWords(Set1, "1");

	// Print sorted words for Set2
	printSortedWords(Set2, "2");

	return 0;
	/*------------------------------------ STUDENT MAIN ------------------------------------*/
	/*------------------------------ !!! Don't touch after !!! ------------------------------*/

#else
	// This line is used by the autograder, don't touch it !
	return ExerciceBase::AutograderMain(argc, argv);
#endif
}
