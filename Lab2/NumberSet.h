typedef int Number;
const int maxSize = 10;

// defining the struct
struct NumberSet {
    Number items[maxSize];
    int count;
};

// function prototypes as described in assignment
void numberSetAdd(NumberSet& set, Number num);
void numberSetRemove(NumberSet& set, Number num);
int numberSetCountGreaterThan(NumberSet& set, Number num);
int numberSetSumEvenOrOdd(NumberSet& set, Number num);
NumberSet newNumberSet();
