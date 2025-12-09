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
        if (airportTraffic.find(origin) == airportTraffic.end()) {
            airportTraffic[origin] = 0;
        }
            airportTraffic[origin]++;

        if (airportTraffic.find(destination) == airportTraffic.end()) {
            airportTraffic[destination] = 0;
        }
            airportTraffic[destination]++;
    }



    cout << "++++ MILESTONE 1 ++++" << endl;
    cout << "Total airports foind : " << airportTraffic.size() << endl;

    for (map<string, int>::iterator i = airportTraffic.begin(); i != airportTraffic.end(); ++i) {
    cout << i->first << ": " << i->second << endl;
    }
    cout << endl;



    // Milestone 2: Find the airport with the most traffic

    cout << "++++MILESTONE 2 TEST++++" << endl;

    int maxTraffic = 0;

    for (map<string, int>::iterator i = airportTraffic.begin(); i != airportTraffic.end(); ++i) {
        if (i -> second >= maxTraffic) {
            maxTraffic = i -> second;
            
        }
        cout << i -> first << " has the most traffic with " << maxTraffic << " flights" << endl;
    }




    

}