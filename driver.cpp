#include <iostream>
#include "driver.h"

using namespace std;

//constructor
Driver::Driver(int driver_id, int vehicle_capacity, int ride_id, float driver_rate, string driver_name, string vehicle_type, string notes, bool hasHandicap, bool isAvailable){
	
	this->driver_id = driver_id;
	this->vehicle_capacity = vehicle_capacity;
	this->ride_id = ride_id;
	this->driver_rate = driver_rate;
	this->driver_name = driver_name;
	this->vehicle_type = vehicle_type;
	this->notes = notes;
	this->hasHandicap = hasHandicap;
	this->isAvailable = isAvailable;
	
}

//default constructor

Driver::Driver(){
	
	this->driver_id = 0;
	this->vehicle_capacity = 0;
	this->ride_id = 0;
	this->driver_rate = 0;
	this->driver_name = "Default";
	this->vehicle_type = "Default";
	this->notes = "Default";
	this->hasHandicap = true;
	this->isAvailable = true;
	
}


//setters definition

void Driver::SetDriverId(int id){driver_id = id;}
void Driver::SetVehicleCapacity(int capacity){vehicle_capacity = capacity;}
void Driver::SetDriverRate(float rate){driver_rate = rate;}
void Driver::SetRideId(int id){ride_id = id;}
void Driver::SetDriverName(string name){driver_name = name;}
void Driver::SetHasHandicap(bool hasHandicap){this->hasHandicap = hasHandicap;}
void Driver::SetVehicleType(string type){vehicle_type = type;}
void Driver::SetIsAvailable(bool isAvailable){this->isAvailable = isAvailable;}
void Driver::SetNotes(string note){notes = note;}

//getters definition

int    Driver::GetDriverId(){return driver_id;}
int    Driver::GetVehicleCapacity(){return vehicle_capacity;}
int    Driver::GetRideId(){return ride_id;}
float  Driver::GetDriverRate(){return driver_rate;}
string Driver::GetDriverName(){return driver_name;}
string Driver::GetVehicleType(){return vehicle_type;}
string Driver::GetNotes(){return notes;}
bool   Driver::GetHasHandicap(){return hasHandicap;}
bool   Driver::GetIsAvailable(){return isAvailable;}




