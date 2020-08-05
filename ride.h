#ifndef RIDE_H
#define RIDE_H

#include <string>
#include <time.h>
using namespace std;


class Ride{
	
	private:
	
		int    ride_id; // 8 digits
		int    party_size; // number of passengers riding 
		string pickup_location;
		string drop_location;
		string status; // active, completed, canceled
		time_t pickup_time; // number of seconds since (jan 1, 1970 00:00:00 GMT)
		time_t drop_time;
		bool   hasPets;
		float  customer_rating; // rating given by a customer that took the ride_id
		 
		 
	public:
	
		//constructors
		Ride(int ride_id, int party_size, string pickup_location, string drop_location, string status, time_t pickup_time, time_t drop_time, bool hasPets, float customer_rating);
		Ride();
	

	
		// setters of private class members
		
		void SetRideID(int id);
		void SetPickupLocation(string location);
		void SetDropLocation(string location);
		void SetPickupTime(time_t time);
		void SetDropTime(time_t time);
		void SetPartySize(int size);
		void SetHasPets(bool hasPets);
		void SetStatus(string status);
		void SetCustomerRating(float rating);
		
		
		// getters of fields 
		
		int    GetRideID();
		int    GetPartySize();
		string GetPickupLocation();
		string GetDropLocation();
		string GetStatus();
		time_t GetPickupTime();
		time_t GetDropTime();
		bool   GetHasPets();
		float  GetCustomerRating();
	
	
	
	
	
	
};

#endif