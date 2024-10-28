#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer {
private:
    int id;
    std::string nombre;
    std::string apellido;
    std::string direccion;

public:
    Customer(int id, const std::string& nombre, const std::string& apellido, const std::string& direccion);

    int getId() const;
    std::string getNombre() const;
    std::string getApellido() const;
    std::string getDireccion() const;
};

#endif // CUSTOMER_H