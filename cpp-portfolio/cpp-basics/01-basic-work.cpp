#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double r, h, d;
    string strName;
    cin >> r;
    cin >> h;
    cin >> d;
    cin >> strName;
    
	double p = 3.14159;
    double V = p * pow(r, 2) * h;
    cout << fixed << setprecision(2);
    
    int bottle = V / d;

    cout << "Объём бочки: " << V << ", фирмы: " << strName << endl;
    cout << "Количество бутылок: " << bottle << endl;
    
    return 0;    
}