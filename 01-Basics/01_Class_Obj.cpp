#include <iostream>
using namespace std;

class Car
{
public:
	string name;
	string brand;
	string colour;
	double price;
};

// void print(Car c)		//print through function(call by value)
// {
// 	cout<<" "<<c.name<<" "<<c.brand<<" "<<c.colour<<" "<<c.price<<endl;

// }

// void change(Car &c)		//change value through function(call by reference)
// {
// 	c.price=1000000.00;
// }

	int main()
{
	Car c1;
	c1.name="TOYOTA";
	c1.brand="COROLLA";
	c1.colour="BLUE";
	c1.price=2343999.99;

	cout<<" "<<c1.name<<" "<<c1.brand<<" "<<c1.colour<<" "<<c1.price<<endl;

	// print(c1);
	// change(c1);				//passing objects to specific function
	// print(c1);

	return 0;
}