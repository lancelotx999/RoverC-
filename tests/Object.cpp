/* 
 * File:   Object.cpp
 * Author: lancelotx999
 * 
 * Created on November 3, 2015, 4:13 PM
 */

#include "Object.h"

/*
* static (class-wide) members are effectively global variables
* and are initialised accordingly
*/
int Object::_count = 0;
// provides read-only access to the instance count

int Object::getCount ()
{
    return _count;
}

Object::Object()
{
    _count ++;
}

Object::Object(const Object&)
{
    _count ++;
}

Object::~Object()
{
    _count --;
}


