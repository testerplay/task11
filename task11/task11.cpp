#include <iostream>
#include <Windows.h>

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int N;
    std::cout << "Введіть кількість секунд N: ";
    std::cin >> N;

    // Знайти кількість секунд, що пройшли з початку останньої хвилини
    int seconds_in_last_minute = N % 60;

    std::cout << "Кількість секунд, що пройшли з початку останньої хвилини: " << seconds_in_last_minute << std::endl;

    return 0;
}
