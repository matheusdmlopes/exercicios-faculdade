﻿using System;

class Pessoa
{
    public string Nome;
    public int Idade;
    public string Sexo;
    public double Altura;

    public void ExibirInformacoes()
    {
        Console.WriteLine($"Informações da pessoa - Nome: {Nome}, Idade: {Idade}, Sexo: {Sexo}, Altura: {Altura}");
    }
}

class Program
{
    static void Main()
    {
        Pessoa pessoa1 = new Pessoa();
        pessoa1.Nome = "Matheus De Marco Lopes";
        pessoa1.Idade = 21;
        pessoa1.Sexo = "Masculino";
        pessoa1.Altura = 1.75;

        Pessoa pessoa2 = new Pessoa();
        pessoa2.Nome = "Maikon Oliveira";
        pessoa2.Idade = 30;
        pessoa2.Sexo = "Masculino";
        pessoa2.Altura = 1.71;

        pessoa1.ExibirInformacoes();
        pessoa2.ExibirInformacoes();
    }
}