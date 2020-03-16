#include <iostream>
using namespace std;

int fibonacci(int n)
{
	if (n==0)
	{
	return 0;
	}
	else if(n==1)
	{
	return 1;
	}
	else
	{
    return (fibonacci(n-1) + fibonacci(n-2));
	}
}

void selamat_datang (string fnama); //function void : membutuhkan input
void daftar_menu_awal () //function void : menampilkan menu saja, tanpa membutuhkan input
{
	cout<<"============== MENU AWAL =============="<<endl;
	cout<<"1. Tambahkan barang"<<endl;
	cout<<"2. Ubah barang"<<endl;
	cout<<"3. Tampilkan daftar barang tersedia"<<endl;
	cout<<"4. Lakukan transaksi"<<endl;
	cout<<"5. Ubah PIN"<<endl;
	cout<<"6. Logout"<<endl;
	cout<<"======================================="<<endl;	
	cout<<"Masukan pilihan menu : ";
}

int main (void)
{
	// Daftar dan login
	int pin, pin_login, angka_pilihan, jawaban_anda;
	char nama[50];
	
	// Pilihan awal
	int pilihan_awal;
	float dompet=0;

	// Menambahkan barang
	int i, jumlah_data=1, ke_menu_awal;
	int harga_barang[100];
	char nama_barang[100][100];
	
	// mengubah barang
	int nomor_barang;
	
	// Melakukan transaksi
	int pilihan_barang_disewa, jenis_pelanggan, masukan_ke_dompet;	
	int jumlah_barang_disewa, durasi_barang_disewa;
	float total_bayar, total_setelah_diskon, diskon;

 // 1. Atur PIN
	cout<<"=============== DAFTAR ================"<<endl;
	cout<<"Masukan Nama Anda : "; gets(nama);
	daftar :
	cout<<"Atur PIN : "; cin>>pin;
	
	login :
	cout<<"=============== LOGIN ================="<<endl;
	cout<<"Masukan PIN : "; cin>>pin_login;
		
		if (pin_login==pin)
		{
	
			cout<<"=========== LOGIN Berhasil ============"<<endl;
		
		}
		else
		{
			cout<<"============= LOGIN Gagal ============="<<endl;
			cout<<"PIN yang Anda masukan salah!"<<endl;
			cout<<"======================================="<<endl;
			pilihan_angka1 :
			cout<<"Jika Anda manusia,"<<endl;
			cout<<"Masukan angka yang Anda suka : "; cin>>angka_pilihan;
			cout<<"======================================="<<endl;
			for (i=1; i<=angka_pilihan; i++)
			{
			cout<<"Suku ke-"<<i<<": "<<fibonacci(i-1)<<endl;
			}
			cout<<"======================================="<<endl;
			cout<<"Angka berapa setelah deret ini?"<<endl;
			cout<<"Jawaban Anda :"; cin>>jawaban_anda;
			cout<<"======================================="<<endl;
			if (jawaban_anda==fibonacci(angka_pilihan))
			{
				cout<<"Jawaban Anda benar, silakan login kembali"<<endl;
				goto login ;
			}	
			else
			{
				cout<<"Jawaban Anda salah, silakan pilih angka lain lagi"<<endl;
				cout<<"======================================="<<endl;
				goto pilihan_angka1;
			}
				
		}


 // 2. Masuk ke menu awal
 	menu_awal :
	selamat_datang(nama);
	cout<<"Saldo Anda saat ini : Rp. "<<dompet<<endl;
	daftar_menu_awal(); cin>>pilihan_awal;
	cout<<"======================================="<<endl;
	if (pilihan_awal==1) // menambahkan barang
	{
		pilihan1 : 
		cout<<"======================================="<<endl;
		cout<<"Masukan jumlah data barang : "; cin>>jumlah_data;
		cout<<"======================================="<<endl;
		for(i=0 ; i<jumlah_data ; i++) 
		{
		cout<<"===== DATA BARANG ANDA SAAT INI ======= "<<endl;
		cout<<"Nama barang "<<"ke-"<<i+1<<" : "<<nama_barang[i]<<" "<<endl;
		cout<<"Harga barang "<<"ke-"<<i+1<<" : Rp. "<<harga_barang[i]<<endl;
		cout<<"======================================="<<endl;
		cout<<"====== UBAH DATA BARANG MENJADI ======="<<endl;
		cout<< "Masukkan Nama Barang"<<"ke-"<<i+1<<" : "; cin>>nama_barang[i];
		cout<< "Masukkan Harga Barang"<<"ke-"<<i+1<<" : Rp."; cin>>harga_barang[i];
		cout<<"======================================="<<endl;
		
		}
		
		konfirmasi_ke_menu_awal1 :
		cout<<"=== BERHASIL MEMASUKAN DATA BARANG ==="<<endl;
		cout<<"======================================="<<endl;
		cout<<"1. Kembali ke menu awal;"<<endl;
		cout<<"2. Ulangi"<<endl;
		cout<<"======================================="<<endl;
		cout<<"Masukan pilihan : "; cin>>ke_menu_awal;
		
		if (ke_menu_awal==1)
			{
			goto menu_awal;
			}
		else if (ke_menu_awal==2)
			{
			goto pilihan1;
			}
		else
			{
			goto konfirmasi_ke_menu_awal1;
			}
	}
	else if (pilihan_awal==2) // mengubah data barang tersedia
	{
		pilihan2 :
		cout<<"======= DAFTAR BARANG SAAT INI ======="<<endl;
		for(i=0 ; i<jumlah_data ; i++)
		{
		cout<<"Nama barang "<<"ke-"<<i+1<<" : "<<nama_barang[i]<<endl;
		cout<<"Harga barang "<<"ke-"<<i+1<<" : Rp. "<<harga_barang[i]<<endl;
		cout<<"---------------------------------------"<<endl;
		}
		cout<<"======================================="<<endl;
		cout<<"Masukan nomor barang yang akan diubah : "; cin>>nomor_barang;
		
		cout<<"======= DAFTAR BARANG SAAT INI ======="<<endl;		
		cout<<"Nama barang "<<"ke-"<<nomor_barang<<" : "<<nama_barang[nomor_barang-1]<<" "<<endl;
		cout<<"Harga barang "<<"ke-"<<nomor_barang<<" : Rp. "<<harga_barang[nomor_barang-1]<<endl;
		cout<<"====== UBAH DATA BARANG MENJADI ======="<<endl;				
		cout<< "Masukkan Nama Barang"<<"ke-"<<nomor_barang<<" : "; cin>>nama_barang[nomor_barang-1];
		cout<< "Masukkan Harga Barang"<<"ke-"<<nomor_barang<<" : Rp."; cin>>harga_barang[nomor_barang-1];
		cout<<"======================================="<<endl;
		konfirmasi_ke_menu_awal2 :
		cout<<"=== BERHASIL MEMASUKAN DATA BARANG ==="<<endl;
		cout<<"1. Kembali ke menu awal;"<<endl;
		cout<<"2. Ulangi"<<endl;
		cout<<"======================================="<<endl;
		cout<<"Masukan pilihan : "; cin>>ke_menu_awal;
		
		if (ke_menu_awal==1)
			{
			goto menu_awal;
			}
		else if (ke_menu_awal==2)
			{
			goto pilihan2;
			}
		else
			{
			goto konfirmasi_ke_menu_awal2;
			}
	}
	else if (pilihan_awal==3) // menampilkan data barang
	{
		pilihan3 :
		cout<<"======= DAFTAR BARANG TERSEDIA ========"<<endl;
		for(i=0 ; i<jumlah_data ; i++)
		{
		cout<<"Nama barang "<<"ke-"<<i+1<<" : "<<nama_barang[i]<<endl;
		cout<<"Harga barang "<<"ke-"<<i+1<<" : Rp. "<<harga_barang[i]<<endl;
		cout<<"---------------------------------------"<<endl;
		}
		cout<<"======================================="<<endl;
		konfirmasi_ke_menu_awal3:
		cout<<"=== BERHASIL MENAMPILKAN DATA BARANG =="<<endl;
		cout<<"1. Kembali ke menu awal;"<<endl;
		cout<<"2. Ulangi"<<endl;
		cout<<"======================================="<<endl;
		cout<<"Masukan pilihan : "; cin>>ke_menu_awal;
		
		if (ke_menu_awal==1)
			{
			goto menu_awal;
			}
		else if (ke_menu_awal==2)
			{
			goto pilihan3;
			}
		else
			{
			goto konfirmasi_ke_menu_awal3;
			}
	}	
	
	else if (pilihan_awal==4) // melakukan lakukan transaksi
	{
		pilihan4 :
		cout<<"======= DAFTAR BARANG TERSEDIA ======="<<endl;
		for(i=0 ; i<jumlah_data ; i++)
		{
		cout<<i+1<<". "<<nama_barang[i]<<" = Rp. "<<harga_barang[i]<<endl;
		}
		cout<<"======================================="<<endl;
		cout<<"Pilih barang yang akan disewa : "; cin>>pilihan_barang_disewa;
		cout<<"======================================="<<endl;	
		cout<<"Harga barang : Rp. "<<harga_barang[pilihan_barang_disewa-1]<<endl;
		
		cout<<"Jumlah barang : "; cin>>jumlah_barang_disewa;
		cout<<"Durasi sewa barang (dalam hari) : "; cin>>durasi_barang_disewa;
		
		total_bayar=harga_barang[pilihan_barang_disewa-1]*jumlah_barang_disewa*durasi_barang_disewa;
		cout<<"======================================="<<endl;
		jns_pelanggan :
		cout<<"======================================="<<endl;
		cout<<"1. Member"<<endl;
		cout<<"2. Bukan member"<<endl;
		cout<<"Masukan jenis pelanggan : "; cin>>jenis_pelanggan;
		cout<<"======================================="<<endl;
		
		if (jenis_pelanggan==1)
		{
		masukandompet1 :
		cout<<"Harga sebelum diskon : "<<total_bayar<<endl;
		diskon=(total_bayar*1/10);
		total_setelah_diskon=total_bayar-diskon;
		cout<<"Total setelah diskon : "<<total_setelah_diskon<<endl;
		
		cout<<"======================================="<<endl;
		cout<<"1. Masukan transaksi ke dalam dompet"<<endl;
		cout<<"2. Ubah transaksi tadi"<<endl; 
		cout<<"---------------------------------------"<<endl;
		cout<<"Masukan pilihan Anda : "; cin>>masukan_ke_dompet;
		cout<<"======================================="<<endl;
		if (masukan_ke_dompet==1)
			{
			dompet=dompet+total_setelah_diskon;
			cout<<"BERHASIL MEMASUKAN SALDO KE DALAM DOMPET"<<endl;
			cout<<"======================================="<<endl;
			cout<<"Saldo Anda saat ini : "<<dompet<<endl;
			cout<<"======================================="<<endl;
			}
			else if(masukan_ke_dompet==2)			
			{
				goto pilihan4;
			}
			
			else
			{
			cout<<"Input yang anda masukan salah"<<endl;
			cout<<"======================================="<<endl;
			goto masukandompet1;
			}
			}
		else if (jenis_pelanggan==2)
			{
			masukandompet2 :
			cout<<"Total yang harus dibayarkan : "<<total_bayar<<endl;
			cout<<"======================================="<<endl;
			cout<<"1. Masukan transaksi ke dalam dompet"<<endl;
			cout<<"2. Ubah transaksi tadi"<<endl;
			cout<<"---------------------------------------"<<endl;
			cout<<"Masukan pilihan Anda : "; cin>>masukan_ke_dompet;
			cout<<"======================================="<<endl;
				if (masukan_ke_dompet==1)
				{
				dompet=dompet+total_bayar;
				cout<<"BERHASIL MEMASUKAN SALDO KE DALAM DOMPET"<<endl;
				cout<<"======================================="<<endl;
				cout<<"Saldo Anda saat ini : "<<dompet<<endl;
				cout<<"======================================="<<endl;
				}
				else if(masukan_ke_dompet==2)
				{
					goto pilihan4;
				}
				else
				{
				cout<<"Input yang anda masukan salah"<<endl;
				cout<<"======================================="<<endl;
				goto masukandompet2;
				}
			}
		else
			{
			cout<<"Input yang anda masukan salah"<<endl;
			goto jns_pelanggan;
			}	
	konfirmasi_ke_menu_awal4 :
		cout<<endl;
		cout<<"======================================="<<endl;
		cout<<"===== BERHASIL MELAKUKAN TRANSAKSI ===="<<endl;
		cout<<"======================================="<<endl;
		cout<<"1. Kembali ke menu awal;"<<endl;
		cout<<"2. Lakukan transaksi lagi"<<endl;
		cout<<"======================================="<<endl;
		cout<<"Masukan pilihan : "; cin>>ke_menu_awal;
		cout<<"======================================="<<endl;
		if (ke_menu_awal==1)
			{
			goto menu_awal;
			}
		else if (ke_menu_awal==2)
			{
			goto pilihan4;
			}
		else
			{
			goto konfirmasi_ke_menu_awal4;
			}		
	}
	else if (pilihan_awal==5) //Atur ulang data
	{
		goto daftar;
	}
	
	else if (pilihan_awal==6) //Logout
	{
		cout<<"BERHASIL LOGOUT, SILAKAN LOGIN KEMBALI"<<endl;
		goto login;
	}
	else //input salah
	{
		cout<<"Input yang Anda masukan salah"<<endl;
		goto menu_awal;
	}
	
	return 0;
}

void selamat_datang (string fnama) //function void : membutuhkan input
{
	cout<<"Selamat datang "<<fnama<<"!"<<endl;
}

