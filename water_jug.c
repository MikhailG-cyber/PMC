#include <stdio.h>


//Intruksi: 
//1. A dikosongkan
//2. B dikosongkan
//3. A diisi penuh sebanyak 3 liter
//4. B diisi penuh sebanyak 5 liter
//5. A dipindahkan ke B
//6. B dipindahkan ke A



int main(){
 int step, jumlah_step;
 int A, B = 0;
 while(B != 4){
  printf("Step yang dimasukkan?");
  scanf("%d" , &step);
  if(step == 1){
   A = 0;
  }
  else if(step == 2){
   B = 0;
  }
  else if(step == 3){
   A = 3;
  }
  else if(step == 4){
   B = 5;
  }
  else if(step == 5){
   if(A + B >= 5 && A > 0){
    A = A - (5 - B); 
    B = 5;
   }
   else if(A + B <= 5 && A > 0){
    B = A + B;
    A = 0;
   }
   else{
    printf("error");
   }
  }
   
  else if(step == 6){
   if(A + B >= 3 && B > 0){
    B = B - (3 - A);
    A = 3;
   }
   else if(A + B <= 3 && B > 0){
    A = A + B;
    B = 0;
   }
   else{
    printf("error");
   }
  } 
  else{
   printf("error");
  }

  printf(" A sebanyak %d liter\n", A);
  printf(" B sebanyak %d liter\n", B);
  jumlah_step = jumlah_step + 1;
    }
    printf("\nJumlah step yang diperlukan sebanyak %d step ",jumlah_step);
    return 0;
}
