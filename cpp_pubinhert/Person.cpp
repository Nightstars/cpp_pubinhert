#include "Person.h"
#include <iostream>
using namespace std;
Person::Person()
{
	cout << "Person()" << endl;
}

Person::~Person()
{
	cout << "~Person()" << endl;
}

void Person::eat()
{
	m_strName = "Smith";
	m_iAge = 20;
	cout << "eat()" << endl;
}