#include <iostream>
using namespace std;
#include "NumberSet.h"

void numberSetAdd(NumberSet& set, Number num) {
    if(set.count == maxSize) { //checking count to ensure that there is space left in the array
        cout << "ERROR: Cannot add number:" << num << " as set exceeds max size.\n";
        return;
    } else {
        set.items[set.count] = num; //set the next item in the array to contain num
        (set.count)++; // increment count
    }
}


void numberSetRemove(NumberSet& set, Number num) {
    for(int i = 0; i < set.count; i++) { //go through the array intil first instance of num is found
        if(set.items[i] == num) {
            (set.count)--; // count has reduced as we are about to remove number
            for(int j = i; j < set.count; j++) { 
                set.items[j] = set.items[j + 1]; //remove number and shift array to fill empty space
            }
            return;
        }
    }
    
    //message displayed if no match in array 
    cout << "ERROR: The number:" << num << " does not match any number in array.\n";
    return;
}


int numberSetCountGreaterThan(NumberSet& set, Number num) {
    int counter = 0;
    for(int i = 0; i < set.count; i++) {
        if(set.items[i] > num) {
            counter++; //counter increments everytime we find a number in array greater than num
        }
    }
    
    return counter;
}


int numberSetSumEvenOrOdd(NumberSet& set, Number num) {
    int sum = 0; 
    
    if(num % 2 == 0) { //num is even
        for(int i = 0; i < set.count; i++) {
           if (set.items[i] % 2 == 0) {
               sum += set.items[i]; // will contain sum of all even numbers
           } 
        }
    } else { //num is odd
        for(int i = 0; i < set.count; i++) {
           if (set.items[i] % 2 != 0) {
               sum += set.items[i]; // will contain sum of all odd numbers
           } 
        }
    }
    
    return sum;
}


NumberSet newNumberSet() {
    NumberSet newSet;
    newSet.count = 0; // initialise count of numberset to zero
    
    return newSet;
}