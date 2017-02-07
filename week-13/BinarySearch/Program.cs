using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BinarySearch
{
    class Program
    {
        static void Main(string[] args)
        {

            int[] numbers = { 2, 93, 6, 8, 17, 27, 92, 115 };
            Array.Sort(numbers);
            int target = 17;
            Console.WriteLine(foundTargetNumber(numbers, target));
        }

        public static bool foundTargetNumber(int[] array, int target)
        {
            int mid = 0, lower = 0, higher = array.Length - 1;
            bool found = false;
            while (!found && lower <= higher)
            {
                mid = (lower + higher) / 2;
                if (target == array[mid])
                    found = true;
                else
                {
                    if (target > array[mid])
                    {
                        lower = mid + 1;
                    }
                    if (target < array[mid])
                    {
                        higher = mid - 1;
                    }
                }
            }
            return found;
        }
    }
}
