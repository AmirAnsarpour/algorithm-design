import random


def binary_search(arr, low, high, target):
    if high >= low:
        mid = low + (high - low) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] > target:
            return binary_search(arr, low, mid - 1, target)
        elif arr[mid] < target:
            return binary_search(arr, mid + 1, high, target)
    else:
        return -1


org_list = [random.randint(0, 99) for i in range(9)]
org_list.sort()
print(f"List: {org_list}")
user_target = int(input("Enter Your Target: "))

result = binary_search(org_list, 0, len(org_list) - 1, user_target)

if result == -1:
    print(f"Can't Find {user_target} in List")
else:
    print(f"Find {user_target}, index: {result}")
