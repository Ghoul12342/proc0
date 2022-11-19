#include <iostream>
#include <ctime>
using namespace std;
//int sign(double x) {
//	if (x < 0) return -1;
//	if (x == 0) return 0;
//	if (x > 0) return 1;
//}
//
//int main() {
//Proc16
//	setlocale(LC_ALL, "russian");
//	double a, b;
//	cin >> a >> b;
//	cout << sign(a) + sign(b) << endl;
//	return 0;
//}
//Proc17
//int rootsCount(double A, double B, double C) {
//	double D = (B * B) - (4 * A * C);
//	if (D < 0) return 0;
//	if (D == 0) return 1;
//	if (D > 0) return 2;
//}
//int main() {
//	setlocale(LC_ALL, "russian");
//	double A, B, C;
//	cout << "введите A = " << "";
//	cin >> A;
//	cout << "введите B = " << "";
//	cin >> B;
//	cout << "введите C = " << "";
//	cin >> C;
//	cout << "D = " << rootsCount(A, B, C);
//	return 0;
//}
//Proc18
//double CircleS(double R) {
//		double S = (R * R) * 3.14;
//		return S;
//	}
//double CircleS1(double R1) {
//	double S1 = (R1 * R1) * 3.14;
//	return S1;
//}
//double CircleS2(double R2) {
//	double S2 = (R2 * R2) * 3.14;
//	return S2;
//}
//int main() {
//	setlocale(LC_ALL, "russian");
//	double R;
//	cout << "введите R = ";
//	cin >> R;
//	cout << "S = " << CircleS(R) << " ";
//	double R1;
//	cout << "введите R1 = ";
//	cin >> R1;
//	cout << "S1 = " << CircleS1(R1) << " ";
//	double R2;
//	cout << "введите R2 = ";
//	cin >> R2;
//	cout << "S2 = " << CircleS2(R2) << " ";
//	return 0;
//}
//19
//double RingS(double R1, double R2) {
//	double S1 = 3.14 * (R1 * R1);
//	double S2 = 3.14 * (R2 * R2);
//	double S = S1 - S2;
//	if (R1 > R2) {
//		return S;
//	}
//}
//double RingS1(double R11, double R21) {
//	double S11 = 3.14 * (R11 * R11);
//	double S21 = 3.14 * (R21 * R21);
//	double S1 = S11 - S21;
//	if (R11 - R21) {
//		return S1;
//	}
//}
//double RingS2(double R12, double R22) {
//	double S11 = 3.14 * (R12 * R12);
//	double S21 = 3.14 * (R22 * R22);
//	double S2 = S11 - S21;
//	if (R12 - R22) {
//		return S2;
//	}
//}
//int main() {
//	setlocale(LC_ALL, "russian");
//	double R1, R2, R11, R21, R12, R22;
//	//1
//	cout << "введите R1 = ";
//	cin >> R1;
//	cout << "введите R2 = ";
//	cin >> R2;
//	cout << "S = " << RingS(R1, R2) << endl;
//	//2
//	cout << "введите R11 = ";
//	cin >> R11;
//	cout << "введите R21 = ";
//	cin >> R21;
//	cout << "S1 = " << RingS1(R11, R21) << endl;
//	//3
//	cout << "введите R12 = ";
//	cin >> R12;
//	cout << "введите R22 = ";
//	cin >> R22;
//	cout << "S2 = " << RingS2(R12, R22) << endl;
//	return 0;
//}
//20
