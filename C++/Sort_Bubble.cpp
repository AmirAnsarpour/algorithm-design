// AmirAnsarpour
// 40022830117248
// https://github.com/AmirAnsarpour
// C++

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

void bubble_sort(std::vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n; ++i) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

int main() {
    std::vector<int> input_list;
    srand(time(0));

    for (int i = 0; i < 20; ++i) {
        input_list.push_back(rand() % 1000 + 1);
    }

    std::cout << "Original list: ";
    for (int num : input_list) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    clock_t start_time = clock();
    bubble_sort(input_list);
    clock_t end_time = clock();

    double execution_time = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;

    std::cout << "Sorted list: ";
    for (int num : input_list) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Execution time: " << execution_time << " seconds." << std::endl;

    return 0;
}