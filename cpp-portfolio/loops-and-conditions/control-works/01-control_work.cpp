#include <iostream>

int main() {
    int N;
    std::cin >> N;
    
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count5 = 1;
    int count6 = 0;
    int endNum = N % 10;
    int temp = N;
    
    while (temp > 0) {
        if (temp % 10 == 3) {
            count1++;
        }
        temp /= 10;
    }

    std::cout << count1 << std::endl;

    temp = N;

    while (temp > 0) {
    	if (temp % 10 == endNum) {
			count2++;
        }
        temp /= 10;    
    }

    std::cout << count2 << std::endl;

    temp = N;
    while (temp > 0) {
        if (temp % 2 == 0) {
            count3++;
        }
        temp /= 10;
    }

    std::cout << count3 << std::endl;

	temp = N;
    while (temp > 0) {
        if (temp % 10 > 5) {
            count4 += temp % 10;
        }
        temp /= 10;
    }

    std::cout << count4 << std::endl;

	temp = N;

    while (temp > 0) {
        if (temp % 10 > 7) {
        	count5 *= temp % 10;    
        }
        temp /= 10;
    }

    std::cout << count5 << std::endl;

	temp =N;

	while (temp > 0) {
        if (temp % 10 == 0 || temp % 10 == 5) {
            count6++;
        }
        temp /= 10;
    }

    std::cout << count6 << std::endl;
    
    return 0;
}