#ifndef ORDER_CONTROLLER_H
#define ORDER_CONTROLLER_H

#include <vector>
#include "Order.h"
#include "CustomerController.h"
#include "ArticleController.h"

class OrderController {
private:
    std::vector<Order> orders;  // Almacena los pedidos

public:
    OrderController() = default;

    void createOrder(int customerID, int articleID);
    void showOrdersByCustomer(int customerID) const;
    void showAllOrders() const;
};

#endif // ORDER_CONTROLLER_H