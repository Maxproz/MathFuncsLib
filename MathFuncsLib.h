#pragma once


// #include <string>


namespace MathFuncs
{

	class MyMathFuncs
	{
	public:
		// Returns a + b
		static double Add(double a, double b);

		// Returns a - b
		static double Subtract(double a, double b);

		// Returns a * b
		static double Multiply(double a, double b);

		// Returns a / b
		static double Divide(double a, double b);

		// Returns a + b
		static double Modulo(int a, int b);

	};

	// NOTE: static librarys don't only use static functions..
	// The static is implying it changes when compiled with executible?

	//class Person
	//{
	//private:
	//	std::string m_name{ "" };
	//public:
	//	explicit Person(const std::string& name) : m_name{ name } {}
	//	std::string GetName() const { return m_name; }
	//};

}

