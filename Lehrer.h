#pragma once;
#include <string>
#include <sstream>
#include <iostream>
#include "Person.h"
using namespace std;

class Lehrer : public Person{

private:
    string titel;
    string status;
    string faecher;

public:
    Lehrer (const Adresse & adresse, const string& name, double groesse, const string& titel, const string& status, const string& faecher): Person(adresse, name, groesse) {
        this->titel = titel;
        this->faecher = faecher;
        this->status = status;
    }
    Lehrer (const string& name, double groesse, const string& titel, const string& status, const string& faecher) {
        this->titel = titel;
        this->faecher = faecher;
        this->status = status;
    }

    const string &getTitel() const {
        return titel;
    }

    void setTitel(const string &titel) {
        Lehrer::titel = titel;
    }

    const string &getStatus() const {
        return status;
    }

    void setStatus(const string &status) {
        Lehrer::status = status;
    }

    const string &getFaecher() const {
        return faecher;
    }

    void setFaecher(const string &faecher) {
        Lehrer::faecher = faecher;
    }
    string text () {
        stringstream s;
        s << "Der Professor heißt: "<<getName()<<"Der Professor hat die Groesse: "<< getGroesse() <<
          " und sein Status ist: "<<this->status << ".\nDer Professor erteilt die Vorlesung: "
           << this->faecher <<" an der Technische Hoschule Nürnberg, Sein Titel ist: "<< this->titel <<"\n\n"<< endl;
        return s.str();
    }
};