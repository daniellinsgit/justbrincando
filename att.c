#include <stdio.h>
#include <string.h>

int main() {
  char resposta[2];

  printf("Você gostaria de atualizar o programinha dahora? (S/N)\n");
  scanf("%s", resposta);
  if (strcmp(resposta, "s") == 0) {
    printf("Prosseguindo com a atualização...\n");
  } else if (strcmp(resposta, "S") == 0) {
    printf("Prosseguindo com a atualização...\n");
  } else {
    printf("Operação abortada.\n");
  }
  return 0;
}
