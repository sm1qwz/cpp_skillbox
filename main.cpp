#include <iostream> 
using namespace std;
int main() { 
int total, podezd, kvartiri, ur_price;
cout << "Приветствуем вас в калькуляторе кварт.платы!:)" << endl;
cout << "Введите сумму, указанную в квитанции: " << endl;
cin >> total;
cout << "Введите количество подъездов в вашем ЖК:  " << endl;
cin >> podezd;
cout << "Введите кодичество квартир в вашем подъезде: " << endl;
cin >> kvartiri;
ur_price = total / (podezd * kvartiri);
cout << "Идёт подсчёт..." << endl;
cout << "Стоимость вашей кварт.платы составляет: " << ur_price << " рублей, хорошего дня!";
}