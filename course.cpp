#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <string.h>
#include "course.h"

using namespace std;
namespace gc {
    Course::Course() {

    }

    Course::Course(char name, char code) {
        strcpy(m_name, name);

    }
}