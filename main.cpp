#include "sqlH/sql.h"
#include "usrH/usr.h"

int main() {
    //Se inicializa la base de datos que se va a usar
    std::pmr::string Nombre = "Marco";
    usr M(Nombre);
    //Dentro de la clase sql se llama a la queryProfesores, funcion para obtener los datos
    M.UserData();
    return 0;
}
