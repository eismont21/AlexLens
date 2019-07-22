//
// Created by dmitrii on 14.07.19.
//

#ifndef ALEXLENS_MODEUTIL_H
#define ALEXLENS_MODEUTIL_H

#include "Mode.h"
#include <map>
#include <iterator>
#include <string>
#include <list>

using namespace std;

class ModeUtil {
private:
    static const map<string, Mode> stringModeClassify;
    static const map<string, Mode> stringModeTraining;
public:
    static Mode whichModeClassify(const string &mode);
    static Mode whichModeTraining(const string &mode);
    static list<string> getAllModesClassify();
    static list<string> getAllModesTraining();
};


#endif //ALEXLENS_MODEUTIL_H
