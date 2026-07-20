#include <iostream>
#include <string>
#include <algorithm>


int main()
{
    std::string line;
    std::getline(std::cin, line);

    if (line.empty()) {
    std::cout << "YES\n";
    return 0;
}

    int left = 0;
    int right = line.size() - 1;

    while(left <= right)
    {
        while(left <= right && line[right] == ' ' ) {right--;}
        while(left <= right && line[left] == ' ') {left++;}
        if(left >= right) { std::cout <<"YES\n"; return 0;}
        if(line[left] != line[right]) { std::cout << "NO\n"; return 0; }
        left++;
        right--;
    }

    std::cout <<"YES\n";

    return 0;
}
