using System;
using System.Linq;

class Program
{
    static int BinarySearch(int[] arr, int low, int high, int target)
    {
        if (high >= low)
        {
            int mid = low + (high - low) / 2;
            if (arr[mid] == target)
            {
                return mid;
            }
            else if (arr[mid] > target)
            {
                return BinarySearch(arr, low, mid - 1, target);
            }
            else if (arr[mid] < target)
            {
                return BinarySearch(arr, mid + 1, high, target);
            }
        }
        else
        {
            return -1;
        }
        return -1;
    }

    static void Main()
    {
        int[] orgList = Enumerable.Range(0, 9).Select(i => new Random().Next(100)).ToArray();
        Array.Sort(orgList);
        Console.WriteLine($"List: {string.Join(" ", orgList)}");

        Console.Write("Enter Your Target: ");
        int userTarget;
        if (int.TryParse(Console.ReadLine(), out userTarget))
        {
            int result = BinarySearch(orgList, 0, orgList.Length - 1, userTarget);

            if (result == -1)
            {
                Console.WriteLine($"Can't Find {userTarget} in List");
            }
            else
            {
                Console.WriteLine($"Find {userTarget}, index: {result}");
            }
        }
        else
        {
            Console.WriteLine("Invalid input. Please enter a valid integer.");
        }
    }
}
