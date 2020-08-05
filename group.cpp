#include "group.h"


// default constructor
Group::Group(){
	this->capacity = 0;
	this->cargoCapacity = 0;
}

// definition fully loaded constructor
Group::Group(int capacity,float cargoCapacity){
	this->capacity = 0;
	this->cargoCapacity = 0;
}

// setters
void Group::SetCapacity(int capacity){
	this->capacity = capacity;
}

void Group::SetCargoCapacity(float cargoCapacity){
	this->cargoCapacity = cargoCapacity;
}

// getters
int Group::GetCapacity(){
	return capacity;
}

float Group::GetCargoCapacity(){
	return cargoCapacity;
}

