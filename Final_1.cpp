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
    cout << "++++ MILESTONE 2 ++++" << endl;

    int maxTraffic = 0;

    for (map<string, int>::iterator i = airportTraffic.begin(); i != airportTraffic.end(); ++i) {
        if (i -> second >= maxTraffic) {
            maxTraffic = i -> second;
            
        }
    }

    cout << "Busiest Airport: " << maxTraffic << " flights:" << endl;

    for (map<string, int>::iterator i = airportTraffic.begin(); i != airportTraffic.end(); ++i) {
        if (i->second == maxTraffic) {
            cout << i->first << ": " << i->second << endl;
        }
    }
    cout << endl;

    // Milestone 3: Find the airport in ranges
    int low = 6; 
    int high = 10;

    cout << "++++ MILESTONE 3 ++++" << endl;

    cout << "Airports with traffic between [" << low << "," << high << "]:" << endl;

        for (map<string, int>::iterator i = airportTraffic.begin(); i != airportTraffic.end(); ++i) {
            if (i->second >= low && i -> second <=high) {
                cout << i->first << ": " << i->second << endl;
            }
        }
        cout << endl;

    int low2 = 10;
    int high2 = 15;
         cout << "Airports with traffic between [" << low2 << "," << high2 << "]:" << endl;

        for (map<string, int>::iterator i = airportTraffic.begin(); i != airportTraffic.end(); ++i) {
            if (i->second >= low2 && i -> second <=high2) {
                cout << i->first << ": " << i->second << endl;
            }
        }
        cout << endl;

    return 0;

}