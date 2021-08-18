#include <stdio.h>
#include <string.h>
int main(int argc, char** argv) {
   char FuckinSandy[] = "Is Yor Anus = ";
   strcat(FuckinSandy, argv[1]);
   strcat(FuckinSandy, " Or ");
   strcat(FuckinSandy, argv[2]);
   printf(FuckinSandy);
   return 0;
}
