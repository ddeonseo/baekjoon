#include <iostream>

int main() {
    int hour, minute, time;
    std::cin >> hour >> minute >> time;

    hour += (minute + time) / 60;
    hour = hour % 24;
    minute = (minute + time) % 60;

    std::cout << hour << " " << minute;

    return 0;
}
