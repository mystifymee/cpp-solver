#include <iostream>
#include <string>
#include <cctype>


 int main()
 {
    std::string password;
    std::cin >> password;

    bool isUp = false;
    bool isLow = false;
    bool isNum = false;
    bool isOther = false;

    if(password.length() < 8 && password.length() > 14) {
        std::cout << "NO\n";
        return 0;
    }



    for(size_t i = 0; i < password.length(); i++)
    {
        if(password[i] < 33 && password[i] > 126) {
            std::cout <<"NO\n";
            return 0;
        }

        if(std::isupper(password[i])) { isUp = true; continue;}
        if(std::islower(password[i])) { isLow = true; continue;}
        if(std::isdigit(password[i])) { isNum = true; continue;}
        isOther = true;
    
    }

    size_t sum = isUp + isLow + isNum + isOther;

    if(sum < 3)
    {
        std::cout << "NO\n";
        return 0;
    }

    std::cout <<"YES\n";
    return 0;

 }