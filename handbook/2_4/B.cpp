#include <iostream>
#include <string>

char LetterCategory( char letter)
{
    switch (letter){
    case 'b':
    case 'f':
    case 'p':
    case 'v':
        return '1';
    case 'c':
    case 'g':
    case 'j':
    case 'k':
    case 'q':
    case 's':
    case 'x':
    case 'z':
        return '2';
    case 'd':
    case 't':
        return '3';
    case 'l':
        return '4';
    case 'm':
    case 'n':
        return '5';
    case 'r':
        return '6';
    default:
        return '0';
    }
}



int main() {

    std::string text;
    std::cin >> text;

    std::string finalText;

    finalText = text[0];

    char temp;

    for(size_t i = 1; i < text.length(); i++) {
        temp = text[i];

        if(LetterCategory(temp) != '0' && LetterCategory(temp) != finalText.back())
        {
            if(LetterCategory(temp))
            finalText = finalText + LetterCategory(temp);
        }
    }

    if(finalText.length() < 4) {while(finalText.length() < 4) {finalText.push_back('0');}}
    if(finalText.length() > 4) {while(finalText.length() > 4) {finalText.pop_back();}}

    std::cout << finalText << "\n";

    return 0;

}