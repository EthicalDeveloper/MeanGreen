#include <iostream>
#include <string>
#include <iomanip>
#include <ctype.h>
#include <ctime>
#include <fstream>
#include "driver.h"
#include "ride.h"
#include "passenger.h"
#include "drivers.h"
#include "passengers.h"
#include "rides.h"
#include "basic.h"
#include "group.h"
#include "economy.h"
#include "luxury.h"
using namespace std;

// this method prints the student info
void studentInfo()

{
	
	
   cout << endl;
   cout << endl;
   cout << endl;
	
	
	
   cout << "           +----------------------------------------------------+          " << endl;
   cout << "           |          Computer Science and Engineering          |          " << endl;
   cout << "           |           CSCE 1040 - Computer Science II          |          " << endl;
   cout << "           |  Kerimjan Rejepov     kr1170    kr1170@my.unt.edu  |          " << endl;
   cout << "           +----------------------------------------------------+          " << endl;
   
   cout << endl;
   cout << endl;
   cout << endl;
	
	
	
	
	
}

// this method prints the program description to the console
void programDescription()
{
	
   
   
   
   cout << "                 M E A N    G R E E N    E A G L E    L I F T               " << endl;
   cout << "   ------------------------------------------------------------------------ " << endl;
   cout << "    This program is designed to manage the Eagle lift bus system and it     " << endl;
   cout << "    allows you to add drivers, passengers and manage rides. You can also    " << endl;
   cout << "    find the driver, passenger or a ride and modify it. Check the availabili" << endl;
   cout << "    ty, handicap capability, capacity and if you can carry a pet with you!  " << endl;
   cout << "   ------------------------------------------------------------------------ " << endl;
   
   
   cout << endl;
   cout << endl;
   cout << endl;
	
	
	
	
}

// this method prints out the general menu to the console
void Menu(){
	
	// Menu that lets the user to choose the service of their choice
	cout << endl;
	cout << "+******************* MENU *******************+" << endl;
	cout << "                                              " << endl;
	cout << "     1. Drivers   	     3. Rides		   " << endl;                  
	cout << "     2. Passengers           4. Load   	   " << endl;
	cout << "                   5. QUIT 		     	           " << endl;
	cout << "                                              " << endl;
	cout << "+********************************************+" << endl;	
	                   

	cout << endl;
	
}

// this method prints out the driver menu to the console
void DriverMenu(){
	// Driver entity to add delete and find a driver
	cout << endl;
	cout << "+******************* DRIVER *******************+" << endl;
	cout << "                                                " << endl;
	cout << "   1. Add    	  		4. Delete	  	 " << endl;                  
	cout << "   2. Find          	  	5. Save 		 " << endl;
	cout << "   3. Print all                 6. Main Menu    " << endl;   	
	cout << "                                             	 " << endl;
	cout << "+**********************************************+" << endl;
	cout << endl;
}
// this method prints out the passenger menu to the console
void PassengerMenu(){
	// Driver entity to add delete and find a passenger
	cout << endl;
	cout << "+******************* PASSENGER ****************+" << endl;
	cout << "                                                " << endl;
	cout << "   1. Add    	  		4. Delete	  	 " << endl;                  
	cout << "   2. Find          	  	5. Save 		 " << endl;
	cout << "   3. Print all                 6. Main Menu    " << endl;   	
	cout << "                                             	 " << endl;
	cout << "+**********************************************+" << endl;
	cout << endl;
	
}
// this method prints out the ride menu to the console
void RideMenu(){
	// Driver entity to add delete and find a passenger
	cout << endl;
	cout << "+******************* RIDE *********************+" << endl;
	cout << "                                                " << endl;
	cout << "   1. Add    	  		4. Delete	  	 " << endl;                  
	cout << "   2. Find          	  	5. Save 		 " << endl;
	cout << "   3. Print all                 6. Main Menu    " << endl;   	
	cout << "                                             	 " << endl;
	cout << "+**********************************************+" << endl;
	cout << endl;
	
}

// this method clears all the info after loading the info's. Data from each file is deleted which lets the user to save it after.
void ClearEverything(){
	
	
	fstream file_1;
	fstream file_2;
	fstream file_3;
	
	file_1.open("driversData.txt", ios::out | ios::trunc);
	file_2.open("passengersData.txt", ios::out | ios::trunc);
	file_3.open("ridesData.txt", ios::out | ios::trunc);
	
	if (file_1.fail()){
		cout << "File is not found!" << endl;
	}else if (file_2.fail()){
		cout << "File is not found!" << endl;
	}else if (file_3.fail()){
		cout << "File is not found!" << endl;
	}
	
	
	file_1.close();
	file_2.close();
	file_3.close();
	
	
	
}

// --------------------------------------------------------------------------------------------------------------------------------------
// --------------------------------------------------------------------------------------------------------------------------------------
// --------------------------------------------------------------------------------------------------------------------------------------

// MAIN

int main(){
	
	int        menuOption;
	int        actionOption;
	Driver 	   driver;
	Drivers    drivers;
	Passenger  passenger;
	Passengers passengers;
	Ride       ride;
	Rides      rides;
	
	
	
	int    id; // 6 digits
	int    vehicle_capacity; // how many passengers
	int    ride_id; // rides
	int    party_size;
	char   handicap; // it is gonna be y for yes, n for no
	char   pets;  // y for yes, n for no
	char   available; // y for yes, n for no
	float  rate; // 0-5 rate
	string name; // name of the driver
	string vehicle_type; // what type of vehicle
	string payment_type; // prefferred payment type
	string notes; // notes
	string location; // location
	bool   hasHandicap; // can it take a handicap
	bool   isAvailable; // is driver available

	
	
	// time fuction declaration and initialization
	
	time_t current_time;
	current_time = time(NULL);
	
	time_t now = time(0);
	char* dt = ctime(&now);
	
	
	
	
	
	
	
	
	
	
	
	// introduction methods called. It will print info about the program
	studentInfo();
	programDescription();
	
	cout << "Local Date&Time: " << dt << endl;
	
	Menu();
	// gets the menu option input from the user
	cout << "Enter (1 for drivers, 2 for passengers, 3 for rides, 4 to load, and 5 to QUIT)" << endl;
	cout << " ----> " ; 
    cin  >> menuOption;
	
	while (menuOption != 5){
		
		
		if (menuOption == 1){
			
		
			DriverMenu();
			// gets the menu option input from the user
			cout << "Enter (1 to add, 2 to find, 3 to print all, 4 to delete, 5 to save, and 6 to main menu)" << endl;
			cout << " ----> " ; 
			cin  >> actionOption;
			while (actionOption != 6){
				
				// if entityOption is driver 
				if (actionOption == 1){
					
					
					// setting all the Driver() fields
					
					// create the id and set it 

					cout << "Create Driver ID (6 digits): ";
					cin  >> id;
					driver.SetDriverId(id);
					
					
					
					
					
					// specify the vehicle capacity
					cout << "Vehicle capacity (How many people can driver carry): ";
					cin  >> vehicle_capacity;
					driver.SetVehicleCapacity(vehicle_capacity);
					
					// assigning a ride id
					cout << "Assign a ride id: ";
					cin  >> ride_id;
					driver.SetRideId(ride_id);
					
					
					// give a default rate to the driver 
					cout << "Rate the driver (0 - 5): ";
					cin  >> rate;
					driver.SetDriverRate(rate);
					
					// enter the name of the driver
					cout << "Enter the name of the driver: ";
					cin  >> name;
					driver.SetDriverName(name);
					
					// enter the vehicle type
					cout << "What type of vehicle driver has: ";
					cin  >> vehicle_type;
					driver.SetVehicleType(vehicle_type);
					
					// set the handicap
					driver.SetHasHandicap(true);
					
					// set the availability
					driver.SetIsAvailable(false);
					
					// any notes the user have?
					cout << "Add notes: ";
					cin  >> notes;
					driver.SetNotes(notes);
					
	
					drivers.Add(driver);
					cout << endl;
					cout << "Driver has been successfully added!" << endl;
					
					
					DriverMenu();
					// gets the menu option input from the user
					cout << "Enter (1 to add, 2 to find, 3 to print all, 4 to delete, 5 to save, and 6 to main menu)" << endl;
					cout << " ----> " ; 
					cin  >> actionOption;
					
				}
				
				// find the driver info according to its id
				else if (actionOption == 2){
					
					cout << "Enter the Driver ID: ";
					cin  >> id;
					
					cout << "Driver with ID: " << id << " has been found! " << endl;
					cout << "INFO: " << endl;
					drivers.Find(id);
					
					DriverMenu();
					// gets the menu option input from the user
					cout << "Enter (1 to add, 2 to find, 3 to print all, 4 to delete, 5 to save, and 6 to main menu)" << endl;
					cout << " ----> " ; 
					cin  >> actionOption;
					
				}
				// prints all the drivers
				else if (actionOption == 3){
					
					
					drivers.PrintInfo();
					
					DriverMenu();
					// gets the menu option input from the user
					cout << "Enter (1 to add, 2 to find, 3 to print all, 4 to delete, 5 to save, and 6 to main menu)" << endl;
					cout << " ----> " ; 
					cin  >> actionOption;
					
					
					
				}
				
				// delete the driver according to its id
				else if (actionOption == 4){
					cout << "Enter the Driver ID: ";
					cin  >> id;
					drivers.Delete(id);
					
					cout << "Driver with ID: " << id << " has been deleted! " << endl;
					
					DriverMenu();
					// gets the menu option input from the user
					cout << "Enter (1 to add, 2 to find, 3 to print all, 4 to delete, 5 to save, and 6 to main menu)" << endl;
					cout << " ----> " ; 
					cin  >> actionOption;
				}
				
				else if (actionOption == 5){
					drivers.Save();
					cout << "Drivers data is saved successfully!" << endl;
					
					DriverMenu();
					// gets the menu option input from the user
					cout << "Enter (1 to add, 2 to find, 3 to print all, 4 to delete, 5 to save, and 6 to main menu)" << endl;
					cout << " ----> " ; 
					cin  >> actionOption;
				}
				
				// this if statement should throw the loop to the main menu where the user chooses drivers, passenger and etc.
				else if (actionOption == 6){
					break;
				}
			}
			
			// menu that runs until quit
			Menu();
			// gets the menu option input from the user
			cout << "Enter (1 for drivers, 2 for passengers, 3 for rides, 4 to load, and 5 to QUIT)" << endl;
			cout << " ----> " ; 
			cin  >> menuOption;
			
			
		}
		
		// if the menuOption is PASSENGER !!!!!!!!!!!!!!!!!!
		else if (menuOption == 2){
			PassengerMenu();
			// gets the menu option input from the user
			cout << "Enter (1 to add, 2 to find, 3 to print all, 4 to delete, 5 to save, and 6 to main menu)" << endl;
			cout << " ----> " ; 
			cin  >> actionOption;
			while (actionOption != 6){
				
				// if entityOption is passenger 
				if (actionOption == 1){
					
					
					// setting all the Passenger() fields
					
					// create the id and set it 
					cout << "Create Passenger ID (6 digits): ";
					cin  >> id;
					passenger.SetPassengerId(id);
					

					
					// assigning a ride id
					cout << "Assign a ride id: ";
					cin  >> ride_id;
					passenger.SetRideId(ride_id);
					
					
					// give a default rate for the passenger
					cout << "Rate the passenger (0 - 5): ";
					cin  >> rate;
					passenger.SetPassengerRating(rate);
					
					// enter the name of the passenger
					cout << "Enter the name of the passenger: ";
					cin  >> name;
					passenger.SetPassengerName(name);
					
					
					// enter the preferred payment type
					cout << "Enter the preferred payment type (cash or card): ";
					cin  >> payment_type;
					passenger.SetPaymentType(payment_type);
					

					
					// set the handicap
					cout << "Does the passenger have disability? (y for yes, n for no) : ";
					cin  >> handicap;
					if (handicap == 'y'){
						passenger.SetIsHandicapped(true);
					}else if (handicap == 'n'){
						passenger.SetIsHandicapped(false);
					}
					
					// set the hasPets
					
					cout << "Does the passenger have pets? (y for yes, n for no) : ";
					cin  >> pets;
					if (pets == 'y'){
						passenger.SetHasPets(true);
					}else if (pets == 'n'){
						passenger.SetHasPets(false);
					}

	
					passengers.Add(passenger);
					cout << endl;
					cout << "Passenger has been successfully added!" << endl;
					
					
					PassengerMenu();
					// gets the menu option input from the user
					cout << "Enter (1 to add, 2 to find, 3 to print all, 4 to delete, 5 to save, and 6 to main menu)" << endl;
					cout << " ----> " ; 
					cin  >> actionOption;
					
				}
				
				// find the passenger info according to its id
				else if (actionOption == 2){
					
					cout << "Enter the Passenger ID: ";
					cin  >> id;
					
					cout << "Passenger with ID: " << id << " has been found! " << endl;
					cout << "INFO: " << endl;
					passengers.Find(id);
					
					PassengerMenu();
					// gets the menu option input from the user
					cout << "Enter (1 to add, 2 to find, 3 to print all, 4 to delete, 5 to save, and 6 to main menu)" << endl;
					cout << " ----> " ; 
					cin  >> actionOption;
					
				}
				// prints all the drivers
				else if (actionOption == 3){
					
					
					passengers.PrintInfo();
					
					PassengerMenu();
					// gets the menu option input from the user
					cout << "Enter (1 to add, 2 to find, 3 to print all, 4 to delete, 5 to save, and 6 to main menu)" << endl;
					cout << " ----> " ; 
					cin  >> actionOption;
					
					
					
				}
				
				// delete the driver according to its id
				else if (actionOption == 4){
					cout << "Enter the Passenger ID: ";
					cin  >> id;
					passengers.Delete(id);
					
					cout << "Passenger with ID: " << id << " has been deleted! " << endl;
					
					PassengerMenu();
					// gets the menu option input from the user
					cout << "Enter (1 to add, 2 to find, 3 to print all, 4 to delete, 5 to save, and 6 to main menu)" << endl;
					cout << " ----> " ; 
					cin  >> actionOption;
				}
				
				else if (actionOption == 5){
					passengers.Save();
					cout << "Passengers data is saved successfully!" << endl;
					
					PassengerMenu();
					// gets the menu option input from the user
					cout << "Enter (1 to add, 2 to find, 3 to print all, 4 to delete, 5 to save, and 6 to main menu)" << endl;
					cout << " ----> " ; 
					cin  >> actionOption;
				}
				
				// this if statement should throw the loop to the main menu where the user chooses drivers, passenger and etc.
				else if (actionOption == 6){
					break;
				}
			}
			
			// menu that runs until quit
			Menu();
			// gets the menu option input from the user
			cout << "Enter (1 for drivers, 2 for passengers, 3 for rides, 4 to load, and 5 to QUIT)" << endl;
			cout << " ----> " ; 
			cin  >> menuOption;
			
			
		
		}
		
		// if the menuOption is RIDE !!!!!!!!!!!!!!!!!!
		else if (menuOption == 3){
						
			RideMenu();
			// gets the menu option input from the user
			cout << "Enter (1 to add, 2 to find, 3 to print all, 4 to delete, 5 to save, and 6 to main menu)" << endl;
			cout << " ----> " ; 
			cin  >> actionOption;
			while (actionOption != 6){
				
				// if entityOption is rides
				if (actionOption == 1){
					
					
					// setting all the Ride() fields
					
					// creating the ride id 
					cout << "Create a Ride ID (6 digits): ";
					cin  >> id;
					ride.SetRideID(id);
					

					
					// specifying the pickup location
					cout << "Enter a pickup location: ";
					cin  >> location;
					ride.SetPickupLocation(location);
					
					
					// specifying the dropoff location
					cout << "Enter a dropoff location: ";
					cin  >> location;
					ride.SetDropLocation(location);
					
					//FIXME: (current time) seconds has passed since 00:00:00 GMT, Jan 1, 1970
					// specify the pick up time for this ride
					cout << "Enter the pickup time: ";
					cin  >> current_time;
					ride.SetPickupTime(current_time);
					
					//FIXME: (current time) seconds has passed since 00:00:00 GMT, Jan 1, 1970
					// specify the drop off time for this ride
					cout << "Enter the dropoff time: ";
					cin  >> current_time;
					ride.SetDropTime(current_time);
					
					// FIXME: the passenger size should be equal to the size driver bus can have
					// specify how many passengers the ride has
					cout << "Passengers on the ride: ";
					cin  >> party_size;
					ride.SetPartySize(party_size);
					
					// FIXME: if the passenger took the ride has pets it should be accordingly
					// set hasPets()
					cout << "Has Pets? (y for yes, n for no) : ";
					cin  >> pets;
					if (pets == 'y'){
						ride.SetHasPets(true);
					}else if (pets == 'n'){
						ride.SetHasPets(false);
					}
					
					// FIXME: the status should change according to the driver assigned to the ride
					// specify the status. Active or not active
					cout << "Status: ";
					cin  >> notes;
					ride.SetStatus(notes);


					// FIXME: the rating is set by the passenger
					// specify the status. Active or not active
					cout << "Rating (0-5): ";
					cin  >> rate;
					ride.SetCustomerRating(rate);
	
					rides.Add(ride);
					cout << endl;
					cout << "Ride has been successfully added!" << endl;
					
					
					RideMenu();
					// gets the menu option input from the user
					cout << "Enter (1 to add, 2 to find, 3 to print all, 4 to delete, 5 to save, and 6 to main menu)" << endl;
					cout << " ----> " ; 
					cin  >> actionOption;
					
				}
				
				// find the ride info according to its id
				else if (actionOption == 2){
					
					cout << "Enter the Ride ID: ";
					cin  >> id;
					
					cout << "Ride with ID: " << id << " has been found! " << endl;
					cout << "INFO: " << endl;
					rides.Find(id);
					
					RideMenu();
					// gets the menu option input from the user
					cout << "Enter (1 to add, 2 to find, 3 to print all, 4 to delete, 5 to save, and 6 to main menu)" << endl;
					cout << " ----> " ; 
					cin  >> actionOption;
					
				}
				// prints all the rides
				else if (actionOption == 3){
					
					
					rides.PrintInfo();
					
					RideMenu();
					// gets the menu option input from the user
					cout << "Enter (1 to add, 2 to find, 3 to print all, 4 to delete, 5 to save, and 6 to main menu)" << endl;
					cout << " ----> " ; 
					cin  >> actionOption;
					
					
					
				}
				
				// delete the ride according to its id
				else if (actionOption == 4){
					cout << "Enter the Ride ID: ";
					cin  >> id;
					rides.Delete(id);
					
					cout << "Passenger with ID: " << id << " has been deleted! " << endl;
					
					RideMenu();
					// gets the menu option input from the user
					cout << "Enter (1 to add, 2 to find, 3 to print all, 4 to delete, 5 to save, and 6 to main menu)" << endl;
					cout << " ----> " ; 
					cin  >> actionOption;
				}
				
				else if (actionOption == 5){
					rides.Save();
					cout << "Rides data is saved successfully!" << endl;
					
					RideMenu();
					// gets the menu option input from the user
					cout << "Enter (1 to add, 2 to find, 3 to print all, 4 to delete, 5 to save, and 6 to main menu)" << endl;
					cout << " ----> " ; 
					cin  >> actionOption;
				}
				
				// this if statement should throw the loop to the main menu where the user chooses drivers, passenger and etc.
				else if (actionOption == 6){
					break;
				}
			}
			
			// menu that runs until quit
			Menu();
			// gets the menu option input from the user
			cout << "Enter (1 for drivers, 2 for passengers, 3 for rides, 4 to load, and 5 to QUIT)" << endl;
			cout << " ----> " ; 
			cin  >> menuOption;
			
			
		
		}
		
		else if (menuOption == 4){
			cout << "All the data is loading..." << endl;
			drivers.Load();
			passengers.Load();
			rides.Load();
			cout << "All the data has been successfully loaded!" << endl;
			
			// deletes everything from the files so the new info and updates can be saved
			ClearEverything();
			
			// menu that runs until quit
			Menu();
			// gets the menu option input from the user
			cout << "Enter (1 for drivers, 2 for passengers, 3 for rides, 4 to load, and 5 to QUIT)" << endl;
			cout << " ----> " ; 
			cin  >> menuOption;
			
		}
		
		else if (menuOption == 5){
			cout << "Thanks for using our program! See you soon :) " << endl;
			break;
		}
		
		else {
			
			cout << "Something went wrong! " 	<< endl;
			cout << "Restarting the program... " << endl;
			
			// menu that runs until quit
			Menu();
			// gets the menu option input from the user
			cout << "Enter (1 for drivers, 2 for passengers, 3 for rides, 4 to load, and 5 to QUIT)" << endl;
			cout << " ----> " ; 
			cin  >> menuOption;
		}
			
	  
		
	}


	
	
	return 0;
}