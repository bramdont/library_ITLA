/*
 * Stack.cpp
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#include "Stack.h"

Element* last = NULL;

void Stack::push(Element* element)
{
	//if the last element is null, that means the stack is empty
	element->_next = NULL;
	if (last == NULL)
	{
		last = element;

	}
	else
	{
		element->_next = last;
		last = element;
	}



}

Element* Stack::pop()
{
	//if the last element is null, that means there are not more book to pop.
	if (last == NULL)
	{
		return NULL;
	}
	Element* pop_element = last;

	last = pop_element->_next;

	return pop_element;
}

Stack::Stack(): _last(NULL)
{

}

