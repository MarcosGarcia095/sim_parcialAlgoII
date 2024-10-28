#include "Customer.h"

Customer::Customer(int id, const std::string& nombre, const std::string& apellido, const std::string& direccion)
    : id(id), nombre(nombre), apellido(apellido), direccion(direccion) {}

int Customer::getId() const {
    return id;
}

std::string Customer::getNombre() const {
    return nombre;
}

std::string Customer::getApellido() const {
    return apellido;
}

std::string Customer::getDireccion() const {
    return direccion;
}