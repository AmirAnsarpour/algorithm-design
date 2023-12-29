// AmirAnsarpour
// 40022830117248
// https://github.com/AmirAnsarpour
// C++

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

void merge(std::vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> left_half(n1);
    std::vector<int> right_half(n2);

    for (int i = 0; i < n1; ++i)
        left_half[i] = arr[left + i];
    for (int j = 0; j < n2; ++j)
        right_half[j] = arr[mid + 1 + j];

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2) {
        if (left_half[i] <= right_half[j]) {
            arr[k] = left_half[i];
            ++i;
        } else {
            arr[k] = right_half[j];
            ++j;
        }
        ++k;
    }

    while (i < n1) {
        arr[k] = left_half[i];
        ++i;
        ++k;
    }

    while (j < n2) {
        arr[k] = right_half[j];
        ++j;
        ++k;
    }
}

void merge_sort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);

        merge(arr, left, mid, right);
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
    merge_sort(input_list, 0, input_list.size() - 1);
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
