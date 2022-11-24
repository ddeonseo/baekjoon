#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
    std::string str;
    std::cin >> str;

    int count = 0;
    int len = str.length();

    for (int i = 0; i < len ; i++) {
        char ch = str[i];

        if (ch == 'c' && i < len - 1) {
            if (str[i+1] == '=' || str[i+1] == '-') {
                i++;
            }
        } else if (ch == 'd' && i < len - 1) {
            if (str[i+1] =='-') {
                i++;
            } else if(str[i+1] == 'z' && i < len - 2) {
                if (str[i+2] == '=') {
                    i += 2;
                }
            }
        } else if (ch == 'l' && i < len - 1) {
                if (str[i+1] == 'j') {
                    i++;
                }
            } else if (ch == 'n' && i < len - 1) {
                if (str[i+1] == 'j') {
                    i++;
                }
            } else if (ch == 's' && i < len - 1) {
                if (str[i+1] == '=') {
                    i++;
                }
            } else if (ch == 'z' && i < len - 1) {
                if (str[i+1] == '=') {
                    i++;
                }
            } 
        count++;
    }
    std::cout << count << std::endl;
    return 0;
}
