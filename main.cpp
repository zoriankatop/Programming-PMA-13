
#include <iostream>
using namespace std;

int main() {
    double h;
    cout << "Enter h: ";
    cin >> h;

    if (h <= 0 || h > 4) {
        cout << "Error";
        return 0;
    }

    int n = 0;
    double maxY = 49, minY = 49;
    double maxX = 0, minX = 0;

    cout << "x       y\n";

    for (double x = 0; x <= 4.000001; x += h) {
        double y = x*x*x - x*x - 19*x + 49;

        cout << x << "       " << y << "\n";
        n++;

        if (y > maxY) {
            maxY = y;
            maxX = x;
        }

        if (y < minY) {
            minY = y;
            minX = x;
        }
    }

    cout << "Points: " << n << "\n";
    cout << "Max: " << maxY << " at x = " << maxX << "\n";
    cout << "Min: " << minY << " at x = " << minX << "\n";

    return 0;
}
