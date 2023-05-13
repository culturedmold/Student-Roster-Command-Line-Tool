//
//  degree.h
//  Scripting and Programming - Applications
//
//  Created by Tyler Hampton on 4/29/23.
//

#ifndef degree_h
#define degree_h
#include <string>

using namespace std;

enum DegreeProgram {
    SECURITY,
    NETWORK,
    SOFTWARE,
    UNDECLARED
};

static const string degreeTypes[] = {
    "Security",
    "Network",
    "Software",
    "Undeclared"
};

#endif /* degree_h */

