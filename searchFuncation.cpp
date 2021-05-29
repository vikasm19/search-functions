// Creating a function that searches a array for a given value;
// we will use functions but obvious;

#include <iostream>
using namespace std;

int search(int array[], int size, int searchKey) {
    int found = -1;
    for(int i = 0; i < size; i++) {
        if(array[i] == searchKey) {
            found = i;
        }
    }
    found = -1;
}

int main() {
    const int size = 4;
    int array[] = {345,75896,2,543};
    int searchKey = 543;
    
    // Printing the value from searchfunction;
    cout<<"Found at: "<<search(array, size, searchKey);
    return 0;
}