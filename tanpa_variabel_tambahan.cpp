#include <iostream>

using namespace std;

int main()
{
    int firstValue = 10;
    int secondValue = 8;

    // Tukar kedua variabel tanpa temp (tambahan variabel)
    firstValue = firstValue + secondValue;
    secondValue = firstValue - secondValue;
    firstValue = firstValue - secondValue;

    // Output penukaran kedua variabel tanpa temp
    cout << "First Value: " << firstValue << endl;
    cout << "Second Value: " << secondValue << endl;

    return 0;
}
