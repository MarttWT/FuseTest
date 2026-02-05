#include "sqlH/sql.h"

int main() {
    //Se inicializa la base de datos que se va a usar
    sql db = sql();
    //Dentro de la clase sql se llama a la queryProfesores, funcion para obtener los datos
    db.queryProfesores("SELECT  Nombre, Tipo_De_Clase, Fecha, strftime('%H:%M', Hora) FROM clases, profesores WHERE Nombre='Pedro'");
    return 0;
}
