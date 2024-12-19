#include <iostream> 
using namespace std;
int main() { 
int price, delievery_cost, sale, total;
cout << "Введите стоимость товара: " << endl;
cin >> price;
cout << "Введите стоимость доставки: " << endl;
cin >> delievery_cost;
cout << "Введите скидку: " << endl;
cin >> sale;
total = price + delievery_cost - sale;
cout << "Итоговая цена: " << total << endl;
}