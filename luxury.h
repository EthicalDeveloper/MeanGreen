#ifndef LUXURY_H
#define LUXURY_H

#include <iostream>
#include <string>
#include "driver.h"
using namespace std;


class Luxury:public Driver{
	
	private:
		
		int   capacity;
		float cargoCapacity;
		bool  hasTv;
		bool  hasPhone;
		bool  hasBar;
		bool  hasPartyLight;
		bool  hasBluetooth;
		bool  hasWifi;
		
		
	public:
	
		// default constructor
		
		Luxury();
		
		// fully specified constructor
		
		Luxury(int capacity, float cargoCapacity, bool hasTv, bool hasPhone, bool hasBar, bool hasPartyLight, bool hasBluetooth, bool hasWifi);
		
		
		// setters for all the private fields
		
		void SetCapacity(int capacity);
		void SetCargoCapacity(float cargoCapacity);
		void SetHasTv(bool hasTv);
		void SetHasPhone(bool hasPhone);
		void SetHasBar(bool hasBar);
		void SetHasPartyLight(bool hasPartyLight);
		void SetHasBluetooth(bool hasBluetooth);
		void SetHasWifi(bool hasWifi);
		
		// getters for all the private fields
		
		int   GetCapacity();
		float GetCargoCapacity();
		bool  GetHasTv();
		bool  GetHasPhone();
		bool  GetHasBar();
		bool  GetHasPartyLight();
		bool  GetHasBluetooth();
		bool  GetHasWifi();
		
		
	
	
	
	
	
	
	
	
	
	
	
	
	
};

#endif