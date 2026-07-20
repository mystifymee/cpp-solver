#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int countDigits(const std::string& s){
    int count = 0;
    for(char c : s){
        if(c >= '0' && c <= '9'){
            count++;
        }
    }
    return count;
}

bool isGreater(const std::string& a, const std::string& b)
{
    if(countDigits(a) != countDigits(b))
    {
       return countDigits(a) > countDigits(b);
    }

    if(a.length() != b.length()){
    return a.length() < b.length();
    }
    return false;
}


void quickSort(std::vector<std::string>& arr, size_t left, size_t right) {
    if(left >= right) {
        return;
    }


    size_t i = left;
    size_t j = right;

    std::string pivot = arr[(left+right) / 2];

    while(i <= j) {
        while(isGreater(arr[i],pivot)) {
            i++;
        }

        while(isGreater(pivot, arr[j])){
            j--;
        }

        if(i<=j) {
            std::swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    if(left < j){
        quickSort(arr, left, j);
    }

    if(right > i){
        quickSort(arr, i, right);
    }
}


int main()
{

    std::vector<std::string> passwords;

    std::string current_password;


    while(std::getline(std::cin, current_password)){
        passwords.push_back(current_password);
    }

    if(!passwords.empty()){
        quickSort(passwords, 0, passwords.size() - 1);
    }


    for(size_t k = 0; k < passwords.size(); k++)
    {
        std::cout << passwords[k] << "\n";
    }

    return 0;
}