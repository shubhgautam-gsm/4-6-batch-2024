#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // User input and car list
    string user = "hundai";
    vector<string> cars = {"ferari", "sizuki", "bmw", "odi"};

    // Search for user car in the list
    for (size_t i = 0; i < cars.size(); i++) {
        cout << "Comparing: " << cars[i] << "\n";
        if (cars[i] == user) {
            cout << "Match found: " << cars[i] << "\n";
            cout << "Match at location: " << i+1 << "\n";
            break;
        }
       
    }

    // // Sort cars in ascending order
    // sort(cars.begin(), cars.end());
    // cout << "\nCars in ascending order:\n";
    // for (const auto& car : cars) {
    //     cout << car << "\n";
    // }

    // // Sort cars in descending order
    // sort(cars.begin(), cars.end(), greater<string>());
    // cout << "\nCars in descending order:\n";
    // for (const auto& car : cars) {
    //     cout << car << "\n";
    // }

    return 0;
}


// __DATE__

// 23 apna
// 24 harry
// 25 wscube



//  c++    3 apna
//         2 harry
//         1 wscube

//         view high (100m  && 10year) || (100k &&  1sec & watch) ranking 

//         2 hour 7 rank avg 30min
//         2 hour 2k update  watch time
