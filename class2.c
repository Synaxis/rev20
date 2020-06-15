#include <stdio.h>

int main(void) {

  int numero1;
  int numero2;
  int resultado;
  
  printf("Digite dois numeros um seguido do outro para fazer a soma\n");
  
  scanf("%d %d", &numero1, &numero2);
  
  resultado = numero1*numero2;
  printf("o resultado da multiplicacao eh : %d\n", resultado);
  return 0;
}
