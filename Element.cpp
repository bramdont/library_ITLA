/*
 * Element.cpp
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#include "Element.h"

Element::Element(std::string name, std::string author, std::string editorial, std::string pDate, std::string category) :_name(name), _author (author), _editorial(editorial), _pDate(pDate), _category(category), _next(NULL)
{
}
