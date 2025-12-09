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

    }



    cout << "++++MILESTONE 1 TEST++++" << endl;
    cout << "Total airports foind : " << airportTraffic.size() << endl;

    for (map<string, int>::iterator i = airportTraffic.begin(); i != airportTraffic.end(); ++i) {
    cout << i->first << ": " << i->second << endl;
    }
    cout << endl;


    

}