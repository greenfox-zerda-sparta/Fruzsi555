using GalaSoft.MvvmLight;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SimpleMVVM
{
    public class User : ObservableObject
    {
        private string name;
        private byte age;

        public string Name
        {
            get { return name; }
            set
            {
                Set<string>("name", ref name, value);
            }
        }

        public byte Age
        {
            get { return age; }
            set
            {
                Set<byte>("age", ref age, value);
            }
        }

        public static ObservableCollection<User> GenerateDummyUsers()
        {
            var result = new ObservableCollection<User>();

            result.Add(new User() { Age = 23, Name = "Józsi" });
            result.Add(new User() { Age = 24, Name = "Feri" });
            result.Add(new User() { Age = 25, Name = "Laci" });
            result.Add(new User() { Age = 26, Name = "Sanyi" });

            return result;
        }
    }
}
