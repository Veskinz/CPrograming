#ifndef SCHOOLROOM_H
#define SCHOOLROOM_H

#include "person.h"

struct SchoolRoom {
    int roomNum;
    struct Person studentsInRoom[50];
};

#endif