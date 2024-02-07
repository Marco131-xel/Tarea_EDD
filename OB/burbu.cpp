#include <iostream>
#include <vector>

void bubbleSort(std::vector<int> &arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < n - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                // intercambiar arr[j] y arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    bubbleSort(arr);
    std::cout << "Array ordenado: ";
    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
