#include <iostream>
#include<cstring>
#include <stdio.h>
#include <string>
#include <thread>
#include <chrono>

int main() {

    int target = 100;
    int i = 0;

    while(i < target) {
        std::cout << "\r[" << std::string(i, '#') << std::string(target - i - 1, '_') << "] (" << std::to_string(i + 1) << "%)";
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
        i++;
    }
    return 0;
}