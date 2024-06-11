#include "Person.h"

Person :: Person(string newFirstName, float newWeight)
{
    nFirstName = newFirstName;
    nWeight = newWeight;
}

Person :: ~Person() {}

float Person :: operator + (const Person& otherPerson) {

	return this->nWeight + otherPerson.nWeight;
}

bool Person :: operator == (const Person& otherPerson) const {

	return this->nFirstName == otherPerson.nFirstName;
}

bool Person :: operator != (const Person& otherPerson) const {

	return !(*this == otherPerson);
}

bool Person :: operator < (const Person& otherPerson) const {

	return this-> nAge < otherPerson.nAge;
}

bool Person :: operator > (const Person& otherPerson) const {

	return otherPerson < *this;
}



