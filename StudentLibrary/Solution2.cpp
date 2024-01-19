#include "Solution2.h"
#include <fstream>
#include <iostream>
#include <ostream>

// Don't forget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_2

float Solution2::GetBalance(const std::string& accountName)
{
    std::string filePath = "x64/Debug/BankAccount/" + accountName + ".txt";

    std::ifstream file(filePath);

    if (!file.is_open())
    {
        throw std::runtime_error("File not found: " + filePath);
    }

    float balance = 0.0f;
    char operation;
    float amount;

    while (file >> operation >> amount)
    {
        if (operation == '+')
        {
            balance += amount;
        }
        else if (operation == '-')
        {
            balance -= amount;
        }
        else
        {
            throw std::invalid_argument("Invalid operation in file: " + filePath);
        }
    }
    file.close();

    return balance;
}

#endif
