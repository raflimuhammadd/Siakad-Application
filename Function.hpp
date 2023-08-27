#ifndef __MAHASISWA
#define __MAHASISWA

#include <string>
#include <iostream>
#include <conio.h>
using namespace std;

class Menu
{
private:
    string angkatan;
    string nama_mhs;

    int sks;
    int semester;
    float nilai[14];
    float ipk;
    string mata_kuliah[14] = {"Algoritama", "Pemrogaman Dasar", "Bahasa Inggris", "ETIKA & KOMPETENSI INFORMATIKA",
                              "MATEMATIKA KOMPUTASI", "SISTEM & TEKNOLOGI INFORMASI", "MATEMATIKA DISKRIT", "SISTEM DIGITAL",
                              "BASIS DATA", "ALJABAR LINIER & MATRIK", "Pancasila", "Bahasa Indonesia", "Agama Islam", "Kewarganegaraan"};
    string fakultas;
    string nohp;
    string jurusan;
    string daerah;
    string ortu;
    string alamat;
    string pekerjaan;
    string kelamin;
    string doswal;
    string absen_matkul[7] = {"Desain Antarmuka", "Analisis Desain & Sistem", "Pemrogaman Web",
                              "Pemrogaman Berorientasi Objek", "Jaringan Komputer", "Rekayasa Perangkat Lunak", "Kecerdasan Buatan"};
    int absen[7];
    string ukt;

public:
    int nim;
    string password;
    Menu *next_menu;

    void pesan()
    {
        cout << "Data Berhasil Ditambahkan!" << endl;
    }

    Menu(){};

    Menu(string nama_mhs, int nim, string angkatan, string password, float nilai[14], int sks,
         int semester, string fakultas, string nohp, string jurusan, string daerah, string ortu,
         string alamat, string pekerjaan, string kelamin, string doswal, int absen[7], string ukt)
    {
        this->nama_mhs = nama_mhs;
        this->nim = nim;
        this->angkatan = angkatan;
        this->password = password;
        this->sks = sks;
        this->semester = semester;
        this->fakultas = fakultas;
        this->nohp = nohp;
        this->jurusan = jurusan;
        this->daerah = daerah;
        this->ortu = ortu;
        this->alamat = alamat;
        this->pekerjaan = pekerjaan;
        this->kelamin = kelamin;
        this->doswal = doswal;
        this->ukt = ukt;
        this->next_menu = NULL;
        float temp_nilai = 0.0f;
        for (int i = 0; i < 14; i++)
        {
            this->nilai[i] = nilai[i];
            temp_nilai += nilai[i];
        }
        this->ipk = temp_nilai / 14;

        int temp_nilai1 = 0;
        for (int i = 0; i < 7; i++)
        {
            this->absen[i] = absen[i];
            temp_nilai1 += absen[i];
        }
    }
    ~Menu()
    {
        cout << "Destructor" << endl;
    }
    friend class Mahasiswa;
};

Menu *head_menu = NULL;
Menu *tail_menu = NULL;

class Mahasiswa : public Menu
{
public:
    Mahasiswa(){};

    Mahasiswa(string nama_mhs, int nim, string angkatan, string password, float nilai[14], int sks, int semester,
              string fakultas, string nohp, string jurusan, string daerah, string ortu, string alamat, string pekerjaan,
              string kelamin, string doswal, int absen[7], string ukt)
        : Menu(nama_mhs, nim, angkatan, password, nilai, sks, semester, fakultas, nohp, jurusan, daerah, ortu, alamat,
               pekerjaan, kelamin, doswal, absen, ukt)
    {
    }

    void add_mahasiswa(string nama_mhs, int nim, string angkatan, string password, float nilai[14], int sks, int semester,
                       string fakultas, string nohp, string jurusan, string daerah, string ortu, string alamat, string pekerjaan,
                       string kelamin, string doswal, int absen[7], string ukt)
    {
        Menu *new_menu = new Menu(nama_mhs, nim, angkatan, password, nilai, sks, semester,
                                  fakultas, nohp, jurusan, daerah, ortu, alamat, pekerjaan, kelamin, doswal, absen, ukt);
        new_menu->nama_mhs = nama_mhs;
        new_menu->nim = nim;
        new_menu->angkatan = angkatan;
        new_menu->password = password;
        new_menu->sks = sks;
        new_menu->semester = semester;
        new_menu->fakultas = fakultas;
        new_menu->nohp = nohp;
        new_menu->jurusan = jurusan;
        new_menu->daerah = daerah;
        new_menu->ortu = ortu;
        new_menu->alamat = alamat;
        new_menu->pekerjaan = pekerjaan;
        new_menu->kelamin = kelamin;
        new_menu->doswal = doswal;
        new_menu->next_menu = NULL;

        float temp_nilai;
        for (int i = 0; i <= 13; i++)
        {
            new_menu->nilai[i] = nilai[i];
            temp_nilai += nilai[i];
        }
        new_menu->ipk = temp_nilai / 14;

        int temp_nilai1;
        for (int i = 0; i <= 6; i++)
        {
            new_menu->absen[i] = absen[i];
            temp_nilai1 += absen[i];
        }

        if (head_menu == NULL)
        {
            tail_menu = new_menu;
            head_menu = new_menu;
        }
        else if (tail_menu != NULL)
        {
            tail_menu->next_menu = new_menu;
            tail_menu = new_menu;
        }
    }

    void print_menu_by_angkatan(string angkatan)
    {
        cout << "\t   -----------------------" << endl;
        cout << "\t   |     Daftar Mahasiswa     |" << endl;
        cout << "\t   -----------------------" << endl;
        cout << endl;
        cout << "\t ----------------------------" << endl;
        Menu *temp_menu = head_menu;
        int i = 1;
        while (temp_menu != NULL)
        {

            if (temp_menu->angkatan == angkatan)
            {
                cout << "\t|" << i << " " << temp_menu->nama_mhs << "  " << temp_menu->nim << "  " << temp_menu->angkatan << endl;
                i++;
            }
            temp_menu = temp_menu->next_menu;
        }
        cout << "\t ---------------------------" << endl;
        cout << endl;
    }

    void Print_transkrip(int npm)
    {
        cout << "\t -----------------------------------------------------------------------------------------------" << endl;
        cout << "\t|\t\tMata Kuliah\t\t--\tSKS\t--\tNilai\t--\tSemester\t|" << endl;
        cout << "\t -----------------------------------------------------------------------------------------------" << endl;
        cout << endl;
        cout << "\t -----------------------------------------------------------------------------------------------" << endl;
        Menu *temp_menu = head_menu;
        int i = 1;
        while (temp_menu != NULL)
        {
            if (temp_menu->nim == npm)
            {
                break;
            }
            temp_menu = temp_menu->next_menu;
        }
        for (int i = 0; i <= 13; i++)
        {
            cout << "\t|" << i << ". " << temp_menu->mata_kuliah[i] << " " << temp_menu->sks << " " << temp_menu->nilai[i] << " " << temp_menu->semester << endl;
        }

        cout << "\t -----------------------------------------------------------------------------------------------" << endl;
        cout << "\t  Ipk anda = " << temp_menu->ipk << endl;
        cout << endl;
    }

    void Print_biodata(int npm)
    {
        cout << "\t   -----------------------" << endl;
        cout << "\t   |	 Biodata Mahasiswa	|" << endl;
        cout << "\t   -----------------------" << endl;
        cout << endl;
        cout << "\t ----------------------------" << endl;
        Menu *temp_menu = head_menu;
        int i = 1;
        while (temp_menu != NULL)
        {
            if (temp_menu->nim == npm)
            {
                cout << "Fakultas 	= " << temp_menu->fakultas << endl;
                cout << "Jurusan 	= " << temp_menu->jurusan << endl;
                cout << "Nama		= " << temp_menu->nama_mhs << endl;
                cout << "No hp		= " << temp_menu->nohp << endl;
                cout << "Nama Ortu 	= " << temp_menu->ortu << endl;
                cout << "Alamat 		= " << temp_menu->alamat << endl;
                cout << "Pekerjaan 	= " << temp_menu->pekerjaan << endl;
                break;
            }
            temp_menu = temp_menu->next_menu;
        }

        cout << "\t ---------------------------" << endl;
        cout << endl;
    }

    void Print_absen(int npm)
    {

        Menu *temp_menu = head_menu;

        int i = 1;
        while (temp_menu != NULL)
        {
            if (temp_menu->nim == npm)
            {
                cout << "\t\t\t\t PRESENSI KEHADIRAN KULIAH" << endl;
                cout << "\t\t\t\t -------------------------\n"
                     << endl;
                cout << "Npm		= " << temp_menu->nim << endl;
                cout << "Nama		= " << temp_menu->nama_mhs << endl;
                cout << "Kelamin    	= " << temp_menu->kelamin << endl;
                cout << "Dosen Wali	= " << temp_menu->doswal << endl;
                cout << "--------------------------------------------------------------------------------------------" << endl;
                cout << "|No  |          Nama MT.Kuliah          |   SKS   |    Kehadiran Kuliah   |" << endl;
                cout << "|----|----------------------------------|---------|-----------------------|" << endl;
                cout << endl;
                break;
            }
            temp_menu = temp_menu->next_menu;
        }
        for (int i = 0; i <= 6; i++)
        {
            cout << i + 1 << ". "
                 << "\t" << temp_menu->absen_matkul[i] << "\t\t\t" << temp_menu->sks << "\t\t\t" << temp_menu->absen[i] << endl;
        }

        cout << "\t --------------------------------------------------------------------------------------------------" << endl;
        cout << endl;
    }

    void print_ukt(int npm)
    {

        Menu *temp_menu = head_menu;

        int i = 1;
        while (temp_menu != NULL)
        {
            if (temp_menu->nim == npm)
            {
                cout << "\t\t\t\t   INFO UKT MAHASISWA " << endl;
                cout << "\t\t\t\t -------------------------\n"
                     << endl;
                cout << "Npm		= " << temp_menu->nim << endl;
                cout << "Nama		= " << temp_menu->nama_mhs << endl;
                cout << "Kelamin    	= " << temp_menu->kelamin << endl;
                cout << "Dosen Wali	= " << temp_menu->doswal << endl;
                cout << "--------------------------------------------------------------------------------------------" << endl;
                cout << "UKT		= " << temp_menu->ukt << endl;
                break;
            }
            temp_menu = temp_menu->next_menu;
        }

        cout << endl;
    }

    void displayPasswords(int npm, string newPassword)
    {
        Menu *temp_menu = head_menu;
        bool found = false;

        while (temp_menu != NULL)
        {
            if (temp_menu->nim == npm)
            {
                cout << temp_menu->password << endl;
                break;
            }
            temp_menu = temp_menu->next_menu;
        }
    }

    void changePassword(int npm, string old_pass, string newPass)
    {
        Menu *temp_menu = head_menu;
        bool found = false;

        while (temp_menu != NULL)
        {
            if (temp_menu->nim == npm && temp_menu->password == old_pass)
            {
                temp_menu->password = newPass;
                found = true;
                break;
            }
            temp_menu = temp_menu->next_menu;
        }

        if (!found)
        {
            cout << "Password lama tidak ditemukan." << endl;
        }
    }

    void print_pengumuman()
    {
        int pilihan;
        system("cls");
        cout << "1. PEMBERITAHUAN KONVERSI MBKM SEMESTER GENAP TA.2022/2023" << endl;
        cout << "   11 April Mei 2023 Jam 06:49 Wib" << endl;
        cout << "2. Pengumuman tentang pelaksana perkuliahan" << endl;
        cout << "   mahasiswa & kegiatan saat pelaksanaan ujian SNBT 2023" << endl;
        cout << "   28 April 2023 Jam 17:00 Wib" << endl;
        cout << "3. PENGUMUMAN LIBUR DAN CUTI BERSAMA MAHASISWA" << endl;
        cout << "   14 April 2023 Jam 10:55 Wib\n"
             << endl;
        cout << "View Pengumuman : \n"
             << endl;
        cin >> pilihan;

        if (pilihan == 1)
        {
            system("cls");
            cout << "PENGUMUMAN" << endl;
            cout << "Nomor : 135/UN63/BAKPK/2023\n"
                 << endl;
            cout << "1. Dasar :" << endl;
            cout << "   a. Pelaksanaan kegiatan MBKM semester Genap Tahun Ajaran" << endl;
            cout << "      2022/2023" << endl;
            cout << "   b. Surat Edaran Kepala Pusat Data dan Informasi IPTEK DIKTI nomor" << endl;
            cout << "      : 05/P1.4/PDDIKTI/2016 tanggal 4 Pebruari 2021, tentang menu" << endl;
            cout << "      usulan pembukaan periode pelaporan PDDIKTI.\n"
                 << endl;
            cout << "2. Sehubungan dengan hal tersebut, kami menginformasikan kepada" << endl;
            cout << "   Mahasiswa untuk memantau Konversi MBKM pada semester genap" << endl;
            cout << "   TA.2022/2023 sesuai dengan jadwal sebagai berikut:" << endl;
            cout << "   ---------------------------------------------------------------------------" << endl;
            cout << "   |NO | TANGGAL          | KEGIATAN                            | KETERANGAN |" << endl;
            cout << "   |---|------------------|-------------------------------------|------------|" << endl;
            cout << "   | 1 |09 s.d 19 Mei 2023|Konversi MBKM (Kuliah dan Non-Kuliah)| Koorprodi  |" << endl;
            cout << "   |   |                  |melalui  Siamik                      |            |" << endl;
            cout << "   |---|------------------|-------------------------------------|------------|" << endl;
            cout << "   | 2 |20 s.d 24 Mei 2023|Masa sanggah Konversi MBKM (Kuliah   | Mahasiswa  |" << endl;
            cout << "   |   |                  |dan Non-Kuliah melalui SIAMIK        |            |" << endl;
            cout << "   |---|------------------|-------------------------------------|------------|" << endl;
            cout << "   | 3 |20 s.d 26 Mei 2023|Edit Konversi MBKM (Kuliah dan Non-  | Koorprodi  |" << endl;
            cout << "   |   |                  |Kuliah) melalui akun SIGRA           |            |" << endl;
            cout << "   ---------------------------------------------------------------------------\n"
                 << endl;
            cout << "tekan ENTER untuk kembali ke menu awal";
            getch();
        }
        else if (pilihan == 2)
        {
            system("cls");
            cout << "PENGUMUMAN" << endl;
            cout << "Nomor : 134/UN63/BAKPK/2023\n"
                 << endl;
            cout << "Diumumkan kepada seluruh Mahasiswa UPN Veteran Jawa Timur tentang" << endl;
            cout << "pelaksanaan peruliahan dengan ketentuan sebagai berikut :\n"
                 << endl;
            cout << "1. Berdasarkan pengumuman Nomor : 129/UN63/BAKPK/2023 tanggal 05 April" << endl;
            cout << "   2023, tentang ketentuan libur dan cuti bersama HAri Raya Idul Fitri" << endl;
            cout << "   144H/2023 M bagi Mahasiswa UPN Veteran Jawa Timur yang semula" << endl;
            cout << "   pembelajaran mahasiswa mulai pada tangal 02 Mei 2023 diubah menjadi" << endl;
            cout << "   tanggal 03 s.dd 05 Mei 2023 (perkuliahan secara offline/luring).\n"
                 << endl;
            cout << "Demikian surat edaran ini untuk dilaksanakan dan diinformasukan kepada" << endl;
            cout << "seluruh Mahasiswa UPN Veteran Jawa Timur.\n"
                 << endl;
            cout << "tekan ENTER untuk kembali ke menu awal";
            getch();
        }
        else if (pilihan == 3)
        {
            system("cls");
            cout << "PENGUMUMAN" << endl;
            cout << "Nomor : 129/UN63/BAKPK/2023\n"
                 << endl;
            cout << "KETENTUAN LIBUR DAN CUTI BERSAMA" << endl;
            cout << "HARI RAYA IDUL FITRI 1444 H / 2023 M" << endl;
            cout << "BAGI MAHASISWA UPN VETERAN JAWA TIMUR\n"
                 << endl;
            cout << "Dasar :" << endl;
            cout << "1. Berdasarkan Keputusan bersama Menteri Agama, Menteri" << endl;
            cout << "   Ketenagakerjaan dan MEnteri Pendayagunaan Aparatur Negara" << endl;
            cout << "   dan REformasi Birokrasi RI Nomor : 327 Tahun 2023, tanggal 29" << endl;
            cout << "   Maret 2023 tentang Perubahan atas KEputusan Bersama " << endl;
            cout << "   Menteri Agama, Menteri Ketenagakerjaan dan menteri Pendayagunaan" << endl;
            cout << "   Aparatur Negara dan REformasi Birokrasi Nomor 1066 Tahun" << endl;
            cout << "   2022, Nomor 3 Tahun 2022 tentang Hari Libur Nasional dan Cuti" << endl;
            cout << "   Bersama Tahun 2023." << endl;
            cout << "2. Surat Edaran UPN Veteran Jawa Timur Nomor" << endl;
            cout << "   26/UN63/UM/2023, tentang Ketentuan Libur Nasional dan Cuti" << endl;
            cout << "   Bersama Hari Raya Idul Fitri 1444 H / 2023 M bagi seluruh dosen" << endl;
            cout << "   dan tenaga kependidikan (TENDIK) di lingkungan UPN Veteran" << endl;
            cout << "   Jawa Timur.\n"
                 << endl;
            cout << "Sehubungan dasar tersebut diatas, Libur Nasional Cuti Bersama" << endl;
            cout << "Hari Raya Idul Fitri 1444 H / 2023 M, mulai tanggal 19 April" << endl;
            cout << "sampai dengan 01 Mei 2023 dan Mahasiswa mulai masuk pada tanggal" << endl;
            cout << "02 Mei 2023.\n"
                 << endl;
            cout << "Demikian surat edaran ini untuk dilaksanakan dan di informasikan" << endl;
            cout << "kepada seluruh Mahasiswa UPN Veteran Jawa Timur.\n"
                 << endl;
            cout << "tekan ENTER untuk kembali ke menu awal";
            getch();
        }
        else
        {
            cout << "Maaf, pilihan tidak tersedia" << endl;
            cout << "tekan ENTER untuk kembali ke menu awal";
            getch();
        }
    }

    void print_list_mahasiswa()
    {
        cout << "\t   -----------------------" << endl;
        cout << "\t   |     Daftar Mahasiswa     |" << endl;
        cout << "\t   -----------------------" << endl;
        cout << endl;
        cout << "\t ----------------------------" << endl;
        Menu *temp_menu = head_menu;
        int i = 1;
        while (temp_menu != NULL)
        {
            cout << "\t|" << i << " " << temp_menu->nama_mhs << "  " << temp_menu->nim << "  " << temp_menu->angkatan << " " << temp_menu->semester << endl;
            i++;
            temp_menu = temp_menu->next_menu;
        }
        cout << "\t ---------------------------" << endl;
        cout << endl;
    }

    void print_list_mahasiswa(string angkatan)
    {
        cout << "\t   -----------------------" << endl;
        cout << "\t   |     Daftar Mahasiswa     |" << endl;
        cout << "\t   -----------------------" << endl;
        cout << endl;
        cout << "\t ----------------------------" << endl;
        Menu *temp_menu = head_menu;
        int i = 1;
        while (temp_menu != NULL)
        {

            if (temp_menu->angkatan == angkatan)
            {
                cout << "\t|" << i << " " << temp_menu->nama_mhs << "  " << temp_menu->nim << "  " << temp_menu->angkatan << " " << temp_menu->semester << endl;
                i++;
            }
            temp_menu = temp_menu->next_menu;
        }
        cout << "\t ---------------------------" << endl;
        cout << endl;
    }

    void print_list_mahasiswa(int semester)
    {
        cout << "\t   -----------------------" << endl;
        cout << "\t   |     Daftar Mahasiswa     |" << endl;
        cout << "\t   -----------------------" << endl;
        cout << endl;
        cout << "\t ----------------------------" << endl;
        Menu *temp_menu = head_menu;
        int i = 1;
        while (temp_menu != NULL)
        {

            if (temp_menu->semester == semester)
            {
                cout << "\t|" << i << " " << temp_menu->nama_mhs << "  " << temp_menu->nim << "  " << temp_menu->angkatan << " " << temp_menu->semester << endl;
                i++;
            }
            temp_menu = temp_menu->next_menu;
        }
        cout << "\t ---------------------------" << endl;
        cout << endl;
    }

    void pesan()
    {

        cout << "Mahasiswa Berhasil Dibuat!" << endl;
    }
};

#endif