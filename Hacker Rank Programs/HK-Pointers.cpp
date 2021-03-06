/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 * 			Input will contain two integers,  and , separated by a newline.
 *
 * 			You have to print the updated value of  and , on two different
 * 			lines.
 *
 * 			P.S.: Input/ouput will be automatically handled. You only have
 * 			to complete the void update(int *a,int *b) function.
 *
 * 			Sample Input
 * 			4
 * 			5
 *
 * 			Sample Output
 * 			9
 * 			1
 *
 * 			Explanation
 * 			a* = 4 + 5 = 9
 * 			b* = |4 - 5| = 1
 *
 *************************************************************************/

#include "../src/header.h"

namespace {
void update(int *xPtrNum1,
			int *xPtrNum2) {
	int num1 = *xPtrNum1 + *xPtrNum2;
	int num2 = (*xPtrNum1 - *xPtrNum2);

	if(num2 < 0) {
		num2 = num2 * -1;
	}

	*xPtrNum1 = num1;
	*xPtrNum2 = num2;
}
}

//return a string with both numbers separated by a space for checking
std::string HK_Pointers (int xNum1,
						 int xNum2) {
	std::string returnString = "";

    int * ptrNum1 = &xNum1;
    int * ptrNum2 = &xNum2;

//    scanf("%d %d", &xNum1, &xNum2);

    update(ptrNum1, ptrNum2);

//    printf("%d\n%d", xNum1, xNum2);

    returnString = to_string(*ptrNum1) + " " + to_string(*ptrNum2);

    return returnString;
}
