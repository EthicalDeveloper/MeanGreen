#include <iostream>
#include "drivers.h"
using namespace std;

// collects the info about the drivers to the vectors declared on the private field the of Drivers() class.
void Drivers::Add(Driver driver){
	
	driver_id.push_back(driver.GetDriverId());
	vehicle_capacity.push_back(driver.GetVehicleCapacity());
	ride_id.push_back(driver.GetRideId());
	driver_rate.push_back(driver.GetDriverRate());
	driver_name.push_back(driver.GetDriverName());
	vehicle_type.push_back(driver.GetVehicleType());
	notes.push_back(driver.GetNotes());
	hasHandicap.push_back(driver.GetHasHandicap());
	isAvailable.push_back(driver.GetIsAvailable());
	
	
}

void Drivers::AddGroup(Group group){
	
	Gcapacity.push_back(group.GetCapacity());
	GcargoCapacity.push_back(group.GetCargoCapacity());
	
	
}

void Drivers::AddEconomy(Economy economy){
	
	Ecapacity.push_back(economy.GetCapacity());
	EcargoCapacity.push_back(economy.GetCargoCapacity());
}

void Drivers::AddBasic(Basic basic){
	
	Bcapacity.push_back(basic.GetCapacity());
	BcargoCapacity.push_back(basic.GetCargoCapacity());
}

void Drivers::AddLuxury(Luxury luxury){
	
	Lcapacity.push_back(luxury.GetCapacity());
	LcargoCapacity.push_back(luxury.GetCargoCapacity());
	hasTv.push_back(luxury.GetHasTv());
	hasPhone.push_back(luxury.GetHasPhone());
	hasBar.push_back(luxury.GetHasBar());
	hasPartyLight.push_back(luxury.GetHasPartyLight());
	hasBluetooth.push_back(luxury.GetHasBluetooth());
	hasWifi.push_back(luxury.GetHasWifi());
	
	
}

void Drivers::Delete(int id){
	
	
	int  i 	   = 0;
	bool found = false;
	
	// look for the matching id that the user input_iterator
	
	while (!found && (i < driver_id.size())){
		
		if (driver_id.at(i) == id){
			// erase every info about the driver with the inputted id 
			driver_id.erase(driver_id.begin() + i); 
			vehicle_capacity.erase(vehicle_capacity.begin() + i);
			ride_id.erase(ride_id.begin() + i);
			driver_rate.erase(driver_rate.begin() + i);
			driver_name.erase(driver_name.begin() + i);
			vehicle_type.erase(vehicle_type.begin() + i);
			notes.erase(vehicle_type.begin() + i);
			hasHandicap.erase(hasHandicap.begin() + i);
			isAvailable.erase(isAvailable.begin() + i);

			
			
			found = true;
		}
		
		//this code snippet should print message when the id not found. Not tested yet
		if (i = driver_id.size() && driver_id.at(i) != id){
			cout << "Driver is not found!" << endl;
		} 
		
		++i;
		
		
	}
	
}


// Find the driver by its ID number.

void Drivers::Find(int id){
	
	int  i	   = 0;
	bool found = false;
	
	while (!found && (i < driver_id.size())){
		
		if (driver_id.at(i) == id){
					
			cout << "Driver ID: "        << driver_id[i]        << endl;
			cout << "Ride ID: "          << ride_id[i]          << endl;
			cout << "Name: "             << driver_name[i]      << endl;
			cout << "Vehicle Capacity: " << vehicle_capacity[i] << endl;
			cout << "Rating: "           << driver_rate[i]      << endl;
			cout << "Vehicle type: "     << vehicle_type[i]     << endl;
			cout << "Notes: "            << notes[i]            << endl;
		
			if (hasHandicap[i]){
				cout << "Handicap capable: Yes" << endl;
			}else{
				cout << "Handicap capable: NO " << endl;
			}
		
			if (isAvailable[i]){
				cout << "Available: Yes" << endl;
			}else{
				cout << "Available: NO" << endl;
			}
		
			cout << endl;
		
		
			cout << "***********************************" << endl;
			
			found = true;
			
			
		}
		
		//this code snippet should print message when the id not found. Not tested yet
		else if (i = driver_id.size() && driver_id.at(i) != id){
			cout << "Driver is not found!" << endl;
		}
		
		++i;
		
	}
	
	
	
}







// print the information about each driver inside the vector and seperate them for clear reading 
void Drivers::PrintInfo(){
	
	// loop through each vector and print them all out
	cout << "------Information-------" << endl;
	cout << endl;
	
	for (int i = 0; i < driver_id.size(); ++i){
		
		cout << "Driver ID: "        << driver_id[i]        << endl;
		cout << "Ride ID: "          << ride_id[i]          << endl;
		cout << "Name: "             << driver_name[i]      << endl;
		cout << "Vehicle Capacity: " << vehicle_capacity[i] << endl;
		cout << "Rating: "           << driver_rate[i]      << endl;
		cout << "Vehicle type: "     << vehicle_type[i]     << endl;
		cout << "Notes: "            << notes[i]            << endl;
		
		if (hasHandicap[i]){
			cout << "Handicap capable: Yes" << endl;
		}else{
			cout << "Handicap capable: NO " << endl;
		}
		
		if (isAvailable[i]){
			cout << "Available: Yes" << endl;
		}else{
			cout << "Available: NO" << endl;
		}
		
		cout << endl;
		
		
		cout << "***********************************" << endl;
		
	
		
	}
		
	
	
}



void Drivers::Save(){
	
	fstream fout;
	
	fout.open("driversData.txt");
	
	if (fout.fail()){
		cout << "File is not found!" << endl;
	}
	
	// loop through each vector and save them all out
	for (int i = 0; i < driver_id.size(); ++i){
		
		fout << driver_id[i]        << endl;
		fout << ride_id[i]          << endl;
		fout << driver_name[i]      << endl;
		fout << vehicle_capacity[i] << endl;
		fout << driver_rate[i]      << endl;
		fout << vehicle_type[i]     << endl;
		fout << notes[i]            << endl;
		fout << hasHandicap[i]      << endl;
		fout << isAvailable[i]      << endl;
		
	}
		
	
	fout.close();
}

void Drivers::Load(){
	
	fstream fin;
	
	int    id; // 6 digits
	int    capacity; // how many passengers
	int    rideId; // which rides the driver took
	float  rate; // 0-5 rate
	string name; // name of the driver
	string vehicleType; // what type of vehicle
	string note; // notes
	bool   handicap; // can it take a handicap
	bool   available; // is driver available
	
	fin.open("driversData.txt");
	if (fin.fail()){
		cout << "File is not found!" << endl;
	}
	
	while (!fin.eof()){
		fin >> id;
		driver_id.push_back(id);
		fin >> rideId;
		ride_id.push_back(rideId);
		fin >> name;
		driver_name.push_back(name);
		fin >> capacity;
		vehicle_capacity.push_back(capacity);
		fin >> rate;
		driver_rate.push_back(rate);
		fin >> vehicleType;
		vehicle_type.push_back(vehicleType);
		fin >> note;
		notes.push_back(note);
		fin >> handicap;
		hasHandicap.push_back(handicap);
		fin >> available;
		isAvailable.push_back(available);
		
	}
	
	
	
	fin.close();
}


