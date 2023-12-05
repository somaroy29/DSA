using System;

class Program
{
    static void Main()
    {
        Console.WriteLine("**Convert Column Letter to numeric values**");
        int result1 = AlphanumericToNumeric("A");
        Console.WriteLine("A = " + result1);

        int result2 = AlphanumericToNumeric("AA");
        Console.WriteLine("AA = " + result2);

        int result3 = AlphanumericToNumeric("zz");
        Console.WriteLine("zz = " + result3);
        Console.WriteLine();
        Console.WriteLine("**Convert numeric values to Column Letter**");

        string result4 = NumericToAlphanumeric(1);
        Console.WriteLine("1 = " + result4);

        string result5 = NumericToAlphanumeric(27);
        Console.WriteLine("27 = " + result5);

        string result6 = NumericToAlphanumeric(676);
        Console.WriteLine("676 = " + result6);
    }

//PART 1 :  Excel Sheet Column Letter to Column Number
    static int AlphanumericToNumeric(string alphanumeric)
    {
        int result = 0;
        foreach (char c in alphanumeric)
        {
            result = result * 26 + (Char.ToUpper(c) - 'A' + 1);
        }
        return result;
    }

//PART 2 :  Excel Sheet Column Number to Column Letter
    static string NumericToAlphanumeric(int numeric)
    {
        string result = "";
        while (numeric > 0)
        {
            int remainder = (numeric - 1) % 26;
            result = (char)('A' + remainder) + result;
            numeric = (numeric - 1) / 26;
        }
        return result;
    }
}