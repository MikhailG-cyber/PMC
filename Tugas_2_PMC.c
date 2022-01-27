#include<stdio.h>
#include<conio.h> 
int main() 
{ 
      int i, batas, total = 0, t,waktu_kuantum, counter= 0 ; 
      int waktu_tunggu = 0, waktu_penyelesaian = 0, waktu_kedatangan[50], waktu_eksekusi[50], temp[50]; 
      printf("\nMasukkan banyaknya P:\t"); 
      scanf("%d", &batas); 
      t = batas; 
      for(i = 0; i < batas; i++) 
      {
            printf("\nMasukan P antrian[%d]\n", i + 1);
            printf("Waktu kedatangan:\t");
            scanf("%d", &waktu_kedatangan[i]);
            printf("Waktu eksekusi:\t");
            scanf("%d", &waktu_eksekusi[i]); 
            temp[i] = waktu_eksekusi[i];
      } 
      printf("\nMasukkan waktu kuantum:\t"); 
      scanf("%d", &waktu_kuantum); 
      printf("\nP\t\tWaktu eksekusi\t Waktu penyelesaian\t Waktu tunggu\n");
      for(total = 0, i = 0; t != 0;) 
      { 
            if(temp[i] <= waktu_kuantum && temp[i] > 0) 
            { 
                  total = total + temp[i]; 
                  temp[i] = 0;
				  	counter= 1; 
             	
            } 
            else if(temp[i] > 0) 
            { 
                  temp[i] = temp[i] - waktu_kuantum; 
                  total = total + waktu_kuantum; 
            } 
            else if(temp[i] == 0&& counter == 1) 
            { 
                  t--; 
                  printf("\nP[%d]\t\t%d\t\t %d\t\t\t %d", i + 1, waktu_eksekusi[i], total - waktu_kedatangan[i], total - waktu_kedatangan[i] -waktu_eksekusi[i]);
              	  waktu_tunggu = waktu_tunggu + total - waktu_kedatangan[i] - waktu_eksekusi[i]; 
        		  waktu_penyelesaian =  waktu_penyelesaian + total - waktu_kedatangan[i]; 
                  counter = 0;
            } 
            else if(i == batas - 1) 
            {
                  i = 0; 
            }
            else if(waktu_kedatangan[i + 1] <= total) 
            {
                  i++;
            }
            else 
            {
                  i = 0;
            }
      }  
      return 0; 
}
