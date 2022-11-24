#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
    std::string str;
    getline(std::cin, str);

    int count = 1;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            count++;
        }
    }

    if (str[0] == ' ') {
        count--;
    }
    if (str[str.length()-1] == ' ') {
        count--;
    }

    std::cout << count << std::endl;
    
    return 0;
}
