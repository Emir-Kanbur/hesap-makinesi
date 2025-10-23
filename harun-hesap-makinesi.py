
print("Yapmak istediğin işlemi seç:")
print("1-Toplama\n2-Çıkarma\n3-Çarpma\n4-Bölme")


a = int(input("Bir sayı giriniz: "))
if (a == 1):
    b = int(input("İlk sayıyı giriniz "))
    c = int(input("İkinci sayıyı giriniz "))
    d = b + c
    print("Sonuç",d)
elif (a == 2):
    b = int(input("İlk Sayıyı giriniz "))
    c = int(input("İkinci Sayıyı giriniz "))
    d = b - c 
    print("Sonuç",d)
elif (a == 3):
    b = int(input("İlk Sayıyı giriniz "))
    c = int(input("İkinci Sayıyı giriniz "))
    d = b * c 
    print("Sonuç",d)
elif (a == 4):
    b = int(input("İlk Sayıyı giriniz "))
    c = int(input("İkinci Sayıyı giriniz "))
    d = b / c 
    print("Sonuç",d)
else:
    print("Lütfen yukarıdaki sayılardan birini giriniz")