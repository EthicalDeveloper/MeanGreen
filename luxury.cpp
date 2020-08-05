#include "luxury.h"

// default constructor
Luxury::Luxury(){
	this->capacity = 0;
	this->cargoCapacity = 0;
	this->hasTv = false;
	this->hasPhone = false;
	this->hasBar = false;
	this->hasPartyLight = false;
	this->hasBluetooth = false;
	this->hasWifi = false;
}
// fully specified constructor
Luxury::Luxury(int capacity, float cargoCapacity, bool hasTv, bool hasPhone, bool hasBar, bool hasPartyLight, bool hasBluetooth, bool hasWifi){
	this->capacity = capacity;
	this->cargoCapacity = cargoCapacity;
	this->hasTv = hasTv;
	this->hasPhone = hasPhone;
	this->hasBar = hasBar;
	this->hasPartyLight = hasPartyLight;
	this->hasBluetooth = hasBluetooth;
	this->hasWifi = hasWifi;
}

// setters

void Luxury::SetCapacity(int capacity){this->capacity = capacity;}
void Luxury::SetCargoCapacity(float cargoCapacity){this->cargoCapacity = cargoCapacity;}
void Luxury::SetHasTv(bool hasTv){this->hasTv = hasTv;}
void Luxury::SetHasPhone(bool hasPhone){this->hasPhone = hasPhone;}
void Luxury::SetHasBar(bool hasBar){this->hasBar = hasBar;}
void Luxury::SetHasPartyLight(bool hasPartyLight){this->hasPartyLight = hasPartyLight;}
void Luxury::SetHasBluetooth(bool hasBluetooth){this->hasBluetooth = hasBluetooth;}
void Luxury::SetHasWifi(bool hasWifi){this->hasWifi = hasWifi;}

// getters

int   Luxury::GetCapacity(){return capacity;}
float Luxury::GetCargoCapacity(){return cargoCapacity;}
bool  Luxury::GetHasTv(){return hasTv;}
bool  Luxury::GetHasPhone(){return hasPhone;}
bool  Luxury::GetHasBar(){return hasBar;}
bool  Luxury::GetHasPartyLight(){return hasPartyLight;}
bool  Luxury::GetHasBluetooth(){return hasBluetooth;}
bool  Luxury::GetHasWifi(){return hasWifi;}




