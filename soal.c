#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int a = 0, b, d, e = 151200, kode['0'], c, menu = 0, harga['0'], jumlah['0'], tunai['0'], jumharga['0'], ppn['0'], totharga['0'], pemasukan;
char nama['0'][32], baris[64];

FILE *jual;

void cekjual();
void inputjual();
void viewjual();
void carijual();
void cari();
void updatejual();
void hapusjual();
void wjual();

void cekjual()
{
  rewind(jual);
  if (fgets(baris, 64, jual) == NULL)
  {
    a = 0;
    fprintf(jual, "Data Penjualan");
  }
  else
  {
    while (!feof(jual))
    {
      a++;
      fscanf(jual, "\nKode Barang : %d\nNama Barang : %s\nHarga Barang : %d\nJumlah Barang : %d\nJumlah harga : %d\nPPN : %d\nTotal Harga : %d", &kode[a], nama[a], &harga[a], &jumlah[a], &jumharga[a], &ppn[a], &totharga[a]);
    }
    e = kode[a];
  }
}

void inputjual()
{
  b = 1;
  d = 0;
  while (b == 1)
  {
    a++;
    e++;
    kode[a] = e;
    printf("\n Kode Jual              : %d\n", kode[a]);
    printf(" Masukkan Nama Barang   : ");
    scanf(" %s", nama[a]);
    printf(" Masukkan Harga Barang  : Rp.");
    scanf(" %d", &harga[a]);
    printf(" Masukkan Jumlah Barang : ");
    scanf(" %d", &jumlah[a]);
    jumharga[a] = harga[a] * jumlah[a];
    printf(" Jumlah harga           : Rp.%d\n", jumharga[a]);
    ppn[a] = jumharga[a] * 10 / 100;
    printf(" PPN                    : Rp.%d\n", ppn[a]);
    totharga[a] = jumharga[a] + ppn[a];
    printf(" Total Harga            : Rp.%d\n", totharga[a]);
    fprintf(jual, "\nKode Barang : %d\nNama Barang : %s\nHarga Barang : %d\nJumlah Barang : %d\nJumlah harga : %d\nPPN : %d\nTotal Harga : %d", kode[a], nama[a], harga[a], jumlah[a], jumharga[a], ppn[a], totharga[a]);
    d = d + totharga[a];
    printf("\n Harga Yang Harus Dibayar : Rp.%d", d);
    printf("\n\n ketik 1 untuk input lagi : ");
    scanf("%d", &b);
  }
}

void viewjual()
{
  pemasukan = 0;
  puts("");
  if (a < 1)
  {
    printf(" Data Masih Kosong");
  }
  else
  {
    b = 1;
    while (b <= a)
    {
      printf("%d.Kode Jual     : %d\n", b, kode[b]);
      printf("  Nama Barang   : %s\n", nama[b]);
      printf("  Harga Barang  : Rp.%d\n", harga[b]);
      printf("  Jumlah Barang : %d\n", jumlah[b]);
      printf("  Jumlah harga  : Rp.%d\n", jumharga[b]);
      printf("  PPN           : Rp.%d\n", ppn[b]);
      printf("  Total Harga   : Rp.%d\n", totharga[b]);
      printf("------------------\n");
      pemasukan = pemasukan + totharga[b];
      b++;
    }
    printf("\n Total Pemasukan : Rp.%d", pemasukan);
  }
  puts("");
}

void carijual()
{
  printf(" Kode Jual Yang Akan Dicari : ");
  scanf("%d", &c);
  cari();
  if (d > 0)
  {
    b--;
    printf("%d.Kode Jual     : %d\n", b, kode[b]);
    printf("  Nama Barang   : %s\n", nama[b]);
    printf("  Harga Barang  : Rp.%d\n", harga[b]);
    printf("  Jumlah Barang : %d\n", jumlah[b]);
    printf("  Jumlah harga  : Rp.%d\n", jumharga[b]);
    printf("  PPN           : Rp.%d\n", ppn[b]);
    printf("  Total Harga   : Rp.%d\n", totharga[b]);
    printf("------------------\n");
  }
  else
  {
    printf(" Kode Jual Anda Mungkin Sudah Usang");
  }
}

void cari()
{
  b = 1;
  d = 0;
  while (b <= a && d == 0)
  {
    if (c == kode[b])
    {
      d++;
    }
    b++;
  }
}

void updatejual()
{
  printf(" Kode Barang Yang Akan Diupdate : ");
  scanf("%d", &c);
  cari();
  puts("");
  if (d < 1)
  {
    printf(" Data Yang Akan Anda Update Mungkin Tidak Ada");
  }
  else
  {
    b--;
    printf("%d.Kode Jual     : %d\n", b, kode[b]);
    printf("  Nama Barang   : %s\n", nama[b]);
    printf("  Harga Barang  : Rp.%d\n", harga[b]);
    printf("  Jumlah Barang : %d\n", jumlah[b]);
    printf("  Jumlah harga  : Rp.%d\n", jumharga[b]);
    printf("  PPN           : Rp.%d\n", ppn[b]);
    printf("  Total Harga   : Rp.%d\n", totharga[b]);
    printf("------------------\n");
    printf(" Masukkan Nama Barang   : ");
    scanf(" %s", nama[b]);
    printf(" Masukkan Harga Barang  : Rp.");
    scanf(" %d", &harga[b]);
    printf(" Masukkan Jumlah Barang : ");
    scanf(" %d", &jumlah[b]);
    jumharga[b] = harga[b] * jumlah[b];
    printf(" Jumlah harga           : Rp.%d\n", jumharga[b]);
    ppn[b] = jumharga[b] * 10 / 100;
    printf(" PPN                    : Rp.%d\n", ppn[b]);
    totharga[b] = jumharga[b] + ppn[b];
    printf(" Total Harga            : Rp.%d\n", totharga[b]);
  }
  puts("");
}

void wjual()
{
  fclose(jual);
  jual = fopen("penjualan.txt", "w+");
  fclose(jual);
  jual = fopen("penjualan.txt", "a+");
  fprintf(jual, "Data Penjualan");
  b = 1;
  while (b <= a)
  {
    fprintf(jual, "\nKode Barang : %d\nNama Barang : %s\nHarga Barang : %d\nJumlah Barang : %d\nJumlah harga : %d\nPPN : %d\nTotal Harga : %d", kode[b], nama[b], harga[b], jumlah[b], jumharga[b], ppn[b], totharga[b]);
    b++;
  }
}

void hapusjual()
{
  printf(" Kode Barang Yang Ingin Dihapus : ");
  scanf("%d", &c);
  cari();
  puts("");
  if (d < 1)
  {
    printf(" Data Yang Akan Anda Delete Mungkin Tidak Ada");
  }
  else
  {
    b--;
    printf(" Data %d Berhaasil Didelete", kode[b]);
    while (b < a)
    {
      kode[b] = kode[b + 1];
      strcpy(nama[b], nama[b + 1]);
      harga[b] = harga[b + 1];
      jumlah[b] = jumlah[b + 1];
      jumharga[b] = jumharga[b + 1];
      ppn[b] = ppn[b + 1];
      totharga[b] = totharga[b + 1];
      b++;
    }
    a--;
  }
  puts("");
}

int main()
{
  jual = fopen("penjualan.txt", "a+");
  cekjual();
  while (menu != 6)
  {
    system("cls");
    printf("          M E N U          \n");
    printf("===========================\n");
    printf(" 1. Input Penjualan\n");
    printf(" 2. View Penjualan\n");
    printf(" 3. Search Penjualan\n");
    printf(" 4. Update Penjualan\n");
    printf(" 5. Delete Penjualan\n");
    printf("===========================\n");
    printf(" 6. Exit\n");
    printf("===========================\n : ");
    scanf("%d", &menu);

    system("cls");
    puts("");
    if (menu == 1)
    {
      inputjual();
      getch();
    }
    else if (menu == 2)
    {
      viewjual();
      getch();
    }
    else if (menu == 3)
    {
      carijual();
      getch();
    }
    else if (menu == 4)
    {
      updatejual();
      getch();
    }
    else if (menu == 5)
    {
      hapusjual();
      getch();
    }
    else if (menu != 6)
    {
      printf(" Pilih Menu Yang Tersedia");
      getch();
    }
    wjual();
    puts("");
  }
  fclose(jual);
  return 0;
}