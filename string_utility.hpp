#ifndef _STRING_UTILITY.H
#define _STRING_UTILITY.H

#include <string>;
#include <sstream>
using namespace std;

class StringUtility {
public:
    // Case functions
    static string toUpper(const string & s);
    static string toLower(const string & s);
    static string toTitle(const string & s);

    //contain functions
    static bool startsWith(const string & s, const string & prefex);
    static bool endsWith(const string & s, const string & sufex);
};

#endif
