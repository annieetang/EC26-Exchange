#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

struct Order {
    int id;
    int price;
    int size;
    bool side;
    Order(int id, int price, int size, bool side) : id(id), price(price), size(size), side(side) {}
    string toString() {
        return "id: " + to_string(id) + ", price: " + to_string(price) + ", size: " + to_string(size) + ", isBuy: " + to_string(side);
    }
};

struct Greater {
    bool operator()(const Order& a, const Order& b) {
        return a.price > b.price;
    }
};

struct Less {
    bool operator()(const Order& a, const Order& b) {
        return a.price < b.price;
    }
};

using GreaterQueue = priority_queue<Order, vector<Order>, Greater>;
using LessQueue = priority_queue<Order, vector<Order>, Less>;

class OrderBook {
private:
    unordered_map<int, Order> orders;
    GreaterQueue buyOrders;
    LessQueue sellOrders;
public:
    bool addOrder(int id, int price, int size, bool side) {
        
    }
};