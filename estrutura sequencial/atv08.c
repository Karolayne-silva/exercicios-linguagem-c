#include <stdio.h>

int main(){
  float temp;
  
  printf("Adicione a temperatura em graus F:\n");
  scanf("%f",&temp);
  
  float calc=5*((temp-32)/9);
  printf("A temperatura em celsius será:%.2f",calc);

  return 0;
}
