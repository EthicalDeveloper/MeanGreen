#ifndef DRIVERS_H
#define DRIVERS_H

#include <vector>
#include <fstream>
#include "driver.h"
#include "basic.h"
#include "economy.h"
#include "group.h"
#include "luxury.h"
using namespace std;

class Drivers{
	
	private:
	
		vector<int>    driver_id; // 6 digits
		vector<int>    vehicle_capacity; // how many passengers
		vector<int>    ride_id; // which rides the driver took
		vector<float>  driver_rate; // 0-5 rate
		vector<string> driver_name; // name of the driver
		vector<string> vehicle_type; // what type of vehicle
		vector<string> notes; // notes
		vector<bool>   hasHandicap; // can it take a handicap
		vector<bool>   isAvailable; // is driver available
		vector<int>    Ecapacity; // capacity each class have
 		vector<float>  EcargoCapacity; // cargoCapacity each class have
		vector<int>    Gcapacity; // capacity each class have
 		vector<float>  GcargoCapacity; // cargoCapacity each class have
		vector<int>    Bcapacity; // capacity each class have
 		vector<float>  BcargoCapacity; // cargoCapacity each class have
		vector<int>    Lcapacity; // capacity each class have
 		vector<float>  LcargoCapacity; // cargoCapacity each class have
		vector<bool>   hasTv; 
		vector<bool>   hasPhone;
		vector<bool>   hasBar;
		vector<bool>   hasPartyLight;
		vector<bool>   hasBluetooth;
		vector<bool>   hasWifi;
		
	
	
	
	
	
	public:
		
		void Add(Driver driver); // add the driver. To add a driver there should be full info about him. Every setter should be filled out.
		void AddBasic(Basic basic); // add the basic features 
		void AddEconomy(Economy economy); // collection of economy type driver
		void AddGroup(Group group); // collection of group type driver
		void AddLuxury(Luxury luxury); // collection of luxury type driver
		void Delete(int id);  // for no we delete the driver by looking for his 6 digit id 
		void Find(int id); // for now we find the driver by their id
		void PrintInfo(); // print all the info about the driver in a clear way.
		void Save(); // saves all info from the vectors to a file
		void Load(); // load all info from the file
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
};

#endif
