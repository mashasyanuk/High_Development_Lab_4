#ifndef MYMENU_ITEM_H
#define MYMENU_ITEM_H

namespace ZDV {
    class Item {
    public:
        typedef int(*func_t)();
        char* getName();
        func_t getFunc();
        void print();
        Item(char*, func_t);

    private:
        char* m_itemName{};
        func_t m_itemFunc{};
    };
}
#endif // !MYMENU_ITEM_H
