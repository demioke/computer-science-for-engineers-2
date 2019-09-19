#include <iostream>
using namespace std;
#include "NumberSet.h"

int main() {
    
    Number userValue, numGreaerThan, sum;
    NumberSet set = newNumberSet();
    
    cout << "Attempting to fill numberset with numbers 1 - 11" << endl;
    for(int i = 1; i <= 11; i++) {
        cout << "Adding number: " << i <<"...........\n";
        numberSetAdd(set, i);
    }
    
    cout << "\nPlease enter an integer value.\nUser-Value: ";
    cin >> userValue;
    
    cout << "\nNUMBERSET STATS\n";
    numGreaerThan = numberSetCountGreaterThan(set, userValue);
    cout << "Number of elements in number set greater than User-Value is: " << numGreaerThan << endl;
    sum = numberSetSumEvenOrOdd(set, userValue);
    cout << "Sum of elements in number set with same even/odd value as User-Value is: " << sum <<endl;
    
    cout << "\nAttempting to remove the number:2 from number set.....\n";
    numberSetRemove(set, 2);
    cout << "Attempting to remove the number:8 from number set.....\n";
    numberSetRemove(set, 8);
    cout << "Attempting to remove the number:15 from number set.....\n";
    numberSetRemove(set, 15);
    
    cout << "\nNUMBERSET STATS\n";
    numGreaerThan = numberSetCountGreaterThan(set, userValue);
    cout << "Number of elements in number set greater than User-Value is: " << numGreaerThan << endl;
    sum = numberSetSumEvenOrOdd(set, userValue);
    cout << "Sum of elements in number set with same even/odd value as User-Value is: " << sum <<endl;
    
    return 0;
}