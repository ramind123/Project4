#ifndef _CMANAGER_HPP_
#define _CMANAGER_HPP_
#include "Ccollection.hpp"
#include <iostream>

class Cmanager : Ccollection
{
public:
    Cmanager();
    Cmanager(CReferee*, CReferee*);
    bool addRef();
    bool updateRef();
    bool removeRef();
private:
    std::string getID() const;
    std::string getFirst() const;
    std::string getLast() const;
    unsigned short getGrade() const;
    RefereeGrade toGrade(short const&) const;
};

#endif