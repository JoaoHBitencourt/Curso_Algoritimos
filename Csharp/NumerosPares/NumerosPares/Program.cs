﻿namespace NumerosPares
{
    class Program
    {
        static void Main(string[] args)
        {
            int n, qtdpares;

            Console.Write("Quantos numeros voce vai digitar? ");
            n = int.Parse(Console.ReadLine());

            int[] vetor = new int[n];

            for (int i = 0; i < n; i++)
            {
                Console.Write("Digite um numero: ");
                vetor[i] = int.Parse(Console.ReadLine());
            }

            Console.WriteLine();
            Console.WriteLine("NUMEROS PARES:");

            qtdpares = 0;
            for (int i = 0; i < n; i++)
            {
                if (vetor[i] % 2 == 0)
                {
                    Console.Write(vetor[i] + "  ");
                    qtdpares++;
                }
            }

            Console.WriteLine();
            Console.WriteLine();
            Console.WriteLine("QUANTIDADE DE PARES = " + qtdpares);
        }
    }
}