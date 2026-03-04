#include <iostream>
using namespace std;

class RideSystem
{
protected:
    string passangerName;
    int rideID;
    double baseFare;

public:
    RideSystem(string passangerName, int rideID, double baseFare)
    {
        this->passangerName=passangerName;
        this->rideID=rideID;
        this->baseFare=baseFare;
    }

    virtual void DisplayRideDetails()
    {

    }

    virtual double calculateFare()
    {
        return 0.0;
    }
};

class EconomyRide : public RideSystem
{
private:
    double distanceKm;

public:
    EconomyRide(string passangerName, int rideID, double baseFare, double distanceKm) : RideSystem(passangerName, rideID, baseFare)
    {
        this->distanceKm=distanceKm;
    }

    double calculateFare() override
    {
        return baseFare + (distanceKm * 8);
    }

    void DisplayRideDetails()
    {
        cout<<"Pasenger: "<<passangerName<<endl;
        cout<<"Rider ID: "<<rideID<<endl;
        cout<<"Final Fare: "<<calculateFare()<<endl<<endl;
    }

};

class LuxuryRide : public RideSystem
{
private:
    double distanceKm;
    double serviceCharge;

public:
    LuxuryRide(string passangerName, int rideID, double baseFare,  double distanceKm, double serviceCharge) : RideSystem(passangerName, rideID, baseFare)
    {
        this->distanceKm=distanceKm;
        this->serviceCharge=serviceCharge;
    }

    double calculateFare() override
    {
        return baseFare + (distanceKm * 12) + serviceCharge;
    }

    void DisplayRideDetails() override
    {
        cout<<"Pasenger: "<<passangerName<<endl;
        cout<<"Rider ID: "<<rideID<<endl;
        cout<<"Final Fare: "<<calculateFare()<<endl;
    }

};

int main() 
{
    EconomyRide E1("Tasbeeh", 479, 100, 15);
    E1.DisplayRideDetails();

    LuxuryRide L1("Hassan", 814, 120, 10, 80);
    L1.DisplayRideDetails();
    return 0;
}