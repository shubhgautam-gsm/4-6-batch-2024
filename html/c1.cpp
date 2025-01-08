#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string user = "bmw";
    vector<string> cars = {"ferari", "sizuki", "bmw", "odi"};

    // Find user's car
    auto it = find(cars.begin(), cars.end(), user);
    if(it != cars.end()) cout << "Found " << user << "\n";

    // Sort and print ascending
    sort(cars.begin(), cars.end());
    for(const auto& c : cars) cout << c << " ";
    cout << "\n";

    // Sort and print descending 
    sort(cars.rbegin(), cars.rend());
    for(const auto& c : cars) cout << c << " ";

    return 0;
}
