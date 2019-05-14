#include "bignumberslib.h"
#include <stdexcept>
#include <vector>

/* --------------------------------------------------/
OPERATORS ONLY WORK WITH POSITIVE NUMBERS WITH FIRST
OPERAND BEING BIGGER THAN SECOND OPERAND
ALSO DIVISION BY 0 NOT ACCOUNTED FOR
/---------------------------------------------------*/

namespace BigNums
{
    std::vector<int> Add(std::vector<int> a, std::vector<int> b)
    {
        std::vector<int> sum;
        int size1, size2, carry = 0;// , negative = 0;

        size1 = a.size();
        size2 = b.size();

        /*// making a the number with more digits and b the number with less digits
        if (size2 > size1)
            b.swap(a);
        // a is negative and b is positive
        if (a[0] < 0 && b[0] > 0)
        {
            a[0] = abs(a[0]);
            sum = BigNumbers::Subtract(b, a);
        }
        // a is positive and b is negative
        else if (b[0] < 0 && a[0] > 0)
        {
            b[0] = abs(b[0]);
            sum = BigNumbers::Subtract(a, b);
        }
        // both a and b are negative or positive
        else
        {*/
            if (a[0] < 0 && b[0] < 0)
            {
                a[0] = abs(a[0]);
                b[0] = abs(b[0]);
                //negative = -1;
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
            //if (negative == -1)
            //	sum[0] = sum[0] * (-1);
        //}

        return sum;
    }

    std::vector<int> Subtract(std::vector<int> a, std::vector<int> b)
    {
        std::vector<int> difference;// , negative = { 0 }, neg = { -1 };
        //int size1, size2, borrow = 0;

        //size1 = a.size();
        //size2 = b.size();
        /*// making a the number with more digits and b the number with less digits
        if (size2 > size1)
        {
            b.swap(a);
            size1 = a.size();
            size2 = b.size();
            // a is positive and b is negative
            if (b[0] < 0 && a[0] > 0)
            {
                b[0] = abs(b[0]);
                difference = BigNumbers::Add(a, b);
                return difference;
            }
            // a is negative and b is positive
            if (a[0] < 0 && b[0] > 0)
                a[0] = abs(a[0]);
            // larger number is subtracted from smaller number
            negative = { -1 };
        }*/

        while (b != a)
        {
            b = BigNums::Add(b, { 1 });
            difference = BigNums::Add(difference, { 1 });
        }

        //if (negative == neg)
        //	difference[0] = difference[0] * (-1);

        return difference;
    }

    std::vector<int> Multiply(std::vector<int> a, std::vector<int> b)
    {
        std::vector<int> product = { 0 }, bValue = { 0 };
        int negative = 0;
        if (a[0] < 0 || b[0] < 0)
            negative = -1;

        while (bValue != b)
        {
            bValue = Add(bValue, { 1 });
            product = Add(product, a);
        }

        if (negative == -1)
            product[0] = product[0] * (-1);

        return product;
    }

    std::vector<int> Divide(std::vector<int> a, std::vector<int> b)
    {
        std::vector<int> quotient = { 0 }, aValue = a, divided;
        int size1, size2;// , negative = 0;

        size1 = a.size();
        size2 = b.size();

        /*// dividing by 0
        if (size1 == 1 || size2 == 1)
        {
            if (a[0] == 0 || b[0] == 0)
                return {-1, 0, -1, -1, 3};
        }
        if (size2 > size1)
        {
            quotient = { 0 };
            return quotient;
        }
        else if (size1 == size2 && a[0] < b[0])
        {
            quotient = { 0 };
            return quotient;
        }

        if (a[0] < 0 || b[0] < 0)
        {
            negative = -1;
            a[0] = abs(a[0]);
            b[0] = abs(b[0]);
        }*/

        while (divided[0] > 0)
        {
            aValue = Subtract(aValue, b);
            quotient = Add(quotient, { 1 });
            divided = Subtract(aValue, b);
        }

        //if (negative == -1)
        //	quotient[0] = quotient[0] * (-1);

        return quotient;
    }

    std::vector<int> Mod(std::vector<int> a, std::vector<int> b)
    {
        std::vector<int> remainder, quotient, multiplied;

        quotient = Divide(a, b);
        multiplied = Multiply(quotient, b);
        remainder = Subtract(a, multiplied);

        return remainder;
    }
}
