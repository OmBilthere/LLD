
#include <iostream>
#include <string>
using namespace std;

class SportCar {

    private:
    string brand;
    string model;
    bool isEngineOn;
    int currentSpeed;
    int currentGear;
    string typeCompany;

    public:
    
    SportCar(string b , string m ) {
        brand = b ;
        model = m;
        currentSpeed = 0;
        currentGear = 0;
        typeCompany = "MRF";
        isEngineOn= false;
    }

    int isgetSpeed() {
        return currentSpeed;
    }

    string getTyreCompany() {
        return typeCompany;
    }

    void startEngine() {
        isEngineOn= true;
        cout<<"Engine is on"<<endl;
    }
   
   void shiftGear(int gear) {
    if(!isEngineOn){
         cout<<"Turn on Engine";
         return ;
        }
        currentGear = gear;
        cout<<"Gear shifted to "<<gear;

   }

   void accelerate() {
     if(!isEngineOn) {
        cout<<"pls let the Engine on"<<endl;
        return;
     }
     currentSpeed +=20;
     cout<< "Speed is"<<currentSpeed<<" km/h"<<endl;

   }

   void brake(){
    currentSpeed -=20;
    if(currentSpeed <=0) currentSpeed = 0;
    cout<<"currentSpeed is "<<currentSpeed<<endl;
   }
   
   void stopEngine(){
    isEngineOn=false;
    currentGear=0;
    currentSpeed=0;
    cout<<"Engine has stopped"<<endl;
   }

   ~SportCar() {};

};


int main()
{

    SportCar mySportCar = SportCar("Ford", "Mustang");

    mySportCar.startEngine();
    mySportCar.shiftGear(1);
    mySportCar.accelerate();
    mySportCar.shiftGear(2);
    mySportCar.brake();
    mySportCar.stopEngine();

   
    return 0;
}