#ifndef MENU_SETTINGS_H_
#define MENU_SETTINGS_H_

#include "menupage.h"

enum {
	MENUPAGE_SETTINGS_LANGUAGE,
	MENUPAGE_SETTINGS_ISOSTEP,
	MENUPAGE_SETTINGS_PERSAEB,
//	MENUPAGE_SETTINGS_INVERTOLC,
	MENUPAGE_SETTINGS_SCRIPTS,
	MENUPAGE_SETTINGS_BUTTONS,
	MENUPAGE_SETTINGS_CMODES,
	MENUPAGE_SETTINGS_MENUS,
	MENUPAGE_SETTINGS_QEXP,
	MENUPAGE_SETTINGS_PAGES,
	MENUPAGE_SETTINGS_RESTORE,
	MENUPAGE_SETTINGS_DEVEL,
	MENUPAGE_SETTINGS_COUNT,
	MENUPAGE_SETTINGS_FIRST = 0,
	MENUPAGE_SETTINGS_LAST  = MENUPAGE_SETTINGS_COUNT - 1
};

extern menupage_t menupage_settings;

#endif /* MENU_SETTINGS_H_ */
