#include <iostream>
#include "passenger.h"
using namespace std;



// Class Passenger(): constructors
Passenger::Passenger(int passenger_id, int ride_id, float passenger_rating, string passenger_name, string payment_type, bool isHandicapped, bool hasPets){
	
	this->passenger_id = passenger_id;
	this->ride_id = ride_id;
	this->passenger_rating = passenger_rating;
	this->passenger_name = passenger_name;
	this->payment_type = payment_type;
	this->isHandicapped = isHandicapped;
	this->hasPets = hasPets;
	
	
	
}

// Class Passenger(): default constructor
Passenger::Passenger(){
	
	this->passenger_id = 0;
	this->ride_id = 0;
	this->passenger_rating = 0;
	this->passenger_name = "Default";
	this->payment_type = "Default";
	this->isHandicapped = true;
	this->hasPets = true;
	
	
}

// Class Passenger(): Setters

void Passenger::SetPassengerId(int id){passenger_id = id;}
void Passenger::SetRideId(int id){ride_id = id;}
void Passenger::SetPassengerRating(float rating){passenger_rating = rating;}
void Passenger::SetPassengerName(string name){passenger_name = name;}
void Passenger::SetPaymentType(string payment){payment_type = payment;}
void Passenger::SetIsHandicapped(bool isHandicapped){this->isHandicapped = isHandicapped;}
void Passenger::SetHasPets(bool hasPets){this->hasPets = hasPets;}




// Class Passenger(): Getters

int    Passenger::GetPassengerId(){return passenger_id;}
int    Passenger::GetRideId(){return ride_id;}
float  Passenger::GetPassengerRating(){return passenger_rating;}
string Passenger::GetPassengerName(){return passenger_name;}
string Passenger::GetPaymentType(){return payment_type;}
bool   Passenger::GetIsHandicapped(){return isHandicapped;}
bool   Passenger::GetHasPets(){return hasPets;}
		




























