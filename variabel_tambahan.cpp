#include <iostream>

using namespace std;

int main()
{
   int firstValue = 10;
   int secondValue = 8;

   // Tukar nilai kedua variabel menggunakan temp (variabel tambahan)
   int temp = firstValue;
   firstValue = secondValue;
   secondValue = temp;

   // Output penukaran kedua variabel dengan temp
   cout << "First Value: " << firstValue << endl;
   cout << "Second Value: " << secondValue << endl;

    return 0;
}
