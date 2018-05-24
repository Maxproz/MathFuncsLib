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

	namespace Conversions
	{
		// Weight conversions
		// pounds to kilograms
		constexpr long double operator"" _pounds(long double pounds)
		{
			return pounds / 2.2046;
		}

		// kilograms to pounds
		constexpr long double operator"" _kilograms(long double kg)
		{
			return kg * 2.2046;
		}




		// Distance conversions
		constexpr long double operator"" _m(long double m)
		{
			// returns feet
			return m * 3.2808;
		}

		// fluid ounces to milliliters 
		constexpr long double operator"" _ft(long double ft)
		{
			// returns meters
			return ft / 3.2808;
		}





		// Volume conversions
		// milliliters to fluid ounces 
		constexpr long double operator"" _mL(long double mL)
		{
			// returns us fl oz
			return mL * 0.033814;
		}

		// fluid ounces to milliliters 
		constexpr long double operator"" _floz(long double floz)
		{
			// returns milliliters
			return floz / 0.033814;
		}


	}





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

