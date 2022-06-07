#pragma once

#include "menu.h"
#include "menu_item.h"
#include "Models/Parcel/Parcel.h"
#include "Models/Post/Client.h"
#include "Models/Post/Worker.h"

using namespace ZDV;
class MenuManage {
public:
    MenuManage(Menu mainMenu, Menu subMenu);
    int runMainMenu();
    int runSubMenu();
    int getMain_select();
    int getSub_select();
private:
    Menu m_mainMenu;
    Menu m_subMenu;

};
