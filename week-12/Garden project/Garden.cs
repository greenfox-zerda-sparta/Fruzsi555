using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ExamJavaBasicWithCSharp
{
    public class Garden
    {
        private List<Plant> plants;

        public Garden()
        {
            plants = new List<Plant>();
        }

        public void AddToGarden() { 

            plants.Add(new Flower("yellow"));
            plants.Add(new Flower("blue"));
            plants.Add(new Tree("purple"));
            plants.Add(new Tree("orange"));
        }

        public void Watering(int wateramount)
        {
            Console.WriteLine("Watering with " + wateramount.ToString());
            foreach (Plant plant in plants)
            {
                plant.Water(wateramount);
                if (plant.NeedsWater())
                {
                    Console.WriteLine("The " + plant.Colour + " " + plant.Type + " needs water.");
                }
                else
                {
                    Console.WriteLine("The " + plant.Colour + " " + plant.Type + " doesn't need water.");
                }
            }
            Console.WriteLine();
        }
    }
}
