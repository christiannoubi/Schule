#pragma once;
#include <string>
#include <sstream>
#include "Person.h"
#include <iostream>
using namespace std;

class Student : public Person{

private:
    double note;
    int semester;
    string studiengang;


public:
    Student () {

    }
    Student (const Adresse &adresse, const string& name, double groesse, double note, int semester, const string& studiengang)
 : Person (  adresse, name, groesse)
    {
        this->note = note;
        this->semester = semester;
        this->studiengang = studiengang;
    }

    Student (const string& name, double groesse, double note, int semester, const string& studiengang) {
        this->note = note;
        this->semester = semester;
        this->studiengang = studiengang;
    }
    double getNote() const {
        return note;
    }

    void setNote(double note) {
        Student::note = note;
    }

    int getSemester() const {
        return semester;
    }

    void setSemester(int semester) {
        Student::semester = semester;
    }

    const string &getStudiengang() const {
        return studiengang;
    }

    void setStudiengang(const string &studiengang) {
        Student::studiengang = studiengang;
    }
    int durschnitteNote (int note []) {
       int mittel;
        return mittel;
    }
    string text () {
        stringstream s;
        s << "Der Student heißt: "<<getName() << ", er hat die groeße: "<<getGroesse() <<
          ", er studiert "<< this->studiengang <<" an der Technische Hochschule Nuernberg\n,"
          " seine durschnittliche note ist: "<< this->note << " und ist im "<<this->semester <<" Semester.\n\n"<< endl;
        return s.str();
    }
};