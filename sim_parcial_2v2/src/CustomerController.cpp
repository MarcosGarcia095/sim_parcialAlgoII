#include "CustomerController.h"
#include <iostream>

void CustomerController::createCustomer(const std::string& nombre, const std::string& apellido, const std::string& direccion) {
    int id = customers.size() + 1;  // Genera un ID único basado en el tamaño del vector
    customers.emplace_back(id, nombre, apellido, direccion);
}

Customer* CustomerController::getCustomerByID(int id) {
    for (auto& customer : customers) {
        if (customer.getId() == id) {
            return &customer;
        }
    }
    return nullptr; // Retorna nullptr si no se encuentra el cliente
}

bool CustomerController::customerExists(int id) const {
    for (const auto& customer : customers) {
        if (customer.getId() == id) {
            return true;
        }
    }
    return false;
}

void CustomerController::listCustomers() const {
    for (const auto& customer : customers) {
        std::cout << "ID: " << customer.getId() << ", Nombre: " << customer.getNombre()
                  << " " << customer.getApellido() << ", Dirección: " << customer.getDireccion() << std::endl;
    }
}