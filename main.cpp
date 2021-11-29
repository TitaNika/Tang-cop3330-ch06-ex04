/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Tony Tang
 */

#include "std_lib_facilities.h"

class Name_value {

public:

    string name;

    int value;

    Name_value(string string, int value)
    :name(string), value(value) { }

};

int main()

{
    cout << "Enter a name/number pair, like 'Blazek 66'. Type NoName 0 when finished.\n";

    string name = "";

    int value;

    vector<Name_value> nv_vector;

    while (cin>>name>>value && !(name=="NoName" && value==0)) {

        for (int i = 0; i < nv_vector.size(); ++i)

            if (name == nv_vector[i].name) error("Error: Name occurred twice: ", name);

        nv_vector.push_back(Name_value(name,value));
    }

    for (int i = 0; i < nv_vector.size(); ++i) {

        cout << "(" << nv_vector[i].name << ',' << nv_vector[i].value << ")\n";
        
    }
}
