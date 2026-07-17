#include <iostream>
#include <vector>

int main() {
    int all;
    std::cin >> all;

    std::vector<int> guests(all + 1);


    int num;
    for(int i = 0; i < all; i++){
        std::cin >> num;

        guests[num] = i + 1;
    }

    for(int i = 1; i <= all; i++){
        std::cout << guests[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
