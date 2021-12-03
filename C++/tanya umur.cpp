#include <stdio.h>
#include <conio.h>
void main()
{
char nama[10];
int umur;
printf("Silakan masukan nama anda:");scanf("%s",nama);
printf("Silakan masukan umur anda:");scanf("%d",&umur);
if(umur<5)
printf("Anda saat ini masih balita");
else if(umur<17)
printf("Anda saat ini dibawah umur");
else if(umur<45)
printf("Anda saat ini sudah dewasa");
else if(umur<55)
printf("Anda saat ini sudah cukup tua");
else if(umur<75)
printf("Anda saat ini sudah tua bangka");
else
printf("Anda saat ini sudah sesepuh");
getche();
}
