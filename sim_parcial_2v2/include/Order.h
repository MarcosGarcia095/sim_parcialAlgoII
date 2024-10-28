
#ifndef ORDER_H
#define ORDER_H

class Order {
private:
    int id;
    int customerID;
    int articleID;

public:
    Order(int id, int customerID, int articleID);

    int getId() const;
    int getCustomerID() const;
    int getArticleID() const;
};

#endif // ORDER_H