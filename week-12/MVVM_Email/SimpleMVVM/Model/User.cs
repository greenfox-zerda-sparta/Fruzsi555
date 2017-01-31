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
        private string date;
        private string subject;
        private string msg;

        public string Name
        {
            get { return name; }
            set
            {
                Set<string>("name", ref name, value);
            }
        }

        public string Date
        {
            get { return date; }
            set
            {
                Set<string>("date", ref date, value);
            }
        }

        public string Subject
        {
            get { return subject; }
            set
            {
                Set<string>("subject", ref subject, value);
            }
        }

        public string Msg
        {
            get { return msg; }
            set
            {
                Set<string>("msg", ref msg, value);
            }
        }

        public static ObservableCollection<User> GenerateDummyUsers()
        {
            var result = new ObservableCollection<User>();

            result.Add(new User() { Date = "08:30", Name = "Józsi", Subject = "this is it", Msg = "lknlksdnon" }); //empty message, no subject
            result.Add(new User() { Date = "02:40", Name = "Feri", Subject = "this is me", Msg = "kjbso" });
            result.Add(new User() { Date = "19:36", Name = "Laci", Subject = "this is you", Msg = "kjbijdfbib" });
            result.Add(new User() { Date = "14:56", Name = "Sanyi", Subject = "this is SANYI", Msg = "kjbodsjbf kbshofb" });

            return result;
        }
    }
}
