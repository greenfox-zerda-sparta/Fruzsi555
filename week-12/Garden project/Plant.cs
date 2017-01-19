using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ExamJavaBasicWithCSharp
{
    public abstract class Plant
    {
        protected string type;
        protected string colour;
        protected double currentwateramount;
        protected double minwateramount;
        protected double canabsorb;
        protected static int counter = 0;

        public Plant()
        {
            counter++;
        }

        public bool NeedsWater()
        {
            return currentwateramount <= minwateramount;
        }

        public double Water(double wateramount)
        {
            return currentwateramount += (wateramount / counter) * canabsorb;
        }

        public string Colour
        {
            get { return colour; }
        }

        public string Type
        {
            get { return type; }
        }
    }
}
