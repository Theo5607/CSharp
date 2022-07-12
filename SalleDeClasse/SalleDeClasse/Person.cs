using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SalleDeClasse
{
    class Person
    {
        public int age;
        public Person(int constAge = 0)
        {
            age = constAge;
        }

        public void sayHello()
        {
            Console.WriteLine("Hello!");
        }
        public void setAge(int newAge)
        {
            age = newAge;
        }
    }

    class Student : Person
    {
        public void displayAge()
        {
            Console.WriteLine("I'm " + age + " years old.");
        }

        public void goToClass()
        {
            Console.WriteLine("I'm going to class.");
        }
    }

    class Teacher : Person
    {
        private string subject;

        public void Explain()
        {
            Console.WriteLine("Explaintion begins.");
        }
    }
}