#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double R, r, h, d;
    string name;
    cin >> R >> r >> h >> d;
    cin.ignore();
    getline(cin, name);
    double p = 3.14159;
	double V = (1.0 / 3.0) * p * h * (R * R + R * r + r * r);
    double l = sqrt(h * h + (R - r) * (R - r));
    double S = p * (R + r) * l;
    long long palat = (long long)(S / d);
    
    cout << fixed << setprecision(2);
    cout << "Горный склон:" << endl;
    cout << "- Объём: " << V << endl;
    cout << "- Площадь поверхности: " << S << endl;
    cout << "- Количество палаток: " << palat << endl;
    cout << "- Гора: " << name << endl;
    
    return 0;
}