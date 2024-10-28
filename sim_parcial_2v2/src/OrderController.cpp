#include "OrderController.h"
#include <iostream>

void OrderController::createOrder(int customerID, int articleID) {
    int id = orders.size() + 1;  // Genera un ID único para el pedido
    orders.emplace_back(id, customerID, articleID);
}

void OrderController::showOrdersByCustomer(int customerID) const {
    bool found = false;
    for (const auto& order : orders) {
        if (order.getCustomerID() == customerID) {
            std::cout << "Pedido ID: " << order.getId() << ", ID de Cliente: " << order.getCustomerID()
                      << ", ID de Articulo: " << order.getArticleID() << std::endl;
            found = true;
        }
    }
    if (!found) {
        std::cout << "No se encontraron pedidos para el cliente con ID " << customerID << std::endl;
    }
}

void OrderController::showAllOrders() const {
    if (orders.empty()) {
        std::cout << "No hay pedidos en el sistema." << std::endl;
        return;
    }

    for (const auto& order : orders) {
        std::cout << "Pedido ID: " << order.getId() << ", ID de Cliente: " << order.getCustomerID()
                  << ", ID de Articulo: " << order.getArticleID() << std::endl;
    }
}