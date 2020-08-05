#include "economy.h"


// default constructor
Economy::Economy(){
	this->capacity = 0;
	this->cargoCapacity = 0;
}

// definition fully loaded constructor
Economy::Economy(int capacity,float cargoCapacity){
	this->capacity = 0;
	this->cargoCapacity = 0;
}

// setters
void Economy::SetCapacity(int capacity){
	this->capacity = capacity;
}

void Economy::SetCargoCapacity(float cargoCapacity){
	this->cargoCapacity = cargoCapacity;
}

// getters
int Economy::GetCapacity(){
	return capacity;
}

float Economy::GetCargoCapacity(){
	return cargoCapacity;
}

