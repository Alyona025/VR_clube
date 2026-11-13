#include <iostream>
using namespace std;

int main() {
int age;
cout << "Age: ";
if (!(cin >> age)){
cout << "INPUT_ERROR\n";
return 0;
}
if (age < 7 || age > 120)
{
    cout << "AGE_ERROR";
    return 0;
}
 int choice; //номер выбранного тарифа
 int price; // цена тарифа
 cout << "Chose tariff:\n";
 cout << "1 - Quest (500)\n";
 cout << "2 - Arena (700)\n";
 cout << "3 - Horror (900)\n";

if (!(cin >> choice)){
cout << "INPUT_ERROR\n";
return 0;
}
switch (choice){
    case 1: 
    price = 500;
    break;

    case 2:
    price = 700;
    break;

    case 3:
    price = 900;
    break;
}
if(age >= 7 && age <= 12){
    price-= 100;
}
cout << "Total= " << price << endl;
}