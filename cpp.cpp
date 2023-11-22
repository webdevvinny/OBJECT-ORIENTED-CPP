#include <iostream>

using namespace std;

class vehicle{
          public:

          void fuelAmount(){
                    cout << "This vehicle uses 400 liters of fuel \n";
          }

          void capacity(){
                    cout << "This vechicle carries a certain amount of people \n";
          }

           void applyBrakes();
};


class Bus: public vehicle{
          public:
                    string bus = "Bus";

          public: 
                    void busCall(){
                              cout << "This is a bus!!\n";
                    }

};

class newCar1: public Bus{
          public:
                    void newCar(){
                              cout << "This car has inherited properties!!!\n";
                    }
};

class Car: public vehicle {

};

class Truck: public vehicle{

};

 void vehicle::applyBrakes(){
                    cout << "You have stopped the vehicle from moving!!\n";
          }

int main () {

          Bus bus1;
          newCar1 newCar2;

          bus1.applyBrakes();
          newCar2.applyBrakes();
          newCar2.capacity();

          cout << newCar2.bus;

          return 0;
}