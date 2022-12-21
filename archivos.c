#include <stdio.h>
#include <stdlib.h>

int main() {
   FILE *archivo;
   FILE *copia;
   int elementos;
   int cont = 0;
   char lista[200];
   archivo = fopen("./SUS.jpg", "rb");
   copia = fopen("copia.jpg", "ab");
   if (archivo == NULL, copia == NULL) {
      printf("El archivo no se puede abrir");
      return 1;
   }
   while (!feof(archivo)) {
      elementos = fread(lista, 1, 200, archivo);
      fwrite(lista, 1, elementos, copia);
      cont++;
   }
   printf("Se leyó 200 caracteres %d veces", cont);
   printf("\n");
   fclose(archivo);
   fclose(copia);
}