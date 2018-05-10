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

int menu0() {                                                      //Создание структуры для меню
    int variant0;
    cout << "\nСоздать БД\n" << endl;
    cout << "\nЗагрузить данные\n" << endl;
    cout << ">>>";
    cin >> variant0;
    return variant0;
}

int menu1() {                                                      //Создание структуры для меню
    int variant1;
    cout << "\nСоздать БД\n" << endl;
    cout << "\nВывести все позиции в формате \n" << endl;
    cout << "\nВыход\n" << endl;
    /*cout << "Добавить позицию\n" << endl;
     cout << "Поиск позиции по артикулу" << endl;
     cout << "Вывести все позиции со скидкой" << endl;
     cout << "Вывести все позиции, которых нет в наличии" << endl;
     cout << "Отсортировать все позиции по указанному полю" << endl;
     cout << "Сохранить БД\n" << endl;*/
    cout << ">>>";
    cin >> variant1;
    return variant1;
}

void array_new_bd ( int n, hachi about[])
{
    for (int i = 0; i < n; i++){
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
};

void array_find_artical ( int l, int n, hachi about[])
{
    cout << "Введите артикул";
    cin >> l;
    for (int s = 0; s < n; s++) {
        if (about[ s ].artical == l)
        {
            cout << about[ s ].name << " | " << about[ s ].artical << " | " << about[ s ].count << " | " << about[ s ].price << " | " << about[ s ].sale << endl;
            //ДОПИЛИТЬ ПЕРЕЗАПИСЬ ДАННЫХ, ПОСЛЕ ТОГО КАК ДАНЯ ПРИШЛЕТ КНОПКИ
            //УДАЛЕНИЕ ПОЗИЦИЙ
        }
    }
};

void array_print ( int n, hachi about[])
{
    for (int j = 0; j < n; j++) {
        cout << about[ j ].name << " | " << about[ j ].artical << " | " << about[ j ].count << " | " << about[ j ].price << " | " << about[ j ].sale << endl;
    }
};

void array_sale ( int n, hachi about[])
{
    for (int r = 0; r < n; r++) {
        if (about[ r ].sale > 0)
        {
            cout << about[ r ].name << " | " << about[ r ].artical << " | " << about[ r ].count << " | " << about[ r ].price << " | " << about[ r ].sale << endl;
        }
    }
};

void array_count ( int n, hachi about[])
{
    for (int l = 0; l < n; l++) {
        if (about[ l ].count == 0)
        {
            cout << about[ l ].name << " | " << about[ l ].artical << " | " << about[ l ].count << " | " << about[ l ].price << " | " << about[ l ].sale << endl;
        }
    }
};


int main() {
    setlocale(LC_ALL, "russian");
    int col;
    long int find_artical;
    struct hachi pdr;
    hachi *pdr1 = new hachi;
    hachi about[col];
    
    //MENU-0
    FILE *base;
    int variant0 = menu0();
    switch (variant0)
    {
        case 1:
            base = fopen("/Users/andrvdnl/Desktop/base.dat", "wb");
            cout << "Введите колличество позиций: ";
            cin >> col;
            array_new_bd(col, about);
            fclose(base);
            break;
            
        case 2:
            break;
    }
    
    //MENU-1
    int variant1 = menu1();
    bool ok = false;
    while (ok != true) {
        switch (variant1)
        {
            case 1:
                base = fopen("base.dat", "wb");
                cout << "Введите колличество позиций: ";
                cin >> col;
                array_new_bd(col, about);
                fclose(base);
                break;
                
            case 2:
                array_print(col, about);
                break;
                
            case 3:
                ok = true;
                break;
        }
    }
    array_find_artical(find_artical, col, about);
    array_sale(col, about);
    array_count(col, about);
    
}
