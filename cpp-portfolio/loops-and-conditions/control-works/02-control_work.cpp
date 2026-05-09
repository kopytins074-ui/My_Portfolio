#include <iostream>
#include <iomanip>

int main() {
    int n;
    int stamina = 1000;
    double sumHeight = 0;     
    bool failed = false;
    int failLvl = 0;
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        double height;
        int complexity;
        std::cin >> height >> complexity;
        
        if (failed) {
            continue;
        }
        
        if (complexity == 10) {
            std::cout << "Уровень " << i + 1 << " слишком сложный. Пропускаем." << std::endl;
            continue;
        }
        
        int cost = complexity * 10;
        if (stamina < cost) {
            failed = true;
            failLvl = i + 1;
            continue;
        }
        
        stamina -= cost;
        sumHeight += height;
    }  
    
    std::cout << std::fixed << std::setprecision(2);
    
    if (!failed) {
        std::cout << "Поздравляем! Вы достигли вершины!" << std::endl;
        std::cout << "Общая высота: " << sumHeight << " м" << std::endl;
        std::cout << "Остаток выносливости: " << stamina << " единиц" << std::endl;
    } else {
        std::cout << "Восхождение прервано на уровне " << failLvl << "." << std::endl;
        std::cout << "Пройдено высоты: " << sumHeight << " м" << std::endl;
    }
    
    return 0;
}