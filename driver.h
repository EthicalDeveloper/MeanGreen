#ifndef DRIVER_H
#define DRIVER_H

#include <string>
#include <time.h>
using namespace std;

class Driver{
	
	private:
		int    driver_id; // 6 digits
		int    vehicle_capacity; // how many passengers
		int    ride_id; // which rides the driver took
		float  driver_rate; // 0-5 rate
		string driver_name; // name of the driver
		string vehicle_type; // what type of vehicle
		string notes; // notes
		bool   hasHandicap; // can it take a handicap
		bool   isAvailable; // is driver available
		
		
	
	
	public:
	
		// setters of the private class member fields
		
		Driver(int driver_id, int vehicle_capacity, int ride_id, float driver_rate, string driver_name, string vehicle_type, string notes, bool hasHandicap, bool isAvailable);
		Driver();
		
		void SetDriverId(int id);
		void SetVehicleCapacity(int capacity);
		void SetDriverRate(float rate);
		void SetRideId(int id);
		void SetDriverName(string name);
		void SetHasHandicap(bool hasHandicap);
		void SetVehicleType(string type);
		void SetIsAvailable(bool isAvailable);
		void SetNotes(string note);
		
		
		// getters of the public member fields
		
		int    GetDriverId();
		int    GetVehicleCapacity();
		int    GetRideId();
		float  GetDriverRate();
		string GetDriverName();
		string GetVehicleType();
		string GetNotes();
		bool   GetHasHandicap();
		bool   GetIsAvailable();
		
		
	
	
	
	
	
	
	
	
};


#endif