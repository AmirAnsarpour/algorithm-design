#include <iostream>
#include <vector>
#include <algorithm>

int binarySearch(const std::vector<int>& arr, int low, int high, int target) {
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            return binarySearch(arr, low, mid - 1, target);
        } else {
            return binarySearch(arr, mid + 1, high, target);
        }
    } else {
        return -1;
    }
}

int main() {
    std::vector<int> orgList(9);
    for (int i = 0; i < 9; ++i) {
        orgList[i] = rand() % 100;
    }
    std::sort(orgList.begin(), orgList.end());
    std::cout << "List: ";
    for (int num : orgList) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    int userTarget;
    std::cout << "Enter Your Target: ";
    std::cin >> userTarget;

    int result = binarySearch(orgList, 0, orgList.size() - 1, userTarget);

    if (result == -1) {
        std::cout << "Can't Find " << userTarget << " in List" << std::endl;
    } else {
        std::cout << "Find " << userTarget << ", index: " << result << std::endl;
    }

    return 0;
}
