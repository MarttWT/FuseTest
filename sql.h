//
// Created by marco on 03/02/2026.
//
#pragma once
#include <string>
#include "sqlite3.h"



class sql {
    //Atributos
    sqlite3 *db{};
    //Constructores
public:
    explicit sql(const std::string &File);
    explicit sql();
    void close() const;

    const void queryProfesores(const char *query) const;
};


