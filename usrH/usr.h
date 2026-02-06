//
// Created by marco on 05/02/2026.
//

#pragma once
#define FUSETEST_USR_H

#include <sqlH/sql.h>


class usr {
    //atributos
    std::pmr::string Nombre;
    sql db;
    //CONSTRUCTOR
    public:
        explicit usr(std::pmr::string Nombre, sql db);
        explicit usr(std::pmr::string Nombre);
        void UserData();

};


