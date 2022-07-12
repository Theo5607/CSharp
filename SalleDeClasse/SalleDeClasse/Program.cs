using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SalleDeClasse
{
    class Program
    {
        static void Main(string[] args)
        {
            Person person = new Person(25);
            person.sayHello();

            Student student = new Student();
            student.setAge(15);
            student.goToClass();

            Teacher teacher = new Teacher();
            teacher.setAge(40);
            teacher.sayHello();
            teacher.Explain();
        }
    }
}
