#ifndef RETAILITEM_H
#define RETAILITEM_H


class RetailItem {
private:
    char *description;
    int unitOnHand;
    double price;
public:
    RetailItem(char*, int , double );
    void setDescription(char*);
    void setUnitOnHand(int );
    void setPrice(double );
    char* getDescription();
    int getUnitOnHand();
    double getPrice();
};

#endif