//
// Created by marco on 05/02/2026.
//

#include "usr.h"

#include <algorithm>
#include <sstream>
#include <utility>
#include <sqlH/sql.h>
#include <ExternalLibraries/sqlite3.h>


usr::usr(std::pmr::string N,sql Data_Base) {
    Nombre = std::move(N);
    db = Data_Base;
}

usr::usr(std::pmr::string N) : usr(std::move(N),sql()){}
void usr::UserData() {
    std::ostringstream data;
    data <<"SELECT p.Nombre, c.Tipo_De_Clase, c.Fecha, strftime('%H:%M', c.Hora) AS Hora FROM clases AS c JOIN profesores AS p ON p.id = c.profesor_id WHERE p.Nombre = '"<< Nombre <<"'";
    db.queryProfesores(data.str().c_str());

}
