#include <fstream>
#include <iostream>
using namespace std;

struct hachi {
    string name;
    long int artical;
    int count;
    double price;
    unsigned short int sale;
};
int main() {
    setlocale(LC_ALL, "russian");
    int col; //Вводим колличетво позиций
    cout << "Введите колличество позиций: ";
    cin >> col;
    struct hachi pdr;  //Выделяем память под структуру
    hachi *pdr1 = new hachi;
    FILE *BD = fopen ("RUSSIA_SILA_KAVKAZCI_GNIDU.dat", "wb");  // Это первый пункт, в ВС писать fopen_s
    hachi about[col];
    
    // ЗАПОЛНЕНИЕ СТРУКТУРЫ
    for (int i = 0; i < col; i++){
        cout << "Наименование: ";
        cin >> about[ i ].name;
        cout << "Артикул: ";
        cin >> about[ i ].artical;
        cout << "Колличество: ";
        cin >> about[ i ].count;
        cout << "Цена: ";
        cin >> about[ i ].price;
        cout << "Скидка: ";
        cin >> about[ i ].sale;
    }
    
    //ВЫВОД НА ЭКРАН В ВИДЕ
    //Артикул Наименование Цена Количество Скидка
    for (int j = 0; j < col; j++) {
        cout << about[ j ].name << " | " << about[ j ].artical << " | " << about[ j ].count << " | " << about[ j ].price << " | " << about[ j ].sale << endl;
    }
    fclose(BD); // Закрытие БД
}
