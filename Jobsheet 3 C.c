#include <stdio.h>
#include <conio.h>

main (){
printf ("nama : Jalaludin
Muhammad Akbar\n");
printf ("nim : F1B019074\n ");
printf ("kelompok : 15\n");


int nim1 [2][2]; int nim2 [2][2]; int hasil [2][2]; int i, j;
printf ("Penjumlahan NIM\n");
for (i = 0; i< 2; i++){ for (j = 0; j < 2; j++){ printf ("Masukkan nilai index
%d, %d = ", i, j);
scanf ("%d", &nim1[i][j]);
}
}
printf ("\n");
for (i = 0; i< 2; i++){
for (j = 0; j < 2; j++){
printf ("Masukkan nilai index
%d, %d = ", i, j);
scanf ("%d", &nim2[i][j]);
}
}
for (i = 0; i< 2; i++){ for (j = 0; j < 2; j++){ hasil
[i][j]=nim1[i][j]+nim2[i][j];
printf ("%d ", hasil[i][j]);
}
printf ("\n");
}
getch();
}
