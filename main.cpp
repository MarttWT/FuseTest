#include <iostream>
#include <cstdio>
#include "sql.h"
int main() {
    sql db = sql();
    printf("Hola\n");
    db.queryProfesores("SELECT  Nombre, Tipo_De_Clase, Fecha, Hora FROM clases, profesores WHERE Nombre='Pedro'");
    return 0;
}
