using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClientCshD
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Type objType = Type.GetTypeFromProgID("Lb3AutoSvr50322.MyMath50322.1");
            dynamic objMyMath = Activator.CreateInstance(objType);
            int res = objMyMath.Add(10, 20);
            int res1 = objMyMath.sub(10, 20);
            Console.WriteLine("Результат ПСВ 10+20 = " + res);
            Console.WriteLine("  Результат ПСВ 10-20 = " + res1);
            objMyMath.Param1 = 35;
            Console.WriteLine(objMyMath.Param1);
            Console.ReadLine();
            res1 = objMyMath.sub(objMyMath.Param1, 20);
            Console.WriteLine("  Результат ПСВ Param1-20 = " + res1);

            Console.ReadLine();


        }
    }
}
