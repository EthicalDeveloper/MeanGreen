#include <iostream>
#include "ride.h"
using namespace std;

// Class Ride() : constructor
// constructor
Ride::Ride(int ride_id, int party_size, string pickup_location, string drop_location, string status, time_t pickup_time, time_t drop_time, bool hasPets, float customer_rating){
	
	this->ride_id = ride_id;
	this->party_size = party_size;
	this->pickup_location = pickup_location;
	this->drop_location = drop_location;
	this->status = status;
	this->pickup_time = pickup_time;
	this->drop_time = drop_time;
	this->hasPets = hasPets;
	this->customer_rating = customer_rating;


}

//Default constructor
Ride::Ride(){
	
	this->ride_id = 0;
	this->party_size = 0;
	this->pickup_location = "Default";
	this->drop_location = "Default";
	this->status = "Default";
	this->pickup_time = 0;
	this->drop_time = 0;
	this->hasPets = true;
	this->customer_rating = 0;
	
	
}

//Class Ride() : setters definition
void Ride::SetRideID(int id){ride_id = id;}
void Ride::SetPickupLocation(string location){pickup_location = location;}
void Ride::SetDropLocation(string location){drop_location = location;}
void Ride::SetPickupTime(time_t time){pickup_time = time;}
void Ride::SetDropTime(time_t time){drop_time = time;}
void Ride::SetPartySize(int size){party_size = size;}
void Ride::SetHasPets(bool hasPets){this->hasPets = hasPets;}
void Ride::SetStatus(string status){this->status = status;}
void Ride::SetCustomerRating(float rating){customer_rating = rating;}

// Class Ride() : getters definition

int    Ride::GetRideID(){return ride_id;}
int    Ride::GetPartySize(){return party_size;}
string Ride::GetPickupLocation(){return pickup_location;}
string Ride::GetDropLocation(){return drop_location;}
string Ride::GetStatus(){return status;}
time_t Ride::GetPickupTime(){return pickup_time;}
time_t Ride::GetDropTime(){return drop_time;}
bool   Ride::GetHasPets(){return hasPets;}
float  Ride::GetCustomerRating(){return customer_rating;}


