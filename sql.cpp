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

const void sql::queryProfesores(const char *query) const {
    sqlite3_stmt *stmt;
    sqlite3_prepare_v2( db, query, -1, &stmt, nullptr);
    std::cout << "Resultados de la consulta:" << std::endl;
    int rc;
    // 3. Bucle para procesar cada fila
    while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {
        // 4. Extraer datos de las columnas (índices base 0)
        int id = sqlite3_column_int(stmt, 0); // Columna 'id'
        const unsigned char *Nombre = sqlite3_column_text(stmt, 1); // Columna 'nombre'

        // 5. Imprimir los datos
        std::cout << "ID: " << id << ", Nombre: " << Nombre << std::endl;
    }
}
