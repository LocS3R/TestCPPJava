#include <iostream>
#include <map>

int main() {
    int n;
    std::cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++)
    std::cin >> arr[i];

    std::map<int, int> frequencyMap;

    // Ð?m s? l?n xu?t hi?n c?a t?ng ph?n t? trong m?ng và luu vào Map
    for (int i = 0; i < n; ++i) {
        frequencyMap[arr[i]]++;
    }

    // In ra s? l?n xu?t hi?n c?a t?ng ph?n t? trong m?ng
    for (const auto& pair : frequencyMap) {
        std::cout << pair.first << " " << pair.second << std::endl;
    }

    return 0;
}

