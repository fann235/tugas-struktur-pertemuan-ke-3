#include <iostream>

using namespace std;
// TUGAS 1
/*
//struct
struct barang {
    string kode, nama, satuan;
    int Qty;
    float harga;
};

int main()
{

    barang barang;
    cout << "Masukkan kode barang : ";
    cin >> barang.kode;

    cout << "Masukkan nama barang : ";
    cin >> barang.nama;

    cout << "Masukkan satuan : ";
    cin >> barang.satuan;

    cout << "Masukkan Qty : ";
    cin >> barang.Qty;

    cout << "Masukkan harga : ";
    cin >> barang.harga;

    cout << "\n=== data barang ===" << endl;
    cout << "Kode Barang : " << barang.kode << endl;
    cout << "Nama barang : " << barang.nama << endl;
    cout << "Satuan      : " << barang.satuan << endl;
    cout << "Qty         : " << barang.Qty << endl;
    cout << "Harga       : " << barang.harga << endl;
*/
// TUGAS 2
/*
//struct pertama
struct Pelanggan {
    string kode_pembeli;
    string nama_pembeli;
    string gender;
    string alamat;
};
//struct kedua
struct Produk {
    string kode_barang;
    string nama_barang;
    string satuan;
    int qty;
    float harga;
    string pembeli;
};

int main() {
    Pelanggan pelanggan;
    Produk produk;

    // Input data pelanggan
    cout << "=== INPUT DATA PELANGGAN ===" << endl;
    cout << "Kode Pembeli : ";
    cin >> pelanggan.kode_pembeli;

    cout << "Nama Pembeli : ";
    cin >> pelanggan.nama_pembeli;

    cout << "Gender : ";
    cin >> pelanggan.gender;

    cout << "Alamat : ";
    cin >> pelanggan.alamat;

    // Input data produk
    cout << "\n=== INPUT DATA PRODUK ===" << endl;
    cout << "Kode Barang : ";
    cin >> produk.kode_barang;

    cout << "Nama Barang : ";
    cin >> produk.nama_barang;

    cout << "Satuan : ";
    cin >> produk.satuan;

    cout << "Qty : ";
    cin >> produk.qty;

    cout << "Harga : ";
    cin >> produk.harga;

    cout << "Pembeli      : ";
    cin >> produk.pembeli;

    // Output data
    cout << "\n=== DATA PELANGGAN ===" << endl;
    cout << "Kode Pembeli : " << pelanggan.kode_pembeli << endl;
    cout << "Nama Pembeli : " << pelanggan.nama_pembeli << endl;
    cout << "Gender       : " << pelanggan.gender << endl;
    cout << "Alamat       : " << pelanggan.alamat << endl;

    cout << "\n=== DATA PRODUK ===" << endl;
    cout << "Kode Barang  : " << produk.kode_barang << endl;
    cout << "Nama Barang  : " << produk.nama_barang << endl;
    cout << "Satuan       : " << produk.satuan << endl;
    cout << "Qty          : " << produk.qty << endl;
    cout << "Harga        : " << produk.harga << endl;
    cout << "Pembeli      : " << produk.pembeli << endl;
*/
//TUGAS 3
//NO 1
/*
    struct Mahasiswa {
    string nim;
    string nama;
    string jurusan;
    int umur;
    float ipk;
};

int main() {
    Mahasiswa mhs;

    cout << "Masukkan NIM: ";
    cin >> mhs.nim;

    cout << "Masukkan Nama: ";
    cin.ignore();
    getline(cin, mhs.nama);

    cout << "Masukkan Jurusan: ";
    getline(cin, mhs.jurusan);

    cout << "Masukkan Umur: ";
    cin >> mhs.umur;

    cout << "Masukkan IPK: ";
    cin >> mhs.ipk;

    cout << "\n=== Data Mahasiswa ===" << endl;
    cout << "NIM      : " << mhs.nim << endl;
    cout << "Nama     : " << mhs.nama << endl;
    cout << "Jurusan  : " << mhs.jurusan << endl;
    cout << "Umur     : " << mhs.umur << endl;
    cout << "IPK      : " << mhs.ipk << endl;
*/
//NO 2
/*
    struct Nilai {
    string nama_mk;
    int nilai_tugas;
    int nilai_uts;
    int nilai_uas;
};

struct Mahasiswa {
    string nim;
    string nama_mhs;
    string gender;
    string alamat;
    Nilai nilai_mk1;
    Nilai nilai_mk2;
};

int main() {
    Mahasiswa mhs;

    // Input mahasiswa
    mhs.nim = "202502011005";
    mhs.nama_mhs = "Ahmad";
    mhs.gender = "laki";
    mhs.alamat = "Surabaya";

    // Nilai MK 1
    mhs.nilai_mk1.nama_mk = "Struktur Data";
    mhs.nilai_mk1.nilai_tugas = 89;
    mhs.nilai_mk1.nilai_uts = 87;
    mhs.nilai_mk1.nilai_uas = 89;

    // Nilai MK 2
    mhs.nilai_mk2.nama_mk = "Matdis";
    mhs.nilai_mk2.nilai_tugas = 88;
    mhs.nilai_mk2.nilai_uts = 96;
    mhs.nilai_mk2.nilai_uas = 90;

    // Output
    cout << "=== Data Mahasiswa ===" << endl;
    cout << "NIM      : " << mhs.nim << endl;
    cout << "Nama     : " << mhs.nama_mhs << endl;
    cout << "Gender   : " << mhs.gender << endl;
    cout << "Alamat   : " << mhs.alamat << endl;

    cout << "\nMata Kuliah 1 : " << mhs.nilai_mk1.nama_mk << endl;
    cout << "Tugas : " << mhs.nilai_mk1.nilai_tugas << endl;
    cout << "UTS    : " << mhs.nilai_mk1.nilai_uts << endl;
    cout << "UAS    : " << mhs.nilai_mk1.nilai_uas << endl;

    cout << "\nMata Kuliah 2 : " << mhs.nilai_mk2.nama_mk << endl;
    cout << "Tugas : " << mhs.nilai_mk2.nilai_tugas << endl;
    cout << "UTS    : " << mhs.nilai_mk2.nilai_uts << endl;
    cout << "UAS    : " << mhs.nilai_mk2.nilai_uas << endl;
*/
//NO 3

    struct Alamat {
    string nama_jalan;
    int no_rumah;
    string kelurahan;
    string kecamatan;
    string kabupaten;
    string provinsi;
};

struct Pendidikan {
    string nama_sekolah;
    string akreditasi;
    float nilai_ipk;
    int tahun_lulus;
};

struct Pegawai {
    string nip;
    string nama_pegawai;
    char gender;
    Alamat domisili;
    Pendidikan pendidikan_terakhir;
};

int main() {
    int n;
    cout << "Jumlah pegawai: ";
    cin >> n;

    Pegawai pgw[n];

    for (int i = 0; i < n; i++) {
        cout << "\nPegawai ke-" << i + 1 << endl;

        cout << "NIP: ";
        cin >> pgw[i].nip;

        cout << "Nama: ";
        cin.ignore();
        getline(cin, pgw[i].nama_pegawai);

        cout << "Gender: ";
        cin >> pgw[i].gender;

        cout << "Nama Jalan: ";
        cin.ignore();
        getline(cin, pgw[i].domisili.nama_jalan);

        cout << "No Rumah: ";
        cin >> pgw[i].domisili.no_rumah;

        cout << "Nama Sekolah: ";
        cin.ignore();
        getline(cin, pgw[i].pendidikan_terakhir.nama_sekolah);

        cout << "IPK: ";
        cin >> pgw[i].pendidikan_terakhir.nilai_ipk;
    }

    cout << "\n=== Data Pegawai ===" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nPegawai ke-" << i + 1 << endl;
        cout << "NIP   : " << pgw[i].nip << endl;
        cout << "Nama  : " << pgw[i].nama_pegawai << endl;
        cout << "Jalan : " << pgw[i].domisili.nama_jalan << endl;
        cout << "IPK   : " << pgw[i].pendidikan_terakhir.nilai_ipk << endl;
    }

    return 0;

}

