#include "Worker.h"
#include <string>
#include <iostream>
using namespace std;

Worker::Worker() {
    position = "";
}
Worker::Worker(string _name, string _surname, int _age, string _login, string _password, string _position) :
        User(_name, _surname, _age, _login, _password) {
    position = _position;
}
string Worker::getPosition() {
    return position;
}
void Worker::setPosition(string _position) {
    position = _position;
}

istream& operator>>(istream& in, Worker& worker) {
    cout << "\nВведите имя сотрудника: ";
    in >> worker.name;
    cout << "Введите фамилию сотрудника: ";
    in >> worker.surname;
    cout << "Введите возраст сотрудника: ";
    in >> worker.age;
    cout << "Введите логин сотрудника: ";
    in >> worker.login;
    cout << "Введите пароль сотрудника: ";
    in >> worker.password;
    cout << "Введите должность сотрудника: ";
    in >> worker.position;
    return in;
}
ostream& operator<<(ostream& out, const Worker& worker) {
    worker.print();
    return out;
}
bool operator>(Worker& w_1, Worker& w_2) {
    return w_1.name > w_2.name;
}

void Worker::print() const {
    cout << "\nИмя: " << name << endl;
    cout << "Фамилия: " << surname << endl;
    cout << "Возраст: " << age << endl;
    cout << "Логин: " << login << endl;
    cout << "Пароль: " << password << endl;
    cout << "Должность: " << position << endl;
}
