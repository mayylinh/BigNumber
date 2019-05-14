#include "stdafx.h"
#include "CppUnitTest.h"
#include <vector>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BigNums
{
	std::vector<int> Add(std::vector<int> a, std::vector<int> b)
	{
		std::vector<int> sum;
		int size1, size2, carry = 0, negative = 0;

		size1 = a.size();
		size2 = b.size();

		if (a[0] < 0 && b[0] < 0)
		{
			a[0] = abs(a[0]);
			b[0] = abs(b[0]);
			negative = -1;
		}
		for (int i = 0; i < size2; i++)
		{
			int added = a[size1 - (i + 1)] + b[size2 - (i + 1)] + carry;
			sum.insert(sum.begin(), added % 10);
			carry = added / 10;
		}

		for (int i = size2; i < size1; i++)
		{
			int added = a[size1 - (i + 1)] + carry;
			sum.insert(sum.begin(), added % 10);
			carry = added / 10;
		}

		while (carry > 0)
		{
			sum.insert(sum.begin(), carry % 10);
			carry /= 10;
		}
		if (negative == -1)
			sum[0] = sum[0] * (-1);
		
		return sum;
	}

	std::vector<int> Subtract(std::vector<int> a, std::vector<int> b)
	{
		std::vector<int> difference = { 0 };

		while (b != a)
		{
			b = BigNums::Add(b, { 1 });
			difference = BigNums::Add(difference, { 1 });
		}

		return difference;
	}

	std::vector<int> Multiply(std::vector<int> a, std::vector<int> b)
	{
		std::vector<int> product = { 0 }, aValue = { 0 };
		int negative = 0;
		if (a[0] < 0 || b[0] < 0)
			negative = -1;

		while (aValue != a)
		{
			aValue = BigNums::Add(aValue, { 1 });
			product = BigNums::Add(product, b);
		}

		if (negative == -1)
			product[0] = product[0] * (-1);

		return product;
	}

	std::vector<int> Divide(std::vector<int> a, std::vector<int> b)
	{
		std::vector<int> quotient = { 0 }, aValue = a, divided;
		int size1, size2;

		size1 = a.size();
		size2 = b.size();

		while (divided[0] > 0)
		{
			aValue = BigNums::Subtract(aValue, b);
			quotient = BigNums::Add(quotient, { 1 });
			divided = BigNums::Subtract(aValue, b);
		}

		return quotient;
	}

	std::vector<int> Mod(std::vector<int> a, std::vector<int> b)
	{
		std::vector<int> remainder, quotient, multiplied;

		quotient = BigNums::Divide(a, b);
		multiplied = BigNums::Multiply(quotient, b);
		remainder = BigNums::Subtract(a, multiplied);

		return remainder;
	}
}

namespace UnitTest2
{		
	TEST_CLASS(UnitTest1)
	{
		public:
			// passed
			TEST_METHOD(AddTwoNums)
			{
				std::vector<int> toAdd = BigNums::Add({ 9,9,9,9,4,6,2,6,5,3,7,2 },
											 { 2,6,6,2,4,2 });
				std::vector<int> sum = { 9,9,9,9,4,6,5,3,1,6,1,4 };

				for (int i = 0; i < 12; i++)
					Assert::AreEqual(toAdd[i], sum[i]);
			}
			/*// passed
			TEST_METHOD(AddTwoNegNums)
			{
				std::vector<int> toAdd = BigNums::Add({ -2,9,7,4,8,3 }, { -7,9,9,6,2 });
				std::vector<int> sum = { -3,7,7,4,4,5 };

				for (int i = 0; i < 6; i++)
					Assert::AreEqual(toAdd[i], sum[i]);
			}*/
			// passed
			TEST_METHOD(SubtractSmallFromLarge)
			{
				std::vector<int> toSubtract = BigNums::Subtract({ 4,2,0,0,4,7,8,9 }, { 4,1,9,7,3,5,1,6 });
				std::vector<int> difference = { 3,1,2,7,3 };

				for (int i = 0; i < 2; i++)
					Assert::AreEqual(toSubtract[i], difference[i]);
			}
			/*TEST_METHOD(AddLargePosToSmallNeg)
			{
				std::vector<int> toAdd = BigNums::Add({ 2,9,7,4,8,3 }, { -1,9,9,6,2,8 });
				std::vector<int> sum = { 9,7,8,5,5 };

				for (int i = 0; i < 6; i++)
					Assert::AreEqual(toAdd[i], sum[i]);
			}*/
			TEST_METHOD(MultiplyTwoNums)
			{
				std::vector<int> toMultiply = BigNums::Multiply({ 2,9,7,4,8,3 }, { 7,9,9,6,2 });
				std::vector<int> product = { 2,3,7,8,7,3,3,5,6,4,6 };

				for (int i = 0; i < 11; i++)
					Assert::AreEqual(toMultiply[i], product[i]);
			}
			TEST_METHOD(DivideLargeBySmall)
			{
				std::vector<int> toDivide = BigNums::Divide({ 4,9,7,6,5,8,4 }, { 3,5,2,6,4,8 });
				std::vector<int> quotient = { 1,4 };

				for (int i = 0; i < 2; i++)
					Assert::AreEqual(toDivide[i], quotient[i]);
			}
			TEST_METHOD(ModTwoNums)
			{
				std::vector<int> toMod = BigNums::Mod({ 1,9,9,9,8,0,1 }, { 9,9,9,9 });
				std::vector<int> remainder = { 1 };

				for (int i = 0; i < 1; i++)
					Assert::AreEqual(toMod[i], remainder[i]);
			}
	};
}