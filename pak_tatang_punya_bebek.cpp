#include <iostream>

using namespace std;

int main()
{
    int N, M;

    cout << "Ekor bebek pak Tatang: ";
    cin >> N;

    cout << "Dibagi ke temannya: ";
    cin >> M;

    int jumlah_bebek_yang_diberikan = N / M;
    int Sisa_bebek = N % M;

    cout << "Jumlah bebek yang harus diberikan ke masing-masing teman: " << jumlah_bebek_yang_diberikan << endl;
    cout << "Jumlah sisanya: " << Sisa_bebek << endl;

    return 0;
}
