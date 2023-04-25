#include <iostream>
#include <windows.h>

int main() {
    int seconds;
    std::cout << "Enter the number of seconds to wait: ";
    std::cin >> seconds;

    std::cout << "Waiting for " << seconds << " seconds..." << std::endl;

    for (int i = seconds; i >= 0; i--) {
        std::cout << "Time remaining: " << i << " seconds \r";
        std::cout.flush();
        Sleep(1000);
    }

    std::cout << "Hibernating the PC..." << std::endl;
    system("shutdown /h");

    return 0;
}
