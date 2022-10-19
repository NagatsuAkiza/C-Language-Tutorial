#include <stdio.h>

void main()
{
  int usia;
  float ipk;
  char nama[20];

  printf("Masukkan nama anda: ");
  scanf("%s", nama);
  printf("Masukkan usia anda: ");
  scanf("%d", &usia);
  printf("Berapa IPK anda: ");
  scanf("%f", &ipk);

  printf("\nNama anda adalah: %s", nama);
  printf("\nUsia anda adalah: %d tahun ", usia);
  printf("\nIPK anda adalah: %.2f", ipk);
}
