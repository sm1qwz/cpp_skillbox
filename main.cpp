#include <iostream> 
using namespace std;
int main() { 
int total_time, order_time, serve_time, clients;
cout << "Приветствуем вас в нашем ресторане! Эта программа посчитает количество обслуженных клиентов за вас." << endl;
cout << "Введите длительность смены в минутах: " << endl;
cin >> total_time;
cout << "Сколько минут клиент делает заказ?" << endl;
cin >> order_time;
cout << "Сколько минут официант подаёт заказ?" << endl;
cin >> serve_time;
cout << "-------Идёт подсчёт-------" << endl;
clients = total_time / (order_time + serve_time);
cout << "Ваш официант сможет обслужить " <<  clients << " клиентов за " << total_time << " минут рабочего времени";
}