#include <iostream>

int main(int argc, char const *argv[]) {
    int num[42] = {};

    int input;

    for(int i = 0; i < 10; i++) {
        std::cin >> input;
        num[input%42]++;
    }

    int result = 0;

    for(int x : num) {
        if (x != 0) {
            result++;
        }
    }

    std::cout << result;

    return 0;
}
