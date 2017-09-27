/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *
 *************************************************************************/

#include "../src/header.h"
#include <set>

void Sets(void) {
    std::set<std::string> strset = { "one", "two", "three", "four", "five" };
    std::cout << "> size of set: " << strset.size() << std::endl;
    std::cout << "> ordered set is alphabetical:" << std::endl;

	/**************************************************************************
	 * loop through the set
	 *************************************************************************/
    std::cout << "> ";
    for(std::string s : strset) {
    	std::cout << s << " ";
    }
    std::cout << std::endl << std::endl;

	/**************************************************************************
	 * insert element \"six\"
	 *************************************************************************/
    std::cout << "> insert element \"six\":" << std::endl;
    strset.insert("six");

	/**************************************************************************
	 * loop through the set
	 *************************************************************************/
    std::cout << "> ";
    for(string s : strset) {
    	std::cout << s << " ";
    }
    std::cout << std::endl << std::endl;

	/**************************************************************************
	 * find and erase element \"six\"
	 *************************************************************************/
    std::cout << "> find and erase element \"six\":" << std::endl;
    std::set<std::string>::iterator it = strset.find("six");
    if(it != strset.end()) {
    	std::cout << "> erasing " << *it << std::endl;
        strset.erase(it);
    } else {
    	std::cout << "> not found" << std::endl;
    }

	/**************************************************************************
	 * loop through the set
	 *************************************************************************/
    std::cout << "> ";
    for(std::string s : strset) {
    	std::cout << s << " ";
    }
    std::cout << std::endl << std::endl;

	/**************************************************************************
	 * insert duplicate element \"five\"
	 *************************************************************************/
    std::cout << "> insert duplicate element \"five\":" << std::endl;
    strset.insert("five");

	/**************************************************************************
	 * loop through the set
	 *************************************************************************/
    std::cout << "> ";
    for(std::string s : strset) {
    	std::cout << s << " ";
    }
    std::cout << std::endl << std::endl;
}
