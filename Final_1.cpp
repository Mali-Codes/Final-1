#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

int main() {

    ifstream inFile("Flights.txt");

    if (!inFile) {
        cerr << "not able to open file" << endl;
        return 1;
    }

        // Milestone 1: Build the map

    map<string, int> airportTraffic;
     
    string origin, destination;

    while (inFile >> origin >> destination) {
        airportTraffic[origin]++;
        airportTraffic[destination]++;
    }


    
    

}