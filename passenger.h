#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>
#include <time.h>
using namespace std;


class Passenger{
	
	private:
		int    passenger_id; // 6 digits
		int    ride_id;    // ride id to be used to take a ride
		float  passenger_rating; // passenger rate set by the driver (0-5)
		string passenger_name; // name set by the user
		string payment_type; // payment type can or cannot be accepted by driver
		bool   isHandicapped; // is passenger handicap
		bool   hasPets; // does the passenger have pets
		
		
	public:
		
		// constructors
		Passenger(int passenger_id, int ride_id, float passenger_rating, string passenger_name, string payment_type, bool isHandicapped, bool hasPets);
		Passenger();
	
		// setters for all private class members
		void SetPassengerId(int id);
		void SetRideId(int id);
		void SetPassengerRating(float rating);
		void SetPassengerName(string name);
		void SetPaymentType(string payment);
		void SetIsHandicapped(bool isHandicapped);
		void SetHasPets(bool hasPets);
		
		// getters for all private class members
		int    GetPassengerId();
		int    GetRideId();
		float  GetPassengerRating();
		string GetPassengerName();
		string GetPaymentType();
		bool   GetIsHandicapped();
		bool   GetHasPets();
		
		
		
		
	
	
};

#endif