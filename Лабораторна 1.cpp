# include <iostream>
# include <cmath>
using namespace std;
int main() {
	double a = -3;
	double b = 2;
	double h, x, y;
	double x_min, x_max;
	double y_min, y_max;
	int count = 0;
	   cout << "Enter h:";
	cin >> h;
	if (h <= 0 || h > (b - a)) {
		cout << "error";
		return 1;
	}
		cout << "x\t\t y\n";
		for (x = a; x <= b; x += h) {

			double s = 0;
			for (int k = 1; k <= 5; k++) {

				s += cos(k * x) / (k * k);
			}
			y = sqrt(x + 3) / (x * x + 1) + s;
			cout << x << "\t\t" << y << endl;

			if (count == 0) {
				x_min = x_max = x;
				y_min = y_max = y;
			}
			if (y < y_min) {
				x_min = x;
				y_min = y;
			}
			if (y > y_max) {
				x_max = x;
				y_max = y;
			}
			count++;
		}
		cout << "Number of points: " << count << endl;

		cout << "Min y = " << y_min << "  when x = " << x_min << endl;

		cout << "Max y = " << y_max << "  when x = " << x_max << endl;


	return 0;
}
			
