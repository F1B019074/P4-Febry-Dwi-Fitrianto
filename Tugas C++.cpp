#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int saldo1 = 100000;


void nama(){
cout<<" \n NAMA : JALALUDDIN MUHAMMAD AKBAR\n NIM : F1B019074\n KELOMPOK : 15\n\n";
}
int awal(){
cout<<"  ***   SELAMAT DATANG DI TOKO KAMI	***\n";
cout<<"***  Alamat : JL. SUDIRMAN no. 20 Taliwang KSB ***\n";
cout<<"     *** No Telepon : (0852) 356712 ***\n";
cout<<"................................................\n\n";	
}
int c(){
cout <<"Dengan menggunakan C++";
}
int a(){
cout<<"\n__________________________________________________\n";
}
int ulasan(){
int ulasan;
cout<<" Tolong berikan ulasan untuk toko kami (dari 1-5) :";
cin>>ulasan;
cout<<"__________________________________________________\n";
cout<<"*** TERIMA KASIH SUDAH BERBELANJA DI TOKO KAMI ***\n";}

main(){
int x[18]={8,0,12,11,10,22,23,40,21,22,9,10,7,24,17,18,12,11};
int kode , harga , i=1 , total_pembelian=0, uang, saldo, kembalian;
char mau = 'y' ;
c ();
cout <<"\n";
nama ();
cout<<"/n";
awal ();
cout<<"*Menjual segala jenis keperluan memasak yang murah dan berkualitas*\n";
cout<<"|=========================================|=========|\n";
cout<<"| No |    barang          |     harga     |   stok  |\n";
cout<<"|=========================================|=========|\n";
cout<<"|  1 |  minyak goreng     | Rp. 25.000    |    "<<x[0]<<"    |\n";
cout<<"|  2 |  Dancow 800 g      | Rp. 83.000    |    "<<x[1]<<"    |\n";
cout<<"|  3 |  silverquen        | Rp. 26.000    |    "<<x[2]<<"   |\n";
cout<<"|  4 |  milo 800 g        | Rp. 79.000    |    "<<x[3]<<"   |\n";
cout<<"|  5 |  marjan 600 ml     | Rp. 14.900    |    "<<x[4]<<"   |\n";
cout<<"|  6 |  rinso 1,8 kg      | Rp. 29.500    |    "<<x[5]<<"   |\n";
cout<<"|  7 |  pepsodent         | Rp. 7.900     |    "<<x[6]<<"   |\n";
cout<<"|  8 |  ultra milk 1000 ml| Rp. 17.500    |    "<<x[7]<<"   |\n";
cout<<"|  9 |  richeese wafer    | Rp. 20.900    |    "<<x[8]<<"   |\n";
cout<<"| 10 |  nabati wafer      | Rp. 19.900    |    "<<x[9]<<"   |\n";
cout<<"| 11 |  clear shampoo     | Rp. 27.200    |    "<<x[10]<<"    |\n";
cout<<"| 12 |  khong guan        | Rp. 49.800    |    "<<x[11]<<"   |\n";
cout<<"| 13 |  nextar 336 g      | Rp. 21.500    |    "<<x[12]<<"    |\n";
cout<<"| 14 |  kurma pack 250 g  | Rp. 38.500    |    "<<x[13]<<"   |\n";
cout<<"| 15 |  garnier men       | Rp. 23.900    |    "<<x[14]<<"   |\n";
cout<<"| 16 |  super pell 800 ml | Rp. 10.900    |    "<<x[15]<<"   |\n";
cout<<"| 17 |  hit               | Rp. 23.500    |    "<<x[16]<<"   |\n";
cout<<"| 18 |  sunlight          | Rp. 24.900    |    "<<x[17]<<"   |\n";
    cout<<"*================================================================*\n";
cout<<"Masukan kode barang :";
	
while (mau=='y'){

cin>>kode;
fflush (stdin);
if (kode==1)	{
	cout<<" Barang yang anda pilih adalah : minyak goreng(11) \n";
	harga= 25000;
	cout<<"1 = "<<harga;
	a();
}else if (kode==2){
	cout<<"Barang yang anda pilih adalah : Dancow 800 g(12)\n";
	cout<<" *  MAAF STOK BARANG ANDA SEDANG KOSONG *\n";
	harga=0;
	cout<<"2 = "<<harga;
	a();
}else if ( kode == 3){
	cout<<"Barang yang anda pilih adalah : silverquen(13)\n";
	harga= 26000;
	cout<<"3 = "<<harga;
	a();
}else if ( kode == 4){
	cout<<"Barang yang anda pilih adalah : milo 800 g(14)\n";
	harga= 79000;
	cout<<"4 = "<<harga;
	a();
}else if ( kode == 5){
	cout<<"Barang yang anda pilih adalah : marjan 600 ml(15)\n";
	harga= 14900;
	cout<<"5 = "<<harga;
	a();
}else if ( kode == 6){
	cout<<"Barang yang anda pilih adalah : rinso 1,8 kg(16)\n";
	harga= 29500;
	cout<<"6 = "<<harga;
	a();
}else if ( kode == 7){
	cout<<" Barang yang anda pilih adalah : pepsodent(17)\n";
	harga= 7900;
	cout<<"7 = "<<harga;
	a();
}else if ( kode == 8){
	cout<<" Barang yang anda pilih adalah : ultra milk 1000 ml(18)\n";
	harga= 17500;
	cout<<"8 = "<<harga;
	a();
}else if ( kode == 9){
	cout<<" Barang yang anda pilih adalah : richeese wafer(19)\n";
	harga= 20900;
	cout<<"9 = "<<harga;
	a();
}else if ( kode == 10){
	cout<<" Barang yang anda pilih adalah : nabati wafer(20)\n";
	harga= 19900;
	cout<<"10 = "<<harga;
	a();
}else if ( kode == 11){
	cout<<" Barang yang anda pilih adalah : clear shampoo(21)\n";
	harga= 27200;
	cout<<"11 = "<<harga;
	a();
}else if ( kode == 12){
	cout<<" Barang yang anda pilih adalah : khong guan(22)\n";
	harga= 49800;
	cout<<"12 = "<<harga;
	a();
}else if ( kode == 13){
	cout<<" Barang yang anda pilih adalah : nextar 336 g(23)\n";
	harga= 21500;
	cout<<"13 = "<<harga;
	a();
}else if ( kode == 14){
	cout<<" Barang yang anda pilih adalah : kurma pack 250 g(24)\n";
	harga= 38500;
	cout<<"14 = "<<harga;
	a();
}else if ( kode == 15){
	cout<<" Barang yang anda pilih adalah : garnier men(25)\n";
	harga= 23900;
	cout<<"15 = "<<harga;
	a();
}else if ( kode == 16){
	cout<<" Barang yang anda pilih adalah : super pell 800 ml(26)\n";
	harga= 10900 ;
	cout<<"16 = \n"<<harga;
	a();
}else if ( kode == 17){
	cout<<" Barang yang anda pilih adalah : hit (27)\n";
	harga= 23500 ;
	cout<<"16 = \n"<<harga;
	a();
}else if ( kode == 18){
	cout<<" Barang yang anda pilih adalah : sunlight (28)\n";
	harga= 24900 ;
	printf("18 = %d\n\n ", harga);
	cout<<"16 = \n"<<harga;
	a();

}
total_pembelian=total_pembelian+harga;
cout<<"MAU BELI BARANG LAGI?? [y/t]:";
cin>>mau;
cout<<"Masukan kode barang :";
i++;
}
cout<<"\n\n============================================\n";
cout<<"\ntotal pembelian = "<<total_pembelian;


cout<<"\n============================================\n";
kembalian=saldo1-total_pembelian;
cout<<"\nsisa saldo kamu : "<<kembalian;
ulasan();

}
