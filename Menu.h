/*
 * Menu.h
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#ifndef MENU_H_
#define MENU_H_

class Menu
{
	public:
		void show();
		void pushBook();
		void popBook();
		void action(int option);
		bool validate(int option);
		void listBook();
		Element* findBook();
		Menu();
};

#endif /* MENU_H_ */
