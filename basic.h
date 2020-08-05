#ifndef BASIC_H
#define BASIC_H

#include <iostream>
#include <string>
#include "driver.h"
using namespace std;


class Basic:public Driver{
	
	private:
		
		int   capacity;
		float cargoCapacity;
	
	public:
	
		// default constructor
		
		Basic();
		
		// fully loaded constructor
		
		Basic(int capacity, float cargoCapacity);
	
		// setters for the two private fields
		
		void SetCapacity(int capacity);
		void SetCargoCapacity(float cargoCapacity);
		
		
		// getters for the two private fields
		
		int   GetCapacity();
		float GetCargoCapacity();
	
		
		
		
	
	
	
	
};

#endif