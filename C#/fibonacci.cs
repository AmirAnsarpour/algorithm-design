using System;
using System.Collections.Generic;

class Program
{
    static int FibonacciSeq(int number)
    {
        if (number <= 1)
        {
            return number;
        }
        else
        {
            return FibonacciSeq(number - 1) + FibonacciSeq(number - 2);
        }
    }

    static void Main()
    {
        Console.Write("Enter Your Fibonacci Number: ");
        int myInput = int.Parse(Console.ReadLine());

        List<int> myFibonacciList = new List<int>();

        for (int i = 0; i < myInput; i++)
        {
            myFibonacciList.Add(FibonacciSeq(i));
        }

        if (myInput <= 0)
        {
            Console.WriteLine("The Number is Wrong.");
        }
        else
        {
            Console.WriteLine($"Fibonacci Sequence: {string.Join(" ", myFibonacciList)}");
        }
    }
}

