#include "menu_manager.h"
#include "Models/Parcel/Parcel.h"
#include "Models/Post/Client.h"
#include "Models/Post/Worker.h"
using namespace ZDV;

MenuManage::MenuManage(Menu mainMenu, Menu subMenu) {
    m_mainMenu = mainMenu;
    m_subMenu = subMenu;
}
int MenuManage::runMainMenu() {
    MenuManage::m_mainMenu.runCommand();
    return 1;
}
int MenuManage::runSubMenu() {
    MenuManage::m_subMenu.runCommand();
    return 1;
}
int MenuManage::getMain_select() {
    return MenuManage::m_mainMenu.getSelect();
}
int MenuManage::getSub_select() {
    return MenuManage::m_subMenu.getSelect();
}
