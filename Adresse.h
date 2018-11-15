#pragma once;
#include <string>
#include <sstream>
using namespace std;

class Adresse {

private:
    string _strasse;
    string _hausnummer;
    int _postleitzahl;
    string _stadt;

public:
    Adresse (const string &strasse, const string &hausnummer, int postleitzahl, const string &stadt)
    {
        this->_strasse = strasse;
        this->_hausnummer = hausnummer;
        this->_postleitzahl = postleitzahl;
        this->_stadt = stadt;
    }
    Adresse() {

    }

    const string &get_strasse() const {
        return _strasse;
    }

    void set_strasse(const string &_strasse) {
        Adresse::_strasse = _strasse;
    }

    const string &get_hausnummer() const {
        return _hausnummer;
    }

    void set_hausnummer(const string &_hausnummer) {
        Adresse::_hausnummer = _hausnummer;
    }

    int get_postleitzahl() const {
        return _postleitzahl;
    }

    void set_postleitzahl(int _postleitzahl) {
        Adresse::_postleitzahl = _postleitzahl;
    }

    const string &get_stadt() const {
        return _stadt;
    }

    void set_stadt(const string &_stadt) {
        Adresse::_stadt = _stadt;
    }
};