//
// Created by marco on 03/02/2026.
//

#include "sql.h"

#include <iostream>
#include <ostream>

sql::sql(const std::string &File) {
    sqlite3_open(File.c_str(), &db);
}

sql::sql() {
    sqlite3_open("C:/Users/marco/CLionProjects/FuseTest/schema1", &db);
}

void sql::close() const {
    sqlite3_close(db);
}

void sql::queryProfesores(const char *query) const {
    sqlite3_stmt *stmt;
    sqlite3_prepare_v2( db, query, -1, &stmt, nullptr);
    std::cout << " | " << "Nombre" << " | " << "Tipo de Clase"<< " | "<<"Fecha"<<" | "<<"Hora"<<std::endl;
    // 3. Bucle para procesar cada fila
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        // 4. Extraer datos de las columnas (índices base 0)
        const unsigned char *Nombre = sqlite3_column_text(stmt, 0); // Columna 'nombre'
        const unsigned char *TipoDeClase = sqlite3_column_text(stmt, 1); // Columna 'TipoDeClase'
        const unsigned char *Fecha = sqlite3_column_text(stmt, 2); // Columna 'Fecha'
        const unsigned char *Hora = sqlite3_column_text(stmt, 3);// Columna 'Hora'
        // 5. Imprimir los datos
        std::cout <<  Nombre << " | " << TipoDeClase << " | "<<Fecha<<" | "<<Hora<<std::endl;
    }
}
