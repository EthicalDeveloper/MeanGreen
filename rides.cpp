#include <iostream>
#include "rides.h"
using namespace std;

// collects all the info about the rides. First it should set all the fields in the Ride() class. 
// whenever Add() method is called it should get all the fields from the Ride() class and add it to the Rides() fields vectors

void Rides::Add(Ride ride){
	
	ride_id.push_back(ride.GetRideID());
	party_size.push_back(ride.GetPartySize());
	pickup_location.push_back(ride.GetPickupLocation());
	drop_location.push_back(ride.GetDropLocation());
	status.push_back(ride.GetStatus());
	pickup_time.push_back(ride.GetPickupTime());
	drop_time.push_back(ride.GetDropTime());
	hasPets.push_back(ride.GetHasPets());
	customer_rating.push_back(ride.GetCustomerRating());
	
	
}

// Deletes the ride by locating it with its ID. Deletes everything that is in the same index like the ride_id 

void Rides::Delete(int id){
	
	
	int  i 	   = 0;
	bool found = false;
	
	// look for the matching id that the user input_iterator
	
	while (!found && (i < ride_id.size())){
		
		if (ride_id.at(i) == id){
			// erase every info about the ride with the inputted id 
			ride_id.erase(ride_id.begin() + i); 
			party_size.erase(party_size.begin() + i);
			pickup_location.erase(pickup_location.begin() + i);
			drop_location.erase(drop_location.begin() + i);
			status.erase(status.begin() + i);
			pickup_time.erase(pickup_time.begin() + i);
			drop_time.erase(drop_time.begin() + i);
			hasPets.erase(hasPets.begin() + i);
			customer_rating.erase(customer_rating.begin() + i);
			
			found = true;
		}
		
		//this code snippet should print message when the id not found. Not tested yet
		if (i = ride_id.size() && ride_id.at(i) != id){
			cout << "Ride is not found!" << endl;
		} 
		
		++i;
		
		
	}
	
}



// Find the ride by its ID number.

void Rides::Find(int id){
	
	int  i	   = 0;
	bool found = false;
	
	while (!found && (i < ride_id.size())){
		
		if (ride_id.at(i) == id){
					
			cout << "Ride ID: "          << ride_id[i]         << endl;
			cout << "Party Size: "       << party_size[i]      << endl;
			cout << "Pickup Location: "  << pickup_location[i] << endl;
			cout << "Pickup Time: "      << pickup_time[i]     << endl;
			cout << "Dropoff Location: " << drop_location[i]   << endl;
			cout << "Dropoff Time: "     << drop_time[i]       << endl;
			cout << "Status: "     		 << status[i]     	   << endl;
			cout << "Customer Rating: "  << customer_rating[i] << endl;
		
			if (hasPets[i]){
				cout << "Has Pets: Yes" << endl;
			}else{
				cout << "Has Pets: NO " << endl;
			}
		
		
			cout << endl;
		
		
			cout << "***********************************" << endl;
			
			found = true;
			
			
		}
		
		//this code snippet should print message when the id not found. Not tested yet
		else if (i = ride_id.size() && ride_id.at(i) != id){
			cout << "Ride is not found!" << endl;
		}
		
		++i;
		
	}
	
	
	
}



// print the information about each ride inside the vector and seperate them for clear reading 
void Rides::PrintInfo(){
	
	// loop through each vector and print them all out
	cout << "------Information-------" << endl;
	cout << endl;
	
	for (int i = 0; i < ride_id.size(); ++i){
		
		cout << "Ride ID: "          << ride_id[i]         << endl;
		cout << "Party Size: "       << party_size[i]      << endl;
		cout << "Pickup Location: "  << pickup_location[i] << endl;
		cout << "Pickup Time: "      << pickup_time[i]     << endl;
		cout << "Dropoff Location: " << drop_location[i]   << endl;
		cout << "Dropoff Time: "     << drop_time[i]       << endl;
		cout << "Status: "     		 << status[i]     	   << endl;
		cout << "Customer Rating: "  << customer_rating[i] << endl;
	
		if (hasPets[i]){
			cout << "Has Pets: Yes" << endl;
		}else{
			cout << "Has Pets: NO " << endl;
		}
	
	
		cout << endl;
		
		cout << endl;
		
		
		cout << "***********************************" << endl;
		
	
		
	}
		
	
	
}


void Rides::Save(){
	
	fstream fout;
	fout.open("ridesData.txt");
	
	if (fout.fail()){
		cout << "File is not found!" << endl;
	}
	
	for (int i = 0; i < ride_id.size(); ++i){
		
		fout << ride_id[i]         << endl;
		fout << party_size[i]      << endl;
		fout << pickup_location[i] << endl;
		fout << pickup_time[i]     << endl;
		fout << drop_location[i]   << endl;
		fout << drop_time[i]       << endl;
		fout << status[i]     	   << endl;
		fout << customer_rating[i] << endl;
		fout << hasPets[i]         << endl;
     
	
	}
	
	fout.close();
	
}


void Rides::Load(){
	
	fstream fin;
	fin.open("ridesData.txt");
	
	int    id; // 8 digits
	int    size; // number of passengers riding 
	string pLocation;
	string dLocation;
	string Status; // active, completed, canceled
	time_t pickupTime; // number of seconds since (jan 1, 1970 00:00:00 GMT)
	time_t dropTime;
	bool   pets;
	float  rating; // rating given by a customer that took the ride_id
	
	if (fin.fail()){
		cout << "File is not found!" << endl;
	}
	
	while(!fin.eof()){
		fin >> id;
		ride_id.push_back(id);
		fin >> size;
		party_size.push_back(size);
		fin >> pLocation;
		pickup_location.push_back(pLocation);
		fin >> dLocation;
		drop_location.push_back(dLocation);
		fin >> Status;
		status.push_back(Status);
		fin >> pickupTime;
		pickup_time.push_back(pickupTime);
		fin >> dropTime;
		drop_time.push_back(dropTime);
		fin >> pets;
		hasPets.push_back(pets);
		fin >> rating;
		customer_rating.push_back(rating);
	}
	
	fin.close();
	
}

























