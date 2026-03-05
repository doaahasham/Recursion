#include <iostream>
using namespace std;

void printSpaces(int N) {
    if (N == 0) return;
    cout << " ";
    printSpaces(N - 1);
}
void printStars(int N) {
    if (N == 0) return;
    cout << "*";
    printStars(N - 1);
}
void printPyramid(int N, int rows = 1) {
    if (rows > N) return;

    printSpaces(rows);
    printStars(2*N*rows - 1);
    cout << endl;

    printPyramid(N, rows - 1);
}

int main() {
    int N;
    cin >> N;

    printPyramid(N);

    return 0;
}
