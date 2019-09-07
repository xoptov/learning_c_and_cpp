#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <iostream>

using std::ostream;
using std::istream;

#include <string>
using std::string;

class PhoneNumber
{
    //todo: Тут с какого-то хуя опущен модификатор доступа public
    friend ostream &operator<<(ostream &, const PhoneNumber &);
    friend istream &operator>>(istream &, PhoneNumber &);
    string areaCode;
    string exchange;
    string line;
};

#endif