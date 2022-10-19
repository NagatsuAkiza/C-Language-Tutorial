void main()
{
  int nilai;

  printf("inputkan nilai : ");
  scanf("%d", &nilai);

  if (nilai >= 81 && nilai <= 100)
  {
    printf("\nNilai A");
  }
  else if (nilai >= 71 && nilai <= 80)
  {
    printf("\nNilai B");
  }
  else if (nilai >= 61 && nilai <= 70)
  {
    printf("\nNilai C");
  }
  else
  {
    printf("\nAnda tidak lulus");
  }
}
