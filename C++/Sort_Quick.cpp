// AmirAnsarpour
// 40022830117248
// https://github.com/AmirAnsarpour
// C++

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

std::vector<int> quick_sort(const std::vector<int>& arr) {
    if (arr.size() <= 1) {
        return arr;
    }

    int pivot = arr[arr.size() / 2];
    std::vector<int> left, middle, right;

    for (int x : arr) {
        if (x < pivot) {
            left.push_back(x);
        } else if (x == pivot) {
            middle.push_back(x);
        } else {
            right.push_back(x);
        }
    }

    std::vector<int> sorted_left = quick_sort(left);
    std::vector<int> sorted_right = quick_sort(right);

    std::vector<int> sorted_list;
    sorted_list.insert(sorted_list.end(), sorted_left.begin(), sorted_left.end());
    sorted_list.insert(sorted_list.end(), middle.begin(), middle.end());
    sorted_list.insert(sorted_list.end(), sorted_right.begin(), sorted_right.end());

    return sorted_list;
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
    std::vector<int> sorted_list = quick_sort(input_list);
    clock_t end_time = clock();

    double execution_time = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;

    std::cout << "Sorted list: ";
    for (int num : sorted_list) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Execution time: " << execution_time << " seconds." << std::endl;

    return 0;
}

