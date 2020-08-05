output: main.o driver.o drivers.o passenger.o passengers.o ride.o rides.o basic.o economy.o group.o luxury.o 
	g++ main.o driver.o drivers.o passenger.o passengers.o ride.o rides.o basic.o economy.o group.o luxury.o -o output
	
main.o: main.cpp
	g++ -c main.cpp
	
driver.o: driver.cpp driver.h
	g++ -c driver.cpp
	
drivers.o: drivers.cpp drivers.h
	g++ -c drivers.cpp
	
passenger.o: passenger.cpp passenger.h
	g++ -c passenger.cpp
	
passengers.o: passengers.cpp passengers.h
	g++ -c passengers.cpp
	
ride.o: ride.cpp ride.h
	g++ -c ride.cpp
	
rides.o: rides.cpp rides.h
	g++ -c rides.cpp
	
basic.o: basic.cpp basic.h
	g++ -c basic.cpp
	
group.o: group.cpp group.h
	g++ -c group.cpp
	
economy.o: economy.cpp economy.h
	g++ -c economy.cpp
	
luxury.o: luxury.cpp luxury.h
	g++ -c luxury.cpp

clean: 
	rm *.o output
	
	