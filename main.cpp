#include <iostream>
#include <cmath>
using namespace std;

double machA(int alpha) {
    return pow(10, -4) * pow(2, alpha);
}

double machB(int beta) {
    return pow(10, -6) * pow(2, beta);
}

double machC(int gamma) {
    return pow(10, -2) * pow(gamma, 3);
}

int main() {
    int test[] = {10, 15, 20, 30, 45};
    int tsize = sizeof(test);

    for (int i = 0; i < tsize; i++) {
        int size = test[i];

        double timeAlpha = machA(size);
        double timeBeta = machB(size);
        double timeGamma = machC(size);

        cout << "For size = " << size << ":" << endl;
        cout << "Machine A: " << timeAlpha << " seconds" << endl;
        cout << "Machine B: " << timeBeta << " seconds" << endl;
        cout << "Machine C: " << timeGamma << " seconds" << endl;

        if (timeAlpha < timeBeta && timeAlpha < timeGamma) {
            cout << "Machine A takes the least time." << endl;
        } else if (timeBeta < timeAlpha && timeBeta < timeGamma) {
            cout << "Machine B takes the least time." << endl;
        } else {
            cout << "Machine C takes the least time." << endl;
        }

        cout << endl;
    }

    return 0;
}
