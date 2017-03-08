#pragma once

#ifdef MATHLIBRARY_EXPORTS
#define MATHLIBRARY_API __declspec(dllexport)
#else
#define MATHLIBRARY_API __declspec(dllimport)
#endif // MATHLIBRARY_EXPORTS

namespace MathLibrary
{
	class Functions
	{
	public:
		static MATHLIBRARY_API double Add(double a, double b);
		static MATHLIBRARY_API double Multiply(double a, double b);
		static MATHLIBRARY_API double AddMultiply(double a, double b);
	};
}