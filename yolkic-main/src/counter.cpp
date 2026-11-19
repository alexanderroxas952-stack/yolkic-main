#include "vex.h"
#include "counter.h"

// Function to count the number of eggs (FAULTY, PLEASE REWRITE)
void countEggs(int& eggCount) {

    while (!counterBumper.pressing()) {}
    while (counterBumper.pressing()) {}

    Brain.Screen.print("%d", eggCount);

    eggCount++;
}

// Function to check if all eggs have been cracked
bool allEggsCracked(int eggCount) {

    // Logic to determine if all eggs have been cracked
    if (eggCount == 0) {
        return true;
    } else {
        return false;
    }
}