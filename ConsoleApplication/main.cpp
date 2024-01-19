#include <iostream>
#include "Exercice.h"
#include "Solution1.h"

#ifndef AUTOGRADING
#include "StudentConfiguration.h"
#endif

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

	return 0;

	/*------------------------------------ STUDENT MAIN ------------------------------------*/
	/*------------------------------ !!! Don't touch after !!! ------------------------------*/

#else
	// This line is used by the autograder, don't touch it !
	return ExerciceBase::AutograderMain(argc, argv);
#endif
}
