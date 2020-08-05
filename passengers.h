#ifndef PASSENGERS_H
#define PASSENGERS_H

#include <string>
#include <vector>
#include <fstream>
#include "passenger.h"
using namespace std;

class Passengers{
	
	
	private:
		
		vector<int>    passenger_id; // collection of all the passenger IDs created by the user
		vector<int>    ride_id;    // collection of all passenger ride IDs assigned by the user
		vector<float>  passenger_rating; // collection of all passenger ratings assigned by the driver
		vector<string> passenger_name; // collection of all names
		vector<string> payment_type; // collection of all payment types each passenger has
		vector<bool>   isHandicapped; // collection of all info's about the passengers with disabilities
		vector<bool>   hasPets; // collection of all info about passengers owning a pet or not
		
	
	public:

		void Add(Passenger passenger); // add the passenger. To add a passenger there should be full info about him. Every setter should be filled out.
		void Delete(int id);  // for now we delete the passenger by looking for his 6 digit id 
		void Find(int id); // for now we find the passenger by their id
		void PrintInfo(); // print all the info about the passenger in a clear way.
		void Save(); // saves all the passengers data
		void Load(); // loads all the passengers data
	
	
	
	
	
	
	
	
	
	
	
	
	
};
#endif