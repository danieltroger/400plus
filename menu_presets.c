#include "main.h"
#include "menu.h"
#include "utils.h"
#include "scripts.h"
#include "presets.h"
#include "menu_settings.h"
#include "menu_shortcuts.h"
#include "firmware.h"

#include "menu_presets.h"

void preset_save_1();
void preset_save_2();
void preset_save_3();
void preset_save_4();
void preset_save_5();

void preset_save(int id);

void preset_load_1();
void preset_load_2();
void preset_load_3();
void preset_load_4();
void preset_load_5();

void preset_load(int id);

type_MENUITEM presets_save_items[] = {
	MENUITEM_TASK ("Save preset 1", preset_save_1),
	MENUITEM_TASK ("Save preset 2", preset_save_2),
	MENUITEM_TASK ("Save preset 3", preset_save_3),
	MENUITEM_TASK ("Save preset 4", preset_save_4),
	MENUITEM_TASK ("Save preset 5", preset_save_5)
};

type_MENUITEM presets_load_items[] = {
	MENUITEM_TASK ("Load preset 1", preset_load_1),
	MENUITEM_TASK ("Load preset 2", preset_load_2),
	MENUITEM_TASK ("Load preset 3", preset_load_3),
	MENUITEM_TASK ("Load preset 4", preset_load_4),
	MENUITEM_TASK ("Load preset 5", preset_load_5)
};

type_MENU menu_presets_save = {
	name      : "Save presets",
	length    : LENGTH(presets_save_items),
	items     : presets_save_items,
	dp_action : menu_settings_start
};

type_MENU menu_presets_load = {
	name      : "Load presets",
	length    : LENGTH(presets_load_items),
	items     : presets_load_items,
	dp_action : menu_shortcuts_start
};

void menu_presets_save_start() {
	beep();
	menu_create(menu_presets_save);
}

void menu_presets_load_start() {
	beep();
	menu_create(menu_presets_load);
}

void preset_save_1() {
	preset_save(1);
}

void preset_save_2() {
	preset_save(2);
}

void preset_save_3() {
	preset_save(3);
}

void preset_save_4() {
	preset_save(4);
}

void preset_save_5() {
	preset_save(5);
}

void preset_save(int id) {
	beep();

	preset_write(id);

	menu_close();
}

void preset_load_1() {
	preset_load(1);
}

void preset_load_2() {
	preset_load(2);
}

void preset_load_3() {
	preset_load(3);
}

void preset_load_4() {
	preset_load(4);
}

void preset_load_5() {
	preset_load(5);
}

void preset_load(int id) {
	beep();

	if (preset_read(id))
		preset_apply();

	menu_close();
}