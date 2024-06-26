#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>


using namespace std;

int main(void)
{
	double x1, y1, x2, y2, x3, y3;

	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	double s, centerX, centerY, answerX, answerY;
	s = (fabs(x1 * y2 + x2 * y3 + x3 * y1 - x2 * y1 - x3 * y2 - x1 * y3)) * (0.5);;

	centerX = (x1 + x2 + x3) * (1.0 / 3.0);
	centerY = (y1 + y2 + y3) * (1.0 / 3.0);

	answerX = centerX * 2 * M_PI * s;
	answerY = centerY * 2 * M_PI * s;

	cout.precision(20);
	cout << answerY << " " << answerX << endl;

}