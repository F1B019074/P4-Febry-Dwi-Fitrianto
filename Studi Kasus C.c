#include <stdio.h>
#include <stdlib.h>
int saldo=10000000;
void nama(){
	printf (" \n NAMA : JALALUDDIN MUHAMMAD AKBAR\n NIM : F1B019074\n KELOMPOK : 15\n");
	printf("__________________\n");
}
int awal(){
	printf ("  * SELAMAT DATANG DI TOKO KAMI * \n");
	printf ("*  Alamat : JL. SUDIRMAN no. 20 Taliwang KSB *\n");
	printf ("     * No Telepon : (0852) 356712 *\n");
	printf ("................................................\n\n");
}
int pesan(){
	printf(" * SEMOGA HARI ANDA MENYENANGKAN <3 *\n #dirumah aja\n\n");
}
int a(){
	printf("__________________\n");
}
int ulasan(){
	int ulasan;
	printf(" Tolong berikan ulasan untuk toko kami (dari 1-5) :");
	scanf("%d",&ulasan);
	printf("__________________\n");
	printf("* TERIMA KASIH SUDAH BERBELANJA DI TOKO KAMI *\n");
	
}
main(){
	int x[18]={11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28};
	int no , harga , i=1 , total_pembelian=0,uang,kembalian;
	char pilih= 'y' ;
	nama();
	printf("\n");
	awal();
	printf (" << Menjual segala jenis keperluan memasak yang murah dan berkualitas >>\n");
	printf ("================================================================\n");
	printf ("| No |    barang          |     harga     |     stok    |  kode  |\n");
	printf ("|=========================================|=============|========|\n");
	printf ("|  1 |  minyak goreng     | Rp. 25.000    |     8       |   %i   |\n",x[0]);
	printf ("|  2 |  Dancow 800 g      | Rp. 83.000    |     0       |   %i   |\n",x[1]);
	printf ("|  3 |  silverquen        | Rp. 26.000    |     12      |   %i   |\n",x[2]);
	printf ("|  4 |  milo 800 g        | Rp. 79.000    |     11      |   %i   |\n",x[3]);
	printf ("|  5 |  marjan 600 ml     | Rp. 14.900    |     10      |   %i   |\n",x[4]);
	printf ("|  6 |  rinso 1,8 kg      | Rp. 29.500    |     22      |   %i   |\n",x[5]);
	printf ("|  7 |  pepsodent         | Rp. 7.900     |     23      |   %i   |\n",x[6]);
	printf ("|  8 |  ultra milk 1000 ml| Rp. 17.500    |     40      |   %i   |\n",x[7]);
	printf ("|  9 |  richeese wafer    | Rp. 20.900    |     21      |   %i   |\n",x[8]);
	printf ("| 10 |  nabati wafer      | Rp. 19.900    |     22      |   %i   |\n",x[9]);
	printf ("| 11 |  clear shampoo     | Rp. 27.200    |     9       |   %i   |\n",x[10]);
	printf ("| 12 |  khong guan        | Rp. 49.800    |     10      |   %i   |\n",x[11]);
	printf ("| 13 |  nextar 336 g      | Rp. 21.500    |     7       |   %i   |\n",x[12]);
	printf ("| 14 |  kurma pack 250 g  | Rp. 38.500    |     24      |   %i   |\n",x[13]);
	printf ("| 15 |  garnier men       | Rp. 23.900    |     17      |   %i   |\n",x[14]);
	printf ("| 16 |  super pell 800 ml | Rp. 10.900    |     18      |   %i   |\n",x[15]);
	printf ("| 17 |  hit               | Rp. 23.500    |     12      |   %i   |\n",x[16]);
	printf ("| 18 |  sunlight          | Rp. 24.900    |     11      |   %i   |\n",x[17]);
    printf ("================================================================\n\n");
	pesan();	
	printf("Masukkan kode barang :");

	
while (pilih=='y'){

	scanf ("%d", &no);
	fflush (stdin);
	printf("\n");
	if (no==1)	{
	a();
	printf(" Barang yang anda pilih adalah : minyak goreng(11) \n");
	harga= 25000;
	printf("1 = %d\n ",harga);
	a();
}else if (no==2){
	a();
	printf("Barang yang anda pilih adalah : Dancow 800 g(12)\n");
	printf(" *  MAAF STOK BARANG ANDA SEDANG KOSONG *\n");
	harga=0;
	a();
}else if ( no == 3){
	a();
	printf("Barang yang anda pilih adalah : silverquen(13)\n");
	harga= 26000;
	printf("3 = %d\n\n ", harga);
	a();
}else if (no == 4){
	a();
	printf("Barang yang anda pilih adalah : milo 800 g(14)\n");
	harga= 79000;
	printf("4 = %d\n\n ", harga);
	a();
}else if (no== 5){
	printf("Barang yang anda pilih adalah : marjan 600 ml(15)\n");
	harga= 14900;
	printf("5 = %d\n\n ", harga);
}else if (no== 6){
	a();
	printf("Barang yang anda pilih adalah : rinso 1,8 kg(16)\n");
	harga= 29500;
	printf("6 = %d\n\n ", harga);
	a();
}else if (no== 7){
	a();
	printf(" Barang yang anda pilih adalah : pepsodent(17)\n");
	harga= 7900;
	printf("7 = %d \n\n", harga);
	a();
}else if (no== 8){
	a();
	printf(" Barang yang anda pilih adalah : ultra milk 1000 ml(18)\n");
	harga= 17500;
	printf("8 = %d\n\n ", harga);
	a();
}else if (no== 9){
	a();
	printf(" Barang yang anda pilih adalah : richeese wafer(19)\n");
	harga= 20900;
	printf("9 = %d \n\n", harga);
	a();
}else if (no== 10){
	a();
	printf(" Barang yang anda pilih adalah : nabati wafer(20)\n");
	harga= 19900;
	printf("10 = %d\n\n ", harga);
	a();
}else if (no== 11){
	a();
	printf(" Barang yang anda pilih adalah : clear shampoo(21)\n");
	harga= 27200;
	printf("11 = %d\n\n ", harga);
	a();
}else if (no== 12){
	a();
	printf(" Barang yang anda pilih adalah : khong guan(22)\n");
	harga= 49800;
	printf("12 = %d \n\n", harga);
	a();
}else if (no== 13){
	a();
	printf(" Barang yang anda pilih adalah : nextar 336 g(23)\n");
	harga= 21500;
	printf("13 = %d\n\n ", harga);
	a();
}else if (no== 14){
	a();
	printf(" Barang yang anda pilih adalah : kurma pack 250 g(24)\n");
	harga= 38500;
	printf("14 = %d \n\n", harga);
	a();
}else if (no== 15){
	a();
	printf(" Barang yang anda pilih adalah : garnier men(25)\n");
	harga= 23900;
	printf("15 = %d\n\n ", harga);
	a();
}else if (no== 16){
	a();
	printf(" Barang yang anda pilih adalah : super pell 800 ml(26)\n");
	harga= 10900 ;
	printf("16 = %d\n\n ", harga);
	a();
}else if (no== 17){
	a();
	printf(" Barang yang anda pilih adalah : hit (27)\n");
	harga= 23500 ;
	printf("17 = %d\n\n ", harga);
	a();
}else if (no== 18){
	a();
	printf(" Barang yang anda pilih adalah : sunlight (28)\n");
	harga= 24900 ;
	printf("18 = %d\n\n ", harga);
	a();
}
else{
	printf("Barang yang anda cari tidak ada !!!! ");
	a();
}
total_pembelian=total_pembelian+harga;
printf(" MAU BELI BARANG LAGI?? [y/t]:");
scanf("%c", &pilih);
printf("\n");
printf("Masukan kode barang :");
i++;
}
printf("................................................\n");
printf("................................................\n");
printf(" Total pembelian anda = %d\n\n ", total_pembelian);
kembalian= saldo - total_pembelian;
printf(" kembalian anda adalah = %d\n",kembalian);
ulasan();
a();

}
