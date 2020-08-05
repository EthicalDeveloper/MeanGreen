#include <iostream>
#include "passengers.h"
using namespace std;

// collects the info about the passengers to the vectors declared on the private field the of Passengers() class.
void Passengers::Add(Passenger passenger){
	
	passenger_id.push_back(passenger.GetPassengerId()); 
	ride_id.push_back(passenger.GetRideId());
	passenger_rating.push_back(passenger.GetPassengerRating());
	passenger_name.push_back(passenger.GetPassengerName());
	isHandicapped.push_back(passenger.GetIsHandicapped());
	hasPets.push_back(passenger.GetHasPets());
	payment_type.push_back(passenger.GetPaymentType());
	
	
	
}


void Passengers::Delete(int id){
	
	
	int  i 	   = 0;
	bool found = false;
	
	// look for the matching id that the user input_iterator
	
	while (!found && (i < passenger_id.size())){
		
		if (passenger_id.at(i) == id){
			// erase every info about the driver with the inputted id 
			passenger_id.erase(passenger_id.begin() + i); 
			ride_id.erase(ride_id.begin() + i);
			passenger_rating.erase(passenger_rating.begin() + i);
			passenger_name.erase(passenger_name.begin() + i);
			isHandicapped.erase(isHandicapped.begin() + i);
			hasPets.erase(hasPets.begin() + i);
			payment_type.erase(payment_type.begin() + i);
			
			found = true;
		}
		
		//this code snippet should print message when the id not found. Not tested yet
		if (i = passenger_id.size() && passenger_id.at(i) != id){
			cout << "Passenger is not found!" << endl;
		} 
		
		++i;
		
		
	}
	
}


// Find the driver by its ID number.

void Passengers::Find(int id){
	
	int  i	   = 0;
	bool found = false;
	
	while (!found && (i < passenger_id.size())){
		
		if (passenger_id.at(i) == id){
					
			cout << "Passenger ID: "     << passenger_id[i]     << endl;
			cout << "Ride ID: "          << ride_id[i]          << endl;
			cout << "Name: "             << passenger_name[i]   << endl;
			cout << "Rating: "           << passenger_rating[i] << endl;
			cout << "Payment type: "     << payment_type[i]     << endl;

		
			if (isHandicapped[i]){
				cout << "Handicapped: Yes" << endl;
			}else{
				cout << "Handicapped: NO " << endl;
			}
		
			if (hasPets[i]){
				cout << "Has Pets: Yes" << endl;
			}else{
				cout << "Has Pets: NO" << endl;
			}
		
			cout << endl;
		
		
			cout << "***********************************" << endl;
			
			found = true;
			
			
		}
		
		//this code snippet should print message when the id not found. Not tested yet
		else if (i = passenger_id.size() && passenger_id.at(i) != id){
			cout << "Passenger is not found!" << endl;
		}
		
		++i;
		
	}
	
	
	
}







// print the information about each driver inside the vector and seperate them for clear reading 
void Passengers::PrintInfo(){
	
	// loop through each vector and print them all out
	cout << "------Information-------" << endl;
	cout << endl;
	
	for (int i = 0; i < passenger_id.size(); ++i){
		
			cout << "Passenger ID: "     << passenger_id[i]     << endl;
			cout << "Ride ID: "          << ride_id[i]          << endl;
			cout << "Name: "             << passenger_name[i]   << endl;
			cout << "Rating: "           << passenger_rating[i] << endl;
			cout << "Payment type: "     << payment_type[i]     << endl;

		
			if (isHandicapped[i]){
				cout << "Handicapped: Yes" << endl;
			}else{
				cout << "Handicapped: NO " << endl;
			}
		
			if (hasPets[i]){
				cout << "Has Pets: Yes" << endl;
			}else{
				cout << "Has Pets: NO" << endl;
			}
		
			cout << endl;
		
		
			cout << "***********************************" << endl;
	
		
	}
		
	
	
}

// saves all the data to a txt file 
// all the vectors will be written on that file

void Passengers::Save(){
	
	fstream fout;
	fout.open("passengersData.txt");
	
	if (fout.fail()){
		cout << "File is not found!" << endl;
	}
	

	
	for (int i = 0; i < passenger_id.size(); ++i){
		
			fout << passenger_id[i]     << endl;
			fout << ride_id[i]          << endl;
			fout << passenger_name[i]   << endl;
			fout << passenger_rating[i] << endl;
			fout << payment_type[i]     << endl;
			fout << isHandicapped[i]    << endl;
			fout << hasPets[i]          << endl;
		
	}
		
	
	fout.close();
	
	
}

// loads all the data from the text file
// inputs them to the individual vector

void Passengers::Load(){
	
	fstream fin;
	fin.open("passengersData.txt");
	
	int    id; // 6 digits
	int    rideId;    // ride id to be used to take a ride
	float  rating; // passenger rate set by the driver (0-5)
	string name; // name set by the user
	string type; // payment type can or cannot be accepted by driver
	bool   handicapped; // is passenger handicap
	bool   pets; // does the passenger have pets
	
	if (fin.fail()){
		cout << "File is not found!" << endl;
	}
	

	
	while (!fin.eof()){
		
			fin >> id;
			passenger_id.push_back(id); 
			fin >> rideId;
			ride_id.push_back(rideId);
			fin >> name;
			passenger_name.push_back(name);
			fin >> rating;
			passenger_rating.push_back(rating);
			fin >> type;
			payment_type.push_back(type);
			fin >> handicapped;
			isHandicapped.push_back(handicapped);
			fin >> pets;
			hasPets.push_back(pets);
		
	}
		
	
	
	fin.close();
	
}



