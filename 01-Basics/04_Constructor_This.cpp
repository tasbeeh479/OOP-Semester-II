#include <iostream>
using namespace std;

class Vehicle
{
    private:
        string brand;
        string model;
        int year;

    public:    
        Vehicle(string b, string model, int year)
        {
            brand = b;                      // No need to use "this" here since there is no naming conflict
            this->model = model;            //"this" is a pointer to the current object, used to resolve naming conflicts
            this->year = year;              
                                            /*DATA HIDING: It hides the internal representation of the object and only exposes 
                                            a public interface to interact with it. Here, the member variables (brand, model, year) 
                                            are private and cannot be accessed directly from outside the class.*/
        }

        void displayInfo()
        {
            cout << "Brand: " << brand << endl;
            cout << "Model: " << model << endl;
            cout << "Year: " << year << endl;
        }
};

int main() 
{
    Vehicle myCar("Toyota", "Corolla", 2020);
    myCar.displayInfo();
    
    return 0;
}