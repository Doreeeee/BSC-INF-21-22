#pragma once
#include <string>

using namespace std;

class Person 
{
    public:
    Person();
    Person(string newFirstName, float newWeight);

    ~Person();
    float operator + (const Person& otherPerson);
    
    bool operator == (const Person& otherPerson) const;
    bool operator != (const Person& otherPerson) const;

    bool operator < (const Person& otherPerson) const;
    bool operator > (const Person& otherPerson) const;

    private:
    float nWeight;
    string nFirstName;
    int nAge;
};