#include <cstdlib>
#include <iostream>

using namespace std;

void pilih();
void permutasi();
void kombinasi();

void pilih() {
    int n;
    cout << "\n1. Permutasi\n2. Kombinasi";
    cout << "\n\nPilihan anda: ";
    cin >> n;
    if (n == 1)
        permutasi();
    else if (n == 2)
        kombinasi();
    else
        cout << "\n\n**Selesai**\n\n";
}

void permutasi() {
    system("cls");
    int n, k;
    cout << "\nMasukkan nilai n=";
    cin >> n;
    cout << "Masukkan nilai r=";
    cin >> k;
    if (k > n) {
        cout << "\nNilai r harus kurang dari n";
        permutasi();
    }
    int p = n - k;
    int N = 1, K = 1;
    for (int i = 1; i <= n; i++)
        N *= i;
    for (int i = 1; i <= p; i++)
        K *= i;
    cout << "\nMaka hasil permutasi: " << N / K;
    cout << "\n\n";
    pilih();
}

void kombinasi() {
    system("cls");
    int n, k;
    cout << "\nMasukkan nilai n=";
    cin >> n;
    cout << "Masukkan nilai r=";
    cin >> k;
    if (k > n) {
        cout << "\nNilai r harus kurang dari n";
        kombinasi();
    }
    int p = n - k;
    int N = 1, K = 1, P = 1;
    for (int i = 1; i <= n; i++)
        N *= i;
    for (int i = 1; i <= k; i++)
        K *= i;
    for (int i = 1; i <= p; i++)
        P *= i;
    cout << "\n(n-r)! -> " << P;
    cout << "\nMaka hasil kombinasi: " << N / (K * P);
    cout << "\n\n";
    pilih();
}

int main(int argc, char *argv[]) {
    pilih();
    system("PAUSE");
    return EXIT_SUCCESS;
}

