#include <iostream>
using std::cout;

/*
Zadanie - dopisac brakujacy konstruktor(y) i metody tak, by program sie skompilowal, 
nie zmieniajac pozostalego kodu w programie.

Po uzupelnieniu program powinien sie kompilowac i wypisac na wyjsciu:
Pole kola c1 wynosi 3.14
Obwod kola c2 wynosi 15.7
*/

class Circle
{
public:
	float pi = 3.14;
    const float radius;
	Circle(float r = 1) : radius(r){}
	float area(){
			return pi*radius*radius;
		}
	float perimeter(){
			return 2 * 3.14 * radius;
		}
    ~Circle()
    {
        cout << "Destruktor\n";
    }
};

int main()
{	
	Circle c1;
	std::cout << "Pole kola c1 wynosi " << c1.area() << '\n';
	
	Circle c2(2.5);
	std::cout << "Obwod kola c2 wynosi " << c2.perimeter() << '\n';
	
	return 0;
}
