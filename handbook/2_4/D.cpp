#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


void quickSort(std::vector<std::string>& arr, int left, int right) {

    if(left >= right) {
        return;
    }


    int i = left;
    int j = right;

    std::string pivot = arr[(left + right) / 2];


    while(i <= j) {
        while(arr[i] > pivot) {
            i++;
        }

        while (arr[j] < pivot) {
            j--;
        }

        if(i <= j){
            std::swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    if(left < j) {
        quickSort(arr, left, j);
    }

    if(i < right) {
        quickSort(arr, i, right);
    }
}


int main()
{
    std::vector<std::string> lines;
    std::string current_line;

    while(std::getline(std::cin, current_line))
    {
        lines.push_back(current_line);
    }

    if(!lines.empty()){
        quickSort(lines, 0, lines.size() - 1);
    }

    for(size_t k = 0; k < lines.size(); k++) {
        std::cout << lines[k] << "\n";
    }

    return 0;

    
}