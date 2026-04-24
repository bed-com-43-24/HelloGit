#include "Person.h"
#include <iostream>

// Default constructor
Person::Person()
    : mWeight(0.0f), mFirstName(""), mAge(0)
{
    std::cout << "Default constructor called" << std::endl;
}

// Constructor with weight parameter
Person::Person(float newWeight)
    : mWeight(newWeight), mFirstName(""), mAge(0)
{
    std::cout << "Parameterized constructor called" << std::endl;
}

// Destructor
Person::~Person()
{
    std::cout << "Destructor called" << std::endl;
}

// Overloaded + operator
float Person::operator+(const Person& otherPerson)
{
    return this->mWeight + otherPerson.mWeight;
}
