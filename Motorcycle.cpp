//ANS CHOUDHARY
//PROJECT 0
//ANS.CHOUDHARY35@MYHUNTER.CUNY.EDU
#include "Motorcycle.h"
#include <cstdlib>
#include <iostream>
using namespace std;

Motorcycle::Motorcycle(){
    curr_speed_=0;
    curr_direction_=0;
    distance_traveled_=0;
    curr_acceleration_=bike_details::NONE; // the number for none will always be 0 same for high being 188 etc so when using those "constants" just use the name made in enum
    brand_=bike_details::bike_brand(rand()%4);


}
Motorcycle::Motorcycle(int kind_of_bike) : Motorcycle(){

    brand_=bike_details::bike_brand(kind_of_bike);
    curr_speed_;
    curr_direction_;
    distance_traveled_;
    curr_acceleration_;
    //cout<<"the bike is "<<getBikeType();
}

string Motorcycle::getDirection(){
    string direction;
    if (curr_direction_==90){
        direction = "North";
    }
    else if (curr_direction_>0 &&curr_direction_<90){
        direction = "Northeast";
    }
    else if (curr_direction_==0 ){
        direction = "East";
    }
    else if (curr_direction_>270 && curr_direction_<360){
        direction ="Southeast";
    }
    else if (curr_direction_==270){
        direction = "South";
    }
    else if (curr_direction_>180 &&curr_direction_<270){
        direction = "Southwest";
    }
    else if (curr_direction_==180){
        direction ="West";
    }
    else if (curr_direction_==360){
        direction="Out of bounds";
    }
    else  {
        direction = "Northwest";
    }
    return direction;
}

string Motorcycle::getBikeType(){
    string name;
    if (brand_==bike_details::YAMAHA){
        name= "YAMAHA";               //yamaha is always going to be 0, so make yamaha to 0 in enum
    }
    else if (brand_==bike_details::DUCATI){ // ducatti is the number (1)
        name= "DUCATI";
    }
    else if (brand_==bike_details::HARLEY_DAVIDSON){
        name= "HARLEY_DAVIDSON";
    }
    else if (brand_==bike_details::KAWASAKI){
        name=  "KAWASAKI";
    }
    return name;
}
float Motorcycle::getSpeed(){
    return curr_speed_;
}
float Motorcycle::getDistanceTraveled(){
    return distance_traveled_;
}
int  Motorcycle::getIntensity(){
    return curr_acceleration_;
}
void Motorcycle::turn(float degrees){
    if (degrees>360){
        curr_direction_=degrees-360;
    }
    else if (degrees < -360){
        curr_direction_=degrees +360;
    }
    else {
        curr_direction_= degrees+curr_direction_;
    }
}
void Motorcycle::updateSpeed(){
    curr_speed_= ((curr_acceleration_/8)+(brand_ *17.64));
}

void Motorcycle::accelerate(){
    if  (curr_acceleration_ == bike_details::HIGH){
        return;
    }
    else if (curr_acceleration_==bike_details::NONE){
        curr_acceleration_=bike_details::LOW;
    }
    else if (curr_acceleration_==bike_details::LOW){
        curr_acceleration_=bike_details::MEDIUM;
    }
    else {
        curr_acceleration_=bike_details::HIGH;
    }
    updateSpeed();
}
void Motorcycle::brake(){
    if  (curr_acceleration_ == bike_details::HIGH){
        curr_acceleration_=bike_details::MEDIUM;
    }
    else if (curr_acceleration_==bike_details::MEDIUM){
        curr_acceleration_=bike_details::LOW;
    }
    else if (curr_acceleration_==bike_details::LOW){
        curr_acceleration_=bike_details::NONE;
    }
    else {
        return;
    }
    updateSpeed();

}
float Motorcycle::ride(float duration) {
    int dist=curr_speed_*duration;

    if (duration < 0 || duration == 0) {
        distance_traveled_;
    }
     else {
        distance_traveled_+=curr_speed_*duration;
     }

     if (dist<0){
         dist=0;
     }
    return dist;
}




