#ifndef CUSTOMER_CONTROLLER_H
#define CUSTOMER_CONTROLLER_H

#include <vector>
#include "Customer.h"

class CustomerController {
private:
    std::vector<Customer> customers;  // Almacena los clientes

public:
    CustomerController() = default;

    void createCustomer(const std::string& nombre, const std::string& apellido, const std::string& direccion);
    Customer* getCustomerByID(int id);
    bool customerExists(int id) const;
    void listCustomers() const;
};

#endif // CUSTOMER_CONTROLLER_H