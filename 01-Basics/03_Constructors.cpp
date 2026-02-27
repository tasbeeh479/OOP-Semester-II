#include <iostream>
using namespace std;

class Car
{
public:
	string name;            //data members
	string brand;
	string colour;
	double price;

    //Car() {}       //member function (default constructor)

    Car(string n, string b, string c, double p)     //member function (constructor) with parameters (parameterized constructor)
    {
        name=n;
        brand=b;
        colour=c;
        price=p;
    }

    /*ENCAPSULATION: It is the process of wrapping data members and member functions 
    into a single unit called class.*/
};

void print(Car c)                           
{
	cout<<" "<<c.name<<" "<<c.brand<<" "<<c.colour<<" "<<c.price<<endl;

}

void change(Car &c)                          //pass by reference (shallow copy)
{                                            //Means that it's alias of the original object
	c.price=1000000.00;         
    c.brand="Mercedes";
    c.colour="White";
    c.name="S-Class";
}

	int main()
{
	Car c1("BMW", "X5", "Black", 500000.00);

    // Car c2;
    // c2.name="Audi";
    // c2.brand="Q7";
    // c2.colour="Red";
    // c2.price=600000.00;     //if you use this method, you have to use default constructor, otherwise it will give an error because there is no default constructor in the class.

	print(c1);
	change(c1);
	print(c1);

    // print(c2);
	// change(c2);
	// print(c2);

	return 0;
}