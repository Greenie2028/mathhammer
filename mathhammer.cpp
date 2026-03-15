/*
    TODO:
    [ ] Set up json files for units
    [ ] Manage units having leaders attached (possibly multiple leaders
      like overlord and plasmancer)
    [ ] Attaching non-character units together (ex. cryptothralls)
    [ ] Set up json parsing
    [ ] Set up units for testing
    [ ] Get simulation working
    - - Hits
    - - Wounds
    - - Saves
    - - Feel No Pain
    - - Dying models
    - Note: Will have to manage melta and necrodermis effects

    [ ] Optimize simulation for reasonable run time
    [ ] Get user input working
    [ ] Potentially: GUI
*/

#include <nlohmann/json.hpp>
using json = nlohmann::json;

#include <iostream>
using std::cout, std::cin, std::endl, std::cerr, std::getline;

#include <fstream>
using std::ifstream;

#include <vector>

#include <map>
using std::map;

#include <random>
using std::uniform_int_distribution;

std::mt19937 rng(std::random_device{}()); // Random number generator

map<int, int> roll_dice(int numDice, std::mt19937& rng) {
    // dist is an object that produces integers uniformly from 1-6
    uniform_int_distribution<int> dist(1, 6); 

    map<int, int> results = { // Key is die face, Value is num rolled
        {1, 0},
        {2, 0},
        {3, 0},
        {4, 0},
        {5, 0},
        {6, 0}
    };
    
    for (int i = 0; i < numDice; i++) {
        // Rolls numDice, tallying counts
        int roll = dist(rng);
        results[roll]++;
    }

    return results;
}

int hits() {
    // Count hits
}

int wounds() {
    // Count Wounds
    // Account for lethal hits
}

int saves_failed() {
    // How many saves failed
    // Devestating Wounds
    // Invuls
}

int feel_no_pain() {
    // Based off damage dealt
}


int main() {

}