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