using System;

class Program
{
    static void Main()
    {
        int n = 3000;
        int k = 2000;

        DateTime startTime = DateTime.Now;
        long result = BinomialDynamic(n, k);
        DateTime endTime = DateTime.Now;

        TimeSpan executionTime = endTime - startTime;

        Console.WriteLine($"C({n}, {k}) = {result}");
        Console.WriteLine($"Execution time: {executionTime.TotalSeconds} seconds.");
    }

    static long BinomialDynamic(int n, int k)
    {
        long[][] dpTable = new long[n + 1][];
        for (int i = 0; i <= n; i++)
        {
            dpTable[i] = new long[k + 1];
        }

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= Math.Min(i, k); j++)
            {
                if (j == 0 || j == i)
                {
                    dpTable[i][j] = 1;
                }
                else
                {
                    dpTable[i][j] = dpTable[i - 1][j - 1] + dpTable[i - 1][j];
                }
            }
        }

        return dpTable[n][k];
    }
}
