#include <iostream>
using namespace std;

void printEvenReverse(long long A[], int N) {
    if (N < 0) return;
    if (N % 2 == 0) cout << A[N] << " ";
    printEvenReverse(A, N - 1);
}

int main() {
    int N;
    cin >> N;

    long long A[1000];
    for (int i = 0; i < N; i++) cin >> A[i];

    printEvenReverse(A, N-1);
    return 0;
}
