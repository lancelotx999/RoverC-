/* 
 * File:   Object.h
 * Author: lancelotx999
 *
 * Created on November 3, 2015, 4:13 PM
 */

#ifndef OBJECT_H
#define	OBJECT_H

class Object 
{
public:
    Object();
    Object(const Object&);
    virtual ~Object();
    // return the count of current object instances
    static int getCount ();
private:
     // count of all object instances in existence
    static int _count;
};

#endif	/* OBJECT_H */

