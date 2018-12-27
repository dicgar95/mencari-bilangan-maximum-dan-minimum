#include <stdio.h>

void main() {
  int n,i,max,min,bil;
  printf("Program mencari nilai maximum dan minimum\n");
  printf("\n masukan banyak data :");
  scanf("%d",&n);
  printf("\n Masukan bilangan ke-1 :");
  scanf("%d",&bil );

  max=bil;
  min=bil;

  for (size_t i = 2; i <= n; i++){
    printf("\n masukan bilangan ke-%d :",i );
    scanf("%d",&bil );
    if(bil>max)max=bil;
    if(bil<min)min=bil;
  }
  printf("\n Nilai maximumnya adalah %d\n",max );
  printf("\n Nilai minimumnya adalah %d\n",min );
}
