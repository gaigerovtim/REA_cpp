#include <fstream>
#include <iostream>
using namespace std;

struct hachi {
    string name[80];
    long int artical;
    int count;
    double price;
    unsigned short int sale;
};
int main() {
    struct hachi pdr;
    hachi *pdr1 = new hachi;
    FILE *BD = fopen ("RUSSIA_SILA_KAVKAZCI_GNIDU.dat", "wb");  // Это первый пункт, в ВС писать fopen_s
    cin << name << "%n" << artical << "%n" << count << "%n" << price << "%n" << sale << endl;
    fclose(BD);
    
}
