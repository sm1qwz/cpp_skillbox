#include <iostream> 
using namespace std;
int main() { 
int total_time, order_time, serve_time, clients;
cout << "Добро пожаловать! Наша программа посчитает всё за вас:)" << endl;
cout << "Сколько длится рабочая смена в минутах?" << endl;
cin >> total_time;
cout << "Сколько клиент делает заказ?" << endl;
cin >> order_time;
cout << "Сколько времени официант обслуживает клиента?" << endl;
cin >> serve_time;
cout << "---Идёт подсчёт---" << endl;
clients = total_time / (order_time + serve_time);
cout << "Ваш официант сможет обслужить " << clients << " клиентов за " << total_time << " минут рабочей смены!";
}