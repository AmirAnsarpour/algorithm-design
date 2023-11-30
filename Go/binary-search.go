package main

import(
	"fmt"
	"math/rand"
	"sort"
)

func binarySearch(arr []int, low, high, target int) int{
	if high >= low{
		mid := low + (high-low)/2
		if arr[mid] == target{
			return mid
		} else if arr[mid] > target{
			return binarySearch(arr,low,mid-1,target)
		} else {
			return binarySearch(arr, mid+1, high,target)
		}
	} else{
		return -1
	}
}

func main(){
	orgList := make([]int, 9)
	for i := range orgList{
		orgList[i] = rand.Intn(100)
	}
	sort.Ints(orgList)
	fmt.Printf("List: %v\n", orgList)

	var userTarget int
	fmt.Print("Enter Your Target: ")
	fmt.Scan(&userTarget)

	result := binarySearch(orgList,0,len(orgList)-1, userTarget)

	if result == -1{
		fmt.Printf("Can't Find %d in List\n", userTarget)
	}else{
		fmt.Printf("Find %d, index: %d\n", userTarget, result)
	}
}