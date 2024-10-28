#include "Order.h"

Order::Order(int id, int customerID, int articleID)
    : id(id), customerID(customerID), articleID(articleID) {}

int Order::getId() const {
    return id;
}

int Order::getCustomerID() const {
    return customerID;
}

int Order::getArticleID() const {
    return articleID;
}
