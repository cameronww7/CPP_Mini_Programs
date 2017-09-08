/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 *************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

#include <vector>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

bool   IsPalindrome (std::string xString);

double EuclideanDistance (int xNum);

std::string RemoveCharFromString (std::string xString,
							 char charToBeRemoved);

std::string LongestPalindromeInString (std::string xString);

std::vector <int> TwoSum (std::vector<int> & xNumbers,
					int xGoalNumber);

float MedianOfTwoSortedArrays (const int xArrayOne[],
							   const int xArrayTwo[],
							   const int ARR_SIZE_ONE,
							   const int ARR_SIZE_TWO);

int ClimbStairs(int numberOfStairs);

int CountPrimes(int numberToBeCounted);

bool CanJump(std::vector <int> & nums);

std::vector <std::string> fizzBuzz(int n);



#endif /* HEADER_H_ */
