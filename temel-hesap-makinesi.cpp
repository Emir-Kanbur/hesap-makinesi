#include <iostream>
using namespace std;

int main() {
    int x; 
    cout << "Yapmak istediğiniz İşlemi Seçiniz: "; 
    cout << "\n1-Toplama\n2-Çıkarma\n3-Çarpma\n4-Bölme\n"; 
    cin >> x; 
    
       if (x == 1) {
        int y;
        int z;
        cout << "İlk sayıyı giriniz ";
        cin >> y;
        cout << "İkinci sayıyı giriniz ";
        cin >> z;
        cout << y + z;
        
    }
    else if (x == 2) {
        int y;
        int z;
        cout << "İlk sayıyı giriniz ";
        cin >> y;
        cout << "İkinci sayıyı giriniz ";
        cin >> z;
        cout << y - z;
        
    }