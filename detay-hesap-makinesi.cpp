#include <iostream>
using namespace std;

int main() {
    int x; 
    cout << "Yapmak istediğiniz İşlemi Seçiniz: "; 
    cout << "\n1-Üs Alma\n2-Karekök\n3-Mod Alma\n4-Faktöriyel\n"; 
    cin >> x; 
    
       if (x == 1) {
        double base;
        double exponent;
        cout << "Taban sayıyı giriniz: ";
        cin >> base;
        cout << "Üs sayıyı giriniz: ";
        cin >> exponent;
        double result = 1;
        for(int i = 0; i < exponent; i++) {
            result *= base;
        }
        cout << "Sonuç: " << result;
        
    }
    else if (x == 2) {
        double number;
        cout << "Karekökünü almak istediğiniz sayıyı giriniz: ";
        cin >> number;
        if(number < 0) {
            cout << "Negatif sayının karekökü alınamaz.";
        } else {
            double result = sqrt(number);
            cout << "Sonuç: " << result;
        }
        
     }
    else if (x == 3) {
        int a, b;
        cout << "Birinci sayıyı giriniz: ";
        cin >> a;
        cout << "İkinci sayıyı giriniz: ";
        cin >> b;
        int result = a % b;
        cout << "Sonuç: " << result;
        
    }
    else if (x == 4) {
        int n;
        cout << "Faktöriyelini almak istediğiniz sayıyı giriniz: ";
        cin >> n;
        if(n < 0) {
            cout << "Negatif sayının faktöriyeli alınamaz.";
        } else {
            long long result = 1;
            for(int i = 1; i <= n; i++) {
                result *= i;
            }
            cout << "Sonuç: " << result;
        }
        
    }

    return 0;
}