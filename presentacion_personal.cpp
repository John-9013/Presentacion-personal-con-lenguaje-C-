#include <iostream>
#include <string>

using namespace std;

class PresentacionPersonal {
private:
    string nombre;
    string perfil;
    int edad;
    string pais;
    string ciudad;

public:
    PresentacionPersonal(const string& nombre, const string& perfil, int edad, const string& pais, const string& ciudad) {
        this->nombre  = nombre;
        this->perfil  = perfil;
        this->edad    = edad;
        this->pais    = pais;
        this->ciudad  = ciudad;
    }

    string getNombre()  { return nombre; }
    string getPerfil()  { return perfil; }
    int    getEdad()    { return edad; }
    string getPais()    { return pais; }
    string getCiudad()  { return ciudad; }

    void mostrarPresentacion() {
        cout << "========================================" << endl;
        cout << "       PRESENTACION PERSONAL            " << endl;
        cout << "========================================" << endl;
        cout << "Nombre  : " << nombre  << endl;
        cout << "Perfil  : " << perfil  << endl;
        cout << "Edad    : " << edad    << " años"       << endl;
        cout << "Pais    : " << pais    << endl;
        cout << "Ciudad  : " << ciudad  << endl;
        cout << "========================================" << endl;
    }
};

int main() {
    PresentacionPersonal persona(
        "John Edison Sarmiento",
        "Estudiante Programacion Software",
        36,
        "Colombia",
        "Bogota DC"
    );

    persona.mostrarPresentacion();

    return 0;
}
