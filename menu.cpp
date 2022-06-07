#include <iostream>
#include "menu.h"

namespace ZDV {
    int Menu::getSelect() const {
        return m_select;
    }
    int Menu::getCount() const {
        return m_count;
    }
    bool Menu::getRunning() const {
        return m_running;
    }
    char* Menu::getTitle() const {
        return m_title;
    }
    Item* Menu::getItems() {
        return m_items;
    }
    void Menu::setSelect() {
        int temp=0;
        std::cout << "\n Select >> ";
        std::cin >> temp;
        while (temp < 0 || temp > m_count) {
            std::cout << "\n Введенное значение не корректно!\n Select >> ";
            std::cin >> temp;
        }
        m_select = temp;
    }
    void Menu::setRunning(bool running) {
        m_running = running;
    }
    void Menu::print() {
        std::cout << m_title << ":\n";
        for (int i=0; i < m_count; ++i) {
            std::cout << i + 1 << ". ";
            m_items[i].print();
            std::cout << std::endl;
        }
    }
    void Menu::runCommand() {
        Item::func_t func{};
        print();
        setSelect();
        if (m_select != 0) {
            func = m_items[m_select - 1].getFunc();
            func();
            std::cout << "\n\n";
        }
        else {
            setRunning(false);
        }
    }
    Menu::Menu(char* title, Item* items, int count) : m_title(title),
                                                         m_items(items), m_count(count) {}
    Menu::Menu() {}
}
