function binarySearch(arr, low, high, target) {
    if (high >= low) {
        let mid = low + Math.floor((high - low) / 2);
        if (arr[mid] === target) {
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

let orgList = Array.from({ length: 9 }, () => Math.floor(Math.random() * 100));
orgList.sort((a, b) => a - b);
console.log(`List: ${orgList}`);

let userTarget = parseInt(prompt("Enter Your Target: "));

let result = binarySearch(orgList, 0, orgList.length - 1, userTarget);

if (result === -1) {
    console.log(`Can't Find ${userTarget} in List`);
} else {
    console.log(`Find ${userTarget}, index: ${result}`);
}