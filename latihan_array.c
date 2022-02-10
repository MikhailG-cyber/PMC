#include <stdio.h>
 #include <stdlib.h>
 
int main(void)
 {
 int k;
 
 
struct{
 char nama[20];
 int nim[10];
 float hadir1;
 float hadir2;
 }dt[5];
 
printf("=====Masukan Data Mahasiswa \n\n");
 
 //Sampel terbatas untuk 5 mahasiswa
 
for(k=0;k<5;k++)
 {
 printf("No. %i \n",k+1);
 printf("Nama = "); scanf("%s",&dt[k].nama);
 printf("Nim = "); scanf("%i",&dt[k].nim);
 printf("Persentase kehadiran setengah semester pertama = "); scanf("%f",&dt[k].hadir1);
 printf("Persentase kehadiran setengah semester kedua = "); scanf("%f",&dt[k].hadir2);
 }
 
printf("|No | Nama | NIM  | Hadir1 | Hadir2 |Total kehadiran |Ket | \n");
 for(k=0;k<5;k++)
 {
 printf("|%i | %s | %i | %.2f | %.2f | %.2f |\n",k+1,dt[k].nama,dt[k].nim,dt[k].hadir1,dt[k].hadir2,(dt[k].hadir1+dt[k].hadir2)*0.5);
 //Asumsi nilai kehadiran dalam persen
if((dt[k].hadir1+dt[k].hadir2)*0.5>=80)
 printf("Boleh mengikuti ujian \n");
 if((dt[k].hadir1+dt[k].hadir2)*0.5 >= 70 || (dt[k].hadir1+dt[k].hadir2)*0.5<80)
 printf("Boleh mengikuti ujian dengan nilai maksimal ujian 90% \n");
 else
 printf("Tidak boleh mengikuti ujian \n");
 }
 
system("pause");
 return(0);
 }
