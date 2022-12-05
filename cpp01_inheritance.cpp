#include <iostream>

using std::string; 
using std::cout;

/*
    Dopisz implementacje klasy Person. 
    Pole login ma byc generowane automatycznie: 1. litera imienia + nazwisko, np. jkowalski23

    Nastepnie stworz klase Student, ktora dziedziczy z klasy Person i dodatkowo posiada pola: 
    srednia ocen typu double oraz boolean z informacja o tym, czy ma stypendium (w przypadku sredniej > 4.5).
    Klasa Student ma wlasna implementacje metody print() oraz metode do aktualizacji sredniej.

    Dopisz funkcje main() i przetestuj utworzone klasy.
*/

class Person
{
    string name;
    string surname;
    string login;
    int age;
public:
    Person(string, string, int)
    {
    	this->name = name;
    	this->surname = surname;
    	this->login = name[0] + surname;
    	this->age = age;
    	
    	
		}
    string getName(){return name;};
    string getSurname(){return surname};
    int getAge() {return age};
    //void setName() {};
    //void setsurname();
    //void setAge();
    void print();
};

class Student : public Person
{
	double mean;
	bool schoolarship;
public:
	Student(string name, string surname, int age, double mean)
	:Person(name, surname, age,)
	{
		this->mean = mean;
		if(mean>=4.5)
		{
			this->schoolarship = true;
		}else
		{
			this->schoolarship = flase;
		}
	}
};

int main()
{
	
	return 0;
}
