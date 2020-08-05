#ifndef ECONOMY_H
#define ECONOMY_H

#include <iostream>
#include <string>
#include "driver.h"
using namespace std;


class Economy:public Driver{
	
	private:
		
		int   capacity;
		float cargoCapacity;
	
	public:
	
		// default constructor
		
		Economy();
		
		// fully loaded constructor
		
		Economy(int capacity, float cargoCapacity);
	
		// setters for the two private fields
		
		void SetCapacity(int capacity);
		void SetCargoCapacity(float cargoCapacity);
		
		
		// getters for the two private fields
		
		int   GetCapacity();
		float GetCargoCapacity();
		
		
	
};

#endif