#include <stdio.h>

int main() {
    int penize = 24600;

    if(penize < 5000){
          printf("Bankovka 5000 : 0x\n");
    }if(penize >= 5000){
          int pettisic = penize / 5000;
          penize -= pettisic * 5000;
          printf("Bankovka 5000 : %dx\n", pettisic);

     }if(penize < 2000){
          printf("Bankovka 2000 : 0x\n");
     }if(penize >= 2000){
          int dvatisice = penize / 2000;
          penize -= dvatisice * 2000;
          printf("Bankovka 2000 : %dx\n", dvatisice);

     }if(penize < 1000){
          printf("Bankovka 1000 : 0x\n");
    }if(penize >= 1000) {
          int tisic = penize / 1000;
          penize -= tisic * 1000;
          printf("Bankovka 1000 : %dx\n", tisic);

     }if(penize < 500){
          printf("Bankovka 500 : 0x\n");
    }if (penize >= 500) {
          int petset = penize / 500;
          penize -= petset * 500;
          printf("Bankovka 500 : %dx\n", petset);

     }if(penize < 200){
          printf("Bankovka 200 : 0x\n");
    }if (penize >= 200) {
          int dveste = penize / 200;
          penize -= dveste * 200;
          printf("Bankovka 200 : %dx\n", dveste);

     }if(penize < 100){
          printf("Bankovka 100 : 0x\n"); 
    }if (penize >= 100) {
          int sto = penize / 100;
          penize -= sto * 100;
          printf("Bankovka 100 : %dx\n", sto);
    }
return 0;
}