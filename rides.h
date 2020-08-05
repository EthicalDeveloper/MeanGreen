#ifndef RIDES_H
#define RIDES_H

#include <iostream>
#include <vector>
#include <fstream>
#include "ride.h"


class Rides{
	
	private:
	
		vector<int>    ride_id; // collection of all ride ids. It should be first set with the object created from the Ride() class
		vector<int>    party_size; // collection of all sizes for each ride. 
		vector<string> pickup_location; // collection of all the pickup locations of rides. Each ride id will have its pickup location
		vector<string> drop_location;  // collection of all the drop locations of the rides. Each ride id will be matched with drop location
		vector<string> status; // each ride id will have its status. If the Driver() object is available it should show active. Otherwise busy.
		vector<time_t> pickup_time; // each ride should have its pickup time. 
		vector<time_t> drop_time; // each ride has been specified its drop time.
		vector<bool>   hasPets; // can the ride allow pets
		vector<float>  customer_rating; // customer can give rating to a ride depending on different factors. Road conditions, drivers skill
		
	
	public:
		
		void Add(Ride ride); // adding all the rides with its matching attributes. first we should set all the fields on the Ride() class
		void Delete(int id); // deleting the rides by matching the id that was input from the user
		void Find(int id);  // finding the rides by matching the id inputted by the user
		void PrintInfo();   // printing all the rides. 
		void Save();        // should save all the rides data into a file
		void Load();        // loads all the info about the rides saved from previous sessions
	
		
	
	
	
	
};
#endif