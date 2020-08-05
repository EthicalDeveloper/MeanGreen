#include "basic.h"


// default constructor
Basic::Basic(){
	this->capacity = 0;
	this->cargoCapacity = 0;
}

// definition fully loaded constructor
Basic::Basic(int capacity,float cargoCapacity){
	this->capacity = 0;
	this->cargoCapacity = 0;
}

// setters
void Basic::SetCapacity(int capacity){
	this->capacity = capacity;
}

void Basic::SetCargoCapacity(float cargoCapacity){
	this->cargoCapacity = cargoCapacity;
}

// getters
int Basic::GetCapacity(){
	return capacity;
}

float Basic::GetCargoCapacity(){
	return cargoCapacity;
}

