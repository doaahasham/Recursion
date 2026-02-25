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
void printInvertedPyramid(int N, int rows = 1) {
    if (rows > N) return;

    if (rows > 1) printSpaces(rows - 1);
    printStars(2*(N-rows+1) - 1);
    cout << endl;

    printInvertedPyramid(N, rows + 1);
}

int main() {
    int N;
    cin >> N;

    printInvertedPyramid(N);

    return 0;
}
