/* create a BigNumbers class, using TDD, Test Driven Development, that will use vectors from STL to store the digits.
BigNumbers should have the same functionality as other numerical data types. Hence, they should be able to:
Add
Subtract
Multiply
Divide
Mod

All of the operations listed above should be completed using operator overloading, ADD “+” operator, SUBTRACT “-”…etc.

Finally, this should be created as library for users to download off your github account. You will allow them the option to use a
static library or a dynamic library. Thus, you must build this as a static library and then rebuild an alternate as a dynamic library.

NOTE: as no one will know how to use your library you must use Doxygen to create documentation for your API. Tell them what the
library does and what the function calls do and how to use the function calls. */

#ifndef BIGNUMBERSLIB_H
#define BIGNUMBERSLIB_H

#include "bignumberslib_global.h"
#include <vector>
#include <iostream>

class BIGNUMBERSLIBSHARED_EXPORT BigNumbersLib
{

    public:
        BigNumbersLib();
        // returns sum of two large numbers
        static std::vector<int> Add(std::vector<int> a, std::vector<int> b);

        // returns difference of two large numbers
        static std::vector<int> Subtract(std::vector<int> a, std::vector<int> b);

        // returns product of two large numbers
        static std::vector<int> Multiply(std::vector<int> a, std::vector<int> b);

        // returns quotient of two large numbers
        static std::vector<int> Divide(std::vector<int> a, std::vector<int> b);

        // returns remainder between two large numbers
        static std::vector<int> Mod(std::vector<int> a, std::vector<int> b);
};

#endif // BIGNUMBERSLIB_H
