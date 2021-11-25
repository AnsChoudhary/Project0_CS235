#include <cstdlib>
#include "Motorcycle.h"
#include <iostream>
using namespace std;


int main() {
   Motorcycle o1(0);
    cout<<o1.getBikeType()<<endl;
    cout<<o1.getIntensity()<<endl;//before accelerate
    cout<<o1.getSpeed()<<endl;//before accelerate
    o1.accelerate();
    cout<<o1.getIntensity()<<endl;
    cout<<o1.getSpeed()<<endl;
    cout<<o1.getDirection()<<endl;//before the turn
    o1.turn(40);
    cout<<o1.getDirection()<<endl;
    cout<<o1.ride(1)<<endl;
    cout<<o1.getDistanceTraveled()<<"miles"<<endl;
    cout<<o1.ride(8)<<endl;
    cout<<o1.getDistanceTraveled()<<endl;
    cout<<o1.ride(0)<<endl;
    cout<<o1.getDistanceTraveled()<<endl;
    cout<<o1.ride(-69)<<endl;
    cout<<o1.getDistanceTraveled();




    return 0;
}
