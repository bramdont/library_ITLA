/*
 * Element.h
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#ifndef ELEMENT_H_
#define ELEMENT_H_
#include <string>
class Element
{
	private:
		std::string _name;
		std::string _author;
		std::string _editorial;
		std::string _pDate;
		std::string _category;
		Element* _next;

	public:
		Element(std::string name);
	//This means that Stack can access directly to Element's private members
	friend class Stack;
};

#endif /* ELEMENT_H_ */
