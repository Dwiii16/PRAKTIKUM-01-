
alas = 5
tinggi = 12
alas = 5
sisi_A = tinggi
sisi_C = alas
sisi_B = (alas**2 + tinggi**2) ** 0.5

keliling = sisi_A + sisi_B + sisi_C
luas = (alas * tinggi) / 2

print("Diketahui :")
print()
print("Alas = %d cm" % alas)
print("Tinggi = %d cm" % tinggi)

print()
print("Jawab :")
print()
print("Sisi A = %.0f cm" % sisi_A)
print("Sisi B = %.0f cm" % sisi_B)
print("Sisi C = %.0f cm" % sisi_C)
print("Keliling = %.0f cm" % keliling)
print("Luas = %.0f cm" % luas)