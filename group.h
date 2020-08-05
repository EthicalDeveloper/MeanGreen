#ifndef GROUP_H
#define GROUP_H

#include <iostream>
#include <string>
#include "driver.h"
using namespace std;


class Group:public Driver{
	
	private:
		
		int   capacity;
		float cargoCapacity;
	
	public:
	
		// default constructor
		
		Group();
		
		// fully loaded constructor
		
		Group(int capacity, float cargoCapacity);
	
		// setters for the two private fields
		
		void SetCapacity(int capacity);
		void SetCargoCapacity(float cargoCapacity);
		
		
		// getters for the two private fields
		
		int   GetCapacity();
		float GetCargoCapacity();
		
		
	
};

#endif