#include <stdio.h>

/*Operator Aritmatika
Operator yang digunakan untuk melakukan operasi aritmatika / matematika

Operator    Keterangan          Contoh
+           Penjumlahan         a = b + c
-           Pengurangan         a = b - c
*           Perkalian           a = b * c
/           Pembagian           a = b / c
%           Modulus(sisa bagi)  a = b % c
*/

/*Operator Increment & Decrement
Operator yang digunakan untuk menambahkan satu nilai sedangkan decrement untuk mengurangi satu nilai.

Operator      Keterangan      Contoh
++            Increment       a++
                              ++a
--            Decrement       a--
                              --a

Penggunaan dari increment dan decrement itu sama fungsi di taruh di bagian luar sebelum variable.
*/

/*Operator Relasi
Operator yang digunakan untuk membandingkan 2 buah nilai.
Hasil dari perbandingan berupa nilai 1(true) atau 0(false).

Operator      Keterangan          Contoh
==            Sama dengan         a == b
!=            Tidak sama dengan   a != b
>             Lebih besar         a > b
<             Lebih kecil         a < b
>=            Lb sama dengan      a >= b
<=            Kd sama dengan      a <= b
*/

/*Operator Logika
Operator yang digunakan untuk menangani data boolean.

Opt Lgk     Keterangan    Contoh              Deskripsi
&&          And           a&&b     bernilai 1 jika a dan b bernilai 1
||          Or            a||b     bernilai 1 jika a dan b bernilai 1
!           Not           !a       bernilai 1 jika a bernilai 0
^           Xor           a^b      bernilai 1 jika salah satu variable bernilai 1
*/

/*Tabel Logika && (And)
Variable 1        Variable 2        Variable 3
1                 1                 1
1                 0                 0
0                 1                 0
0                 0                 0

Aturan masuk kampus: BERSEPATU DAN MEMAKAI KEMEJA
Si Luffy ke kampus bersepatu dan memakai kaos. Benar atau salah? SALAH! (contoh salah).
Si Rehan ke kampus bersepatu dan memakai kemeja.
BENAR (contoh benar).

jika yang terpenuhi hanya satu syarat, maka akan menghasilkan false(salah).
sifat dari logika And semua variable bernilai true
jika salah satu false maka dianggap false
*/

/*Table Logika || (OR)
Variable 1      Variable 2      hasil
1               1               1
1               0               1
0               1               1
0               0               0

Sifat dari Logika (OR) ini adalah hanya memilih salah satu dari variable yang benar saja, asalkan memenuhi satu nilai saja hasilnya tetap akan (true),
Ini akan salah jika variable keduanya memiliki nilai (false).

misal berangkat kesekolah bisa naik : motor atau mobil

Si unyil ke sekolah pakai motor. Benar karena memenuhi syarat

Si opet ke sekolah pakai truk. Salah karena tidak memenuhi salah satu syarat.
*/

/*Tabel Logika ! (NOT) negasi
Variable 1    Hasil
1             0
0             1
*/

/*Tabel Logika ^ (XOR)
Variable 1    Variable 2    Hasil
1             1             0
0             0             1
0             1             1
0             0             0

Sifat dari Logika XOR ketika kedua variable, itu sama sama bernilai true atau false maka keduanya akan bernilai false.
dan ketika salah satu true dan salah satunya false maka akan bernilai true.

XOR sering digunakan dalam pemrograman Microcontroler.
*/

/*Operator Bitwise
Operator yang digunakan untuk operasi bit per bir (biner) pada nilai integer.

Operator    Keterangan    Contoh       Biner       Hasil biner   Hasil Desimal
&           And           10&12     1010 & 1100    1000          8
|           Or            10|12     1010 | 1100    1110          14
~           Not           ~10                                   -11  (~n = -(n+1)
                                                                      ~(-n) = (n-1))
^           Xor           10^12     1010 ^ 1100    0110          6
<<          Lft Shift     10<<1     1010 << 1      10100         20 (digeser ke kiri, di ujung kanan ditambah 0)
>>          Rgt Shift     10>>1     1010 >> 1      0101          5  (digeser ke kanan,)

berbeda dengan operator logika yang menampung nilai boolean antara nilai satu dan 0,
operator bitwise menampung nilai desimal yang di ubah kebiner yang lebih dari 1 (1010,0110,0101,dll)
*/

/*Operator Penugasan
Merupakan operator yang digunakan untuk memberi nilai pada variable.

Operator    Contoh    Serupa Dengan   Deskripsi
=           x = 10    x = 10          Variable x memperoleh nilai 10
+=          x += 10   x = x + 10      Variable x memperoleh nilai dari x + 10
-=          x -= 10   x = x - 10      Variable x memperoleh nilai dari x - 10
*=          x -= 10   x = x - 10      Variable x memperoleh nilai dari x * 10
/=          x -= 10   x = x - 10      Variable x memperoleh nilai dari x / 10
*/

/*Operator ternary
Yaitu Operator yang memiliki 3 simbol operand ...? ...: ...; yang berfungsi untuk percabangan / membuat kondisi

Contoh
kamu suka aku ? ya : tidak;
(?) operator ternary jawaban benar di letakkan sebelum (:) dan jawaban salahnya di letakkan sebelum (;).
*/

/*Contoh Operator Increment dan Decrement
void main()
{
  int a = 10;
  ++a;
  printf("%d", a);
}

void main()
{
  int a = 10;
  --a;
  printf("%d", a);
}
*/

/*Contoh Operator Relasi
void main()
{
  int a = 10;
  int b = 5;

  int hasilSama = a == b;
  printf("%d", hasilSama);

  int c = 10;
  int d = 5;

  int hasilTidaksama = c != d;
  printf("%d", hasilTidaksama);
}

Hasil yang diberikan jika benar adalah 1(false) jika salah adalah 0(false)*/

/* penerapan operator logika
void main()
{
  int a = 1; // true
  int b = 0; // false

  printf("a = %d", a);
  printf("\nb = %d", b);

  printf("\n\na && b = %d", a && b); // logika and //false
  printf("\na || b = %d", a || b);   // logika or //true
  printf("\n!a = %d", !a);           // logika not //false
  printf("\na ^ b = %d", a ^ b);     // logika xor //true
}
*/

/* Penerapan Operator Bitwise
void main()
{
  int a = 20;
  int b = 15;

  printf("\na & b = %d", a & b); // 10100 & 01111 = 00100 = 4
  printf("\na | b = %d", a | b);
  printf("\n~a = %d", ~a);
  printf("\na ^ b = %d", a ^ b);
}
*/

/* Contoh penerapan Operator Penugasan
void main()
{
  int a = 5;
  a += 10;
  printf("%d", a);
}
*/

// Penerapan operator logika ternary
/*
void main()
{
  int a = 4;

  printf("%s", a > 5 ? "benar" : "salah");
}

void main()
{
  int bulanke = 2;

  printf("%s", bulanke == 1 ? "Bulan Januari" : bulanke == 2 ? "Bulan Februari"
                                                              : "Bulan yang lain");
}
*/

void main()
{
  int nilaiAngka = 85;
  char nilaiHuruf = nilaiAngka >= 80 && nilaiAngka <= 100 ? 'A' : 'X';

  printf("Nilai Angka %d = %c", nilaiAngka, nilaiHuruf);
}