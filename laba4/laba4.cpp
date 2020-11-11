#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <string>

#define COUNT_CARS 4

#define fflush while (getchar()!='\n')

using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;
    int power;
    int weight;
    string color;
    int cost;

public:
    void init() {
        brand = " ";
        model = " ";
        year = 0;
        power = 0;
        weight = 0;
        color = " ";
        cost = 0;
    }

    void init(string _brand, string _model, int _year, int _power, int _weight, string _color, int _cost) {
        brand = " ";
        model = " ";
        brand = _brand;
        model = _model;
        year = _year;
        power = _power;
        weight = _weight;
        color = " ";
        color = _color;
        cost = _cost;
    }

    void read() { //Ввод данных
        cout << "Enter a brand: ";   cin >> brand;
        cout << "Enter a model: ";   cin >> model;
        cout << "Enter a year: ";    cin >> year;
        cout << "Enter a power: ";   cin >> power;
        cout << "Enter a weight: ";  cin >> weight;
        cout << "Enter a color: ";   cin >> color;
        cout << "Enter a cost: ";    cin >> cost;
    }

    void display() {
        cout << endl;
        cout << brand << endl;
        cout << model << endl;
        cout << year << endl;
        cout << power << endl;
        cout << weight << endl;
        cout << color << endl;
        cout << cost << endl;
        cout << endl;
    }

    void changeColor() {
        cout << "Enter a new color: ";   cin >> color;
    }
};

class Autoshow {
private:
    Car car;
    int count;


public:
    void init() {
        car.init();
        count = 0;
    }

    void init(Car _car, int _count) {
        car = _car;
        count = _count;
    }

    void read() {
        car.read();
        cout << "Enter a count: ";    cin >> count;
    }

    void display() {
        car.display();
        cout << count << endl;
        cout << endl;
    }

    void changeCar(Car _car) {
        car = _car;
    }

    void changeCount(int _count) {
        count = _count;
    }
};

int main() {
    Autoshow ashow;
    Car car;
    car.init("Ford", "F-150", 2013, 400, 3000, "black", 3000000);

    ashow.init();
    ashow.read();
    ashow.display();
    ashow.changeCar(car);
    ashow.display();
    ashow.changeCount(5);
    ashow.display();
    return 0;
}
