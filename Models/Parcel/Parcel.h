#pragma once
#include <string>
using namespace std;

class Parcel {
private:
    int codeNumber{};
    string departureDate;
    string destinationAdress;

public:
    Parcel();
    Parcel(int _codeNumber, string _departureDate, string _destinationAdress);
    int getCodeNumber();
    string getDepartureDate();
    string getDestinationAdress();
    void setCodeNumber(int);
    void setDepartureDate(string);
    void setDestinationAdress(string);
    void print() const;
    friend istream& operator>>(istream& in, Parcel& parcel);
    friend ostream& operator<<(ostream& out, const Parcel& parcel);
    friend bool operator>(Parcel& p_1, Parcel& p_2);
};
