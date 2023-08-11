#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <algorithm>
int main() {
    std::string text;
    std::getline(std::cin,text);
    std::istringstream iss(text);
    std::map<std::string, int> wordFrequency;
    std::string word;

    while (iss >> word) {
        // Lo?i b? ký t? d?c bi?t nhu d?u ch?m, d?u ph?y, ...
        word.erase(std::remove_if(word.begin(), word.end(), ::ispunct), word.end());

        // Ð?i t?t c? ký t? sang ch? thu?ng d? d?m t? không phân bi?t ch? hoa ch? thu?ng
        std::transform(word.begin(), word.end(), word.begin(), ::tolower);

        // Ð?m s? l?n xu?t hi?n c?a t? và luu vào Map
        wordFrequency[word]++;
    }

    // In ra s? lu?ng t? và danh sách các t? kèm theo s? lu?ng xu?t hi?n
    std::cout << wordFrequency.size() << std::endl;
    for (const auto& pair : wordFrequency) {
        std::cout <<pair.first <<" "<< pair.second << std::endl;
    }

    return 0;
}

