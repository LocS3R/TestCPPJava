#include <iostream>
#include <map>

void findPairsWithSum(const int arr[], int n, int targetSum) {
    std::map<int, int> numFrequency;

    for (int i = 0; i < n; ++i) {
        int complement = targetSum - arr[i];

        if (numFrequency.find(complement) != numFrequency.end()) {
            std::cout << complement << " " << arr[i] << std::endl;
        }

        numFrequency[arr[i]]++;
    }
}

int main() {
    int n;
    std::cin >> n;
    int arr[n];
    for(int i = 0; i < n;i++){
    	std::cin >> arr[i];
	}
    int targetSum;
	std::cin >> targetSum;
    findPairsWithSum(arr, n, targetSum);
    return 0;
}

