#include <iostream>
#include <string>
#include "Function.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Mahasiswa();

    float temp_array[14] = {4, 4, 4, 4, 4, 4, 4, 3.5, 3.5, 3.5, 4, 4, 4, 4};
    int temp_absen[7] = {100, 100, 100, 100, 100, 100, 100};

    Mahasiswa mahasiswa, mahasiswa2;

    // INFORMATIKA "19"
    mahasiswa.add_mahasiswa(
        "Ahmad Hasan ", 19191001, "IF2019", "hasan901", temp_array, 3, 8, "Ilmu Komputer", "081217101323", "Informatika",
        "Lamongan", "Dadang", "Jl Merpati No 15", "Wiraswasta", "Laki-Laki", "RUTH SA'IA, S.Kom., M.Kom.", temp_absen, "12 Juta");

    mahasiswa.add_mahasiswa(
        "Bunga Sari  ", 19191002, "IF2019", "sari69", temp_array, 3, 8, "Ilmu Komputer", "081217101432", "Informatika",
        "Bandung", "Setyo", "Jl Emprit 345", "Wiraswasta", "Perempuan", "RUTH SA'IA, S.Kom., M.Kom.", temp_absen, "3 Juta");

    mahasiswa.add_mahasiswa(
        "Eko Wijaya  ", 19191003, "IF2019", "eko73", temp_array, 3, 8, "Ilmu Komputer", "081217101432", "Informatika",
        "Surabaya", "Galang Rambu", "Jl Elang 243", "Kontraktor", "Laki-Laki", "RUTH SA'IA, S.Kom., M.Kom.", temp_absen, "5 Juta");

    mahasiswa.add_mahasiswa(
        "Indah Sari  ", 19191004, "IF2019", "sri42", temp_array, 3, 8, "Ilmu Komputer", "081217101432", "Informatika",
        "Jakarta", "Sutris", "Jl Elang 243", "Wiraswasta", "Laki-Laki", "RUTH SA'IA, S.Kom., M.Kom.", temp_absen, "7 Juta");

    mahasiswa.add_mahasiswa(
        "Galang Seti  ", 19191005, "IF2019", "seti25", temp_array, 3, 8, "Ilmu Komputer", "081217101432", "Informatika",
        "Malang", "Sutris", "Jl Elang 243", "Wiraswasta", "Laki-Laki", "RUTH SA'IA, S.Kom., M.Kom.", temp_absen, "8 Juta");

    // ---------------------------------

    // INFORMATIKA "20"
    mahasiswa.add_mahasiswa(
        "Fitriani Sit", 20201001, "IF2020", "fit99", temp_array, 3, 6, "Ilmu Komputer", "081217101350", "Informatika",
        "Jakarta", "Bani", "Jl Moses 1", "Wiraswasta", "Perempuan", "HADI SANNI, S.Kom., M.Kom.", temp_absen, "7 Juta");

    mahasiswa.add_mahasiswa(
        "Anto Kurnia", 20201002, "IF2020", "anto15", temp_array, 3, 6, "Ilmu Komputer", "08121710112312", "Informatika",
        "Jakarta", "Dwi", "Jl Kalisari 22", "Wiraswasta", "Laki-Laki", "HADI SANNI, S.Kom., M.Kom.", temp_absen, "5 Juta");

    mahasiswa.add_mahasiswa(
        "Adi Pratama ", 20201003, "IF2020", "adi242", temp_array, 3, 6, "Ilmu Komputer", "081217101111", "informatika",
        "Bandung", "Heru", "Jl Mulyorejo 15", "Presiden", "Laki-Laki", "HADI SANNI, S.Kom., M.Kom.", temp_absen, "25 Juta");

    mahasiswa.add_mahasiswa(
        "Jos Gandos ", 20201004, "IF2020", "jos34", temp_array, 3, 6, "Ilmu Komputer", "081217101123", "Informatika",
        "Jakarta", "Setyo", "Jl Mulyosari 25", "Wiraswasta", "Laki-Laki", "HADI SANNI, S.Kom., M.Kom.", temp_absen, "8 Juta");

    mahasiswa.add_mahasiswa(
        "Budi Santoso ", 20201005, "IF2020", "budi41", temp_array, 3, 6, "Ilmu Komputer", "081217101353", "Informatika",
        "Jakarta", "Hudi", "Jl Kutil 11", "Wiraswasta", "Laki-Laki", "HADI SANNI, S.Kom., M.Kom.", temp_absen, "4 Juta");

    //-------------------------------------------

    // INFORMATIKA "21"
    mahasiswa.add_mahasiswa(
        "Ahmad Hanafi ", 21211001, "IF2021", "han77", temp_array, 3, 4, "Ilmu Komputer", "081217101353", "Informatika",
        "Jakarta", "Siliwangi", "Jl Neon 51", "Gubernur", "Laki-Laki", "PRABU HENRO, S.Kom., M.Kom.", temp_absen, "9 Juta");

    mahasiswa.add_mahasiswa(
        "Dian Purno ", 21211002, "IF2021", "anto15", temp_array, 3, 4, "Ilmu Komputer", "081217101848", "Informatika",
        "Surabaya", "Silimambu", "Jl Kuning 76", "Pengusaha", "Laki-Laki", "PRABU HENRO, S.Kom., M.Kom.", temp_absen, "10 Juta");

    mahasiswa.add_mahasiswa(
        "Citra Sari ", 21211003, "IF2021", "cit231", temp_array, 3, 4, "Ilmu Komputer", "081217101901", "Informatika",
        "Bandung", "Hero", "Jl Setro 12", "Presiden", "Perempuan", "PRABU HENRO, S.Kom., M.Kom.", temp_absen, "5 Juta");

    mahasiswa.add_mahasiswa(
        "Erlina Putri ", 21211004, "IF2021", "put25", temp_array, 3, 4, "Ilmu Komputer", "081217101350", "Informatika",
        "Jodipan", "Munir", "Jl Menur 231", "Wiraswasta", "Perempuan", "PRABU HENRO, S.Kom., M.Kom.", temp_absen, "7 Juta");

    mahasiswa.add_mahasiswa(
        "Fahrui Kuz ", 21211005, "IF2021", "kuz20", temp_array, 3, 4, "Ilmu Komputer", "081217101350", "Informatika",
        "Banten", "Arsena", "Jl Ungu 81", "Apoteker", "Laki-Laki", "PRABU HENRO, S.Kom., M.Kom.", temp_absen, "3 Juta");

    //-------------------------------------
    // INFORMATIKA "22"
    mahasiswa.add_mahasiswa(
        "Galuh Kris", 22221001, "IF2022", "fit99", temp_array, 3, 2, "Ilmu Komputer", "081217101350", "Informatika",
        "Jakarta", "Anto", "Jl Badeng 98", "Nelayan", "Perempuan", "JAMES DEAN, S.Kom., M.Kom.", temp_absen, "5 Juta");

    mahasiswa.add_mahasiswa(
        "Hadi Sutanto ", 22221002, "IF2022", "anto11", temp_array, 3, 2, "Ilmu Komputer", "081217101352", "Informatika",
        "Jakarta", "Anto", "Jl Viagra 71", "Petani", "Laki-Laki", "JAMES DEAN, S.Kom., M.Kom.", temp_absen, "5 Juta");

    mahasiswa.add_mahasiswa(
        "Indah Puri ", 22221003, "IF2022", "puri76", temp_array, 3, 2, "Ilmu Komputer", "081217101353", "Informatika",
        "Bandung", "Heru", "Jl Vodka 90", "Presiden", "Perempuan", "JAMES DEAN, S.Kom., M.Kom.", temp_absen, "15 Juta");

    mahasiswa.add_mahasiswa(
        "Joko Sidowo ", 22221004, "IF2022", "sido35", temp_array, 3, 2, "Ilmu Komputer", "081217101354", "Informatika",
        "Medan", "Anto", "Jl Jony 90", "Apoteker", "Laki-Laki", "JAMES DEAN, S.Kom., M.Kom.", temp_absen, "7 Juta");

    mahasiswa.add_mahasiswa(
        "Kartika Dwi ", 22221005, "IF2022", "dwi44", temp_array, 3, 2, "Ilmu Komputer", "081217101355", "Infomatika",
        "Jakarta", "Anto", "Jl Batok 12", "Sales", "Perempuan", "JAMES DEAN, S.Kom., M.Kom.", temp_absen, "4 Juta");

    // ------------------------------------------------------------------------------------------------------------------------------------

    // SISTEM INFORMASI "19"
    mahasiswa.add_mahasiswa(
        "Lutfi Opik ", 19081001, "SI2019", "hasan901", temp_array, 3, 8, "Ilmu Komputer", "081217101321", "Sistem Informasi",
        "Lamongan", "Doding", "Jl Doro No 15", "Wiraswasta", "Laki-Laki", "STEPH CURRY, S.Kom., M.Kom.", temp_absen, "12 Juta");

    mahasiswa.add_mahasiswa(
        "Putri Rahayu  ", 19081002, "SI2019", "sari69", temp_array, 3, 8, "Ilmu Komputer", "081217101422", "Sistem Informasi",
        "Bandung", "Sutyo", "Jl Kutilang 345", "Wiraswasta", "Perempuan", "STEPH CURRY, S.Kom., M.Kom.", temp_absen, "3 Juta");

    mahasiswa.add_mahasiswa(
        "Maya Wijaya  ", 19081003, "SI2019", "maya21", temp_array, 3, 8, "Ilmu Komputer", "081217101423", "Sistem Informasi",
        "Surabaya", "Anarki Rambu", "Jl Ngurai 141", "Kontraktor", "Laki-Laki", "STEPH CURRY, S.Kom., M.Kom.", temp_absen, "5 Juta");

    mahasiswa.add_mahasiswa(
        "Rizky Wahyu  ", 19081004, "SI2019", "riz909", temp_array, 3, 8, "Ilmu Komputer", "081217101424", "Sistem Informasi",
        "Jakarta", "Sutris", "Jl Cicak 100", "Wiraswasta", "Laki-Laki", "STEPH CURRY, S.Kom., M.Kom.", temp_absen, "7 Juta");

    mahasiswa.add_mahasiswa(
        "Ummi Farida  ", 19081005, "SI2019", "umi723", temp_array, 3, 8, "Ilmu Komputer", "081217101425", "Sistem Informasi",
        "Malang", "Sutris", "Jl Gagak 2", "Wiraswasta", "Laki-Laki", "STEPH CURRY, S.Kom., M.Kom.", temp_absen, "8 Juta");

    // ---------------------------------------------

    // SISTEM INFORMASI "20"
    mahasiswa.add_mahasiswa(
        "Opik Cahyano ", 20081001, "SI2020", "opik21", temp_array, 3, 6, "Ilmu Komputer", "081217101323", "Sistem Informasi",
        "Madiun", "Dadang Koz", "Jl Juni 21", "Apoteker", "Laki-Laki", "KEVIN LOONEY, S.Kom., M.Kom.", temp_absen, "12 Juta");

    mahasiswa.add_mahasiswa(
        "Bunga Sari  ", 20081002, "SI2020", "sari42", temp_array, 3, 6, "Ilmu Komputer", "081217101432", "Sistem Informasi",
        "Bandung", "Setyo Cuy", "Jl Agustus 90", "Astronot", "Perempuan", "KEVIN LOONEY, S.Kom., M.Kom.", temp_absen, "3 Juta");

    mahasiswa.add_mahasiswa(
        "Eko Wijaya  ", 20081003, "SI2020", "eko73", temp_array, 3, 6, "Ilmu Komputer", "081217101432", "Sistem Informasi",
        "Surabaya", "Eko Jay", "Jl Mei 89", "Kontraktor", "Laki-Laki", "KEVIN LOONEY, S.Kom., M.Kom.", temp_absen, "5 Juta");

    mahasiswa.add_mahasiswa(
        "Indah Sari  ", 20081004, "SI2020", "sri42", temp_array, 3, 6, "Ilmu Komputer", "081217101432", "Sistem Informasi",
        "Jakarta", "Henok Uni", "Jl Januari 19", "Wiraswasta", "Perempuan", "KEVIN LOONEY, S.Kom., M.Kom.", temp_absen, "7 Juta");

    mahasiswa.add_mahasiswa(
        "Tono Nugro  ", 20081005, "SI2020", "tono09", temp_array, 3, 6, "Ilmu Komputer", "081217101432", "Sistem Informasi",
        "Malang", "Koni Jay", "Jl Maret 28", "Pengacara", "Laki-Laki", "KEVIN LOONEY, S.Kom., M.Kom.", temp_absen, "8 Juta");

    // ---------------------------------------------

    // SISTEM INFORMASI "21"
    mahasiswa.add_mahasiswa(
        "Vicky Santos ", 21081001, "SI2021", "santos23", temp_array, 3, 4, "Ilmu Komputer", "081217101323", "Sistem Informasi",
        "Jatinegara", "Mako Kop", "Jl Luney 11", "Wiraswasta", "Laki-Laki", "ANNI REANA, S.Kom., M.Kom.", temp_absen, "12 Juta");

    mahasiswa.add_mahasiswa(
        "Ade Hidayat  ", 21081002, "SI2021", "ade99", temp_array, 3, 4, "Ilmu Komputer", "081217101432", "Sistem Informasi",
        "Bandung", "Kurniawan", "Jl Hijau 91", "Wiraswasta", "Laki-Laki", "ANNI REANA, S.Kom., M.Kom.", temp_absen, "3 Juta");

    mahasiswa.add_mahasiswa(
        "Cincy Susan  ", 21081003, "SI2021", "susan19", temp_array, 3, 4, "Ilmu Komputer", "081217101432", "Sistem Informasi",
        "Surabaya", "Victor Uzi", "Jl Merah 94", "Kontraktor", "Perempuan", "ANNI REANA, S.Kom., M.Kom.", temp_absen, "5 Juta");

    mahasiswa.add_mahasiswa(
        "Dharma Sri  ", 21081004, "SI2021", "sri102", temp_array, 3, 4, "Ilmu Komputer", "081217101432", "Sistem Informasi",
        "Padang", "Sutris", "Jl Kornia 56", "Wiraswasta", "Laki-Laki", "ANNI REANA, S.Kom., M.Kom.", temp_absen, "7 Juta");

    mahasiswa.add_mahasiswa(
        "Galih Wib  ", 21081005, "SI2021", "galih212", temp_array, 3, 4, "Ilmu Komputer", "081217101432", "Sistem Informasi",
        "Malang", "Sutris", "Jl Janitor 88", "Wiraswasta", "Laki-Laki", "ANNI REANA, S.Kom., M.Kom.", temp_absen, "8 Juta");

    // ---------------------------------------------

    // SISTEM INFORMASI "22"
    mahasiswa.add_mahasiswa(
        "Irfan Seetti ", 22081001, "SI2022", "hasan901", temp_array, 3, 2, "Ilmu Komputer", "081217101323", "Sistem Informasi",
        "Lamongan", "Kurniawan", "Jl Merpati No 15", "Wiraswasta", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "12 Juta");

    mahasiswa.add_mahasiswa(
        "Bunga Sari  ", 22081002, "SI2022", "sari69", temp_array, 3, 2, "Ilmu Komputer", "081217101432", "Sistem Informasi",
        "Bandung", "Maggie Mil", "Jl Emprit 345", "Wiraswasta", "Perempuan", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "3 Juta");

    mahasiswa.add_mahasiswa(
        "Eko Wijaya  ", 22081003, "SI2022", "eko73", temp_array, 3, 2, "Ilmu Komputer", "081217101432", "Sistem Informasi",
        "Surabaya", "Tono Sutis", "Jl Elang 243", "Kontraktor", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "5 Juta");

    mahasiswa.add_mahasiswa(
        "Indah Sari  ", 22081004, "SI2022", "sri42", temp_array, 3, 2, "Ilmu Komputer", "081217101432", "Sistem Informasi",
        "Jakarta", "Lia Sani", "Jl Elang 243", "Wiraswasta", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "7 Juta");

    mahasiswa.add_mahasiswa(
        "Galang Seti  ", 22081005, "SI2022", "seti25", temp_array, 3, 2, "Ilmu Komputer", "081217101432", "Sistem Informasi",
        "Malang", "Koni Hoki", "Jl Elang 243", "Wiraswasta", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "8 Juta");

    // ---------------------------------------------
    // ------------------------------------------------------------------------------------------------------------------------------------

    // SAINS DATA "19"
    mahasiswa.add_mahasiswa(
        "Ahmad Hasan ", 19191001, "SD2019", "hasan901", temp_array, 3, 8, "Ilmu Komputer", "081217101323", "Sains Data",
        "Lamongan", "Dadang", "Jl Merpati No 15", "Wiraswasta", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "12 Juta");

    mahasiswa.add_mahasiswa(
        "Bunga Sari  ", 19191002, "SD2019", "sari69", temp_array, 3, 8, "Ilmu Komputer", "081217101432", "Sains Data",
        "Bandung", "Setyo", "Jl Emprit 345", "Wiraswasta", "Perempuan", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "3 Juta");

    mahasiswa.add_mahasiswa(
        "Eko Wijaya  ", 19191003, "SD2019", "eko73", temp_array, 3, 8, "Ilmu Komputer", "081217101432", "Sains Data",
        "Surabaya", "Galang Rambu", "Jl Elang 243", "Kontraktor", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "5 Juta");

    mahasiswa.add_mahasiswa(
        "Indah Sari  ", 19191004, "SD2019", "sri42", temp_array, 3, 8, "Ilmu Komputer", "081217101432", "Sains Data",
        "Jakarta", "Sutris", "Jl Elang 243", "Wiraswasta", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "7 Juta");

    mahasiswa.add_mahasiswa(
        "Galang Seti  ", 19191005, "SD2019", "seti25", temp_array, 3, 8, "Ilmu Komputer", "081217101432", "Sains Data",
        "Malang", "Sutris", "Jl Elang 243", "Wiraswasta", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "8 Juta");

    // ---------------------------------

    // SAINS DATA "20"
    mahasiswa.add_mahasiswa(
        "Ahmad Hasan ", 20191001, "SD2020", "hasan901", temp_array, 3, 6, "Ilmu Komputer", "081217101323", "Sains Data",
        "Lamongan", "Dadang", "Jl Merpati No 15", "Wiraswasta", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "12 Juta");

    mahasiswa.add_mahasiswa(
        "Bunga Sari  ", 20191002, "SD2020", "sari69", temp_array, 3, 6, "Ilmu Komputer", "081217101432", "Sains Data",
        "Bandung", "Setyo", "Jl Emprit 345", "Wiraswasta", "Perempuan", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "3 Juta");

    mahasiswa.add_mahasiswa(
        "Eko Wijaya  ", 20191003, "SD2020", "eko73", temp_array, 3, 6, "Ilmu Komputer", "081217101432", "Sains Data",
        "Surabaya", "Galang Rambu", "Jl Elang 243", "Kontraktor", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "5 Juta");

    mahasiswa.add_mahasiswa(
        "Indah Sari  ", 20191004, "SD2020", "sri42", temp_array, 3, 6, "Ilmu Komputer", "081217101432", "Sains Data",
        "Jakarta", "Sutris", "Jl Elang 243", "Wiraswasta", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "7 Juta");

    mahasiswa.add_mahasiswa(
        "Galang Seti  ", 20191005, "SD2020", "seti25", temp_array, 3, 6, "Ilmu Komputer", "081217101432", "Sains Data",
        "Malang", "Sutris", "Jl Elang 243", "Wiraswasta", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "8 Juta");

    // ---------------------------------

    // SAINS DATA "21"
    mahasiswa.add_mahasiswa(
        "Ahmad Hasan ", 21191001, "SD2021", "hasan901", temp_array, 3, 4, "Ilmu Komputer", "081217101323", "Sains Data",
        "Lamongan", "Dadang", "Jl Merpati No 15", "Wiraswasta", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "12 Juta");

    mahasiswa.add_mahasiswa(
        "Bunga Sari  ", 21191002, "SD2021", "sari69", temp_array, 3, 4, "Ilmu Komputer", "081217101432", "Sains Data",
        "Bandung", "Setyo", "Jl Emprit 345", "Wiraswasta", "Perempuan", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "3 Juta");

    mahasiswa.add_mahasiswa(
        "Eko Wijaya  ", 21191003, "SD2021", "eko73", temp_array, 3, 4, "Ilmu Komputer", "081217101432", "Sains Data",
        "Surabaya", "Galang Rambu", "Jl Elang 243", "Kontraktor", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "5 Juta");

    mahasiswa.add_mahasiswa(
        "Indah Sari  ", 21191004, "SD2021", "sri42", temp_array, 3, 4, "Ilmu Komputer", "081217101432", "Sains Data",
        "Jakarta", "Sutris", "Jl Elang 243", "Wiraswasta", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "7 Juta");

    mahasiswa.add_mahasiswa(
        "Galang Seti  ", 21191005, "SD2021", "seti25", temp_array, 3, 4, "Ilmu Komputer", "081217101432", "Sains Data",
        "Malang", "Sutris", "Jl Elang 243", "Wiraswasta", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "8 Juta");

    // ---------------------------------

    // SAINS DATA "22"
    mahasiswa.add_mahasiswa(
        "Ahmad Hasan ", 22191001, "SD2022", "hasan901", temp_array, 3, 2, "Ilmu Komputer", "081217101323", "Sains Data",
        "Lamongan", "Dadang", "Jl Merpati No 15", "Wiraswasta", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "12 Juta");

    mahasiswa.add_mahasiswa(
        "Bunga Sari  ", 22191002, "SD2022", "sari69", temp_array, 3, 2, "Ilmu Komputer", "081217101432", "Sains Data",
        "Bandung", "Setyo", "Jl Emprit 345", "Wiraswasta", "Perempuan", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "3 Juta");

    mahasiswa.add_mahasiswa(
        "Eko Wijaya  ", 22191003, "SD2022", "eko73", temp_array, 3, 2, "Ilmu Komputer", "081217101432", "Sains Data",
        "Surabaya", "Galang Rambu", "Jl Elang 243", "Kontraktor", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "5 Juta");

    mahasiswa.add_mahasiswa(
        "Indah Sari  ", 22191004, "SD2022", "sri42", temp_array, 3, 2, "Ilmu Komputer", "081217101432", "Sains Data",
        "Jakarta", "Sutris", "Jl Elang 243", "Wiraswasta", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "7 Juta");

    mahasiswa.add_mahasiswa(
        "Galang Seti  ", 22191005, "SD2022", "seti25", temp_array, 3, 2, "Ilmu Komputer", "081217101432", "Sains Data",
        "Malang", "Sutris", "Jl Elang 243", "Wiraswasta", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "8 Juta");

    // ---------------------------------
    // ------------------------------------------------------------------------------------------------------------------------------------

    // TEKNIK MESIN "19"
    mahasiswa.add_mahasiswa(
        "Ahmad Hasan ", 19191001, "TM2019", "hasan901", temp_array, 3, 8, "Teknik", "081217101323", "Teknik Mesin",
        "Lamongan", "Dadang", "Jl Merpati No 15", "Wiraswasta", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "12 Juta");

    mahasiswa.add_mahasiswa(
        "Bunga Sari  ", 19191002, "TM2019", "sari69", temp_array, 3, 8, "Teknik", "081217101432", "Teknik Mesin",
        "Bandung", "Setyo", "Jl Emprit 345", "Wiraswasta", "Perempuan", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "3 Juta");

    mahasiswa.add_mahasiswa(
        "Eko Wijaya  ", 19191003, "TM2019", "eko73", temp_array, 3, 8, "Teknik", "081217101432", "Teknik Mesin",
        "Surabaya", "Galang Rambu", "Jl Elang 243", "Kontraktor", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "5 Juta");

    mahasiswa.add_mahasiswa(
        "Indah Sari  ", 19191004, "TM2019", "sri42", temp_array, 3, 8, "Teknik", "081217101432", "Teknik Mesin",
        "Jakarta", "Sutris", "Jl Elang 243", "Wiraswasta", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "7 Juta");

    mahasiswa.add_mahasiswa(
        "Galang Seti  ", 19191005, "TM2019", "seti25", temp_array, 3, 8, "Teknik", "081217101432", "Teknik Mesin",
        "Malang", "Sutris", "Jl Elang 243", "Wiraswasta", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "8 Juta");

    // ---------------------------------

    // TEKNIK MESIN "20"
    mahasiswa.add_mahasiswa(
        "Ahmad Hasan ", 20191001, "TM2020", "hasan901", temp_array, 3, 6, "Teknik", "081217101323", "Teknik Mesin",
        "Lamongan", "Dadang", "Jl Merpati No 15", "Wiraswasta", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "12 Juta");

    mahasiswa.add_mahasiswa(
        "Bunga Sari  ", 20191002, "TM2020", "sari69", temp_array, 3, 6, "Teknik", "081217101432", "Teknik Mesin",
        "Bandung", "Setyo", "Jl Emprit 345", "Wiraswasta", "Perempuan", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "3 Juta");

    mahasiswa.add_mahasiswa(
        "Eko Wijaya  ", 20191003, "TM2020", "eko73", temp_array, 3, 6, "Teknik", "081217101432", "Teknik Mesin",
        "Surabaya", "Galang Rambu", "Jl Elang 243", "Kontraktor", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "5 Juta");

    mahasiswa.add_mahasiswa(
        "Indah Sari  ", 20191004, "TM2020", "sri42", temp_array, 3, 6, "Teknik", "081217101432", "Teknik Mesin",
        "Jakarta", "Sutris", "Jl Elang 243", "Wiraswasta", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "7 Juta");

    mahasiswa.add_mahasiswa(
        "Galang Seti  ", 20191005, "TM2020", "seti25", temp_array, 3, 6, "Teknik", "081217101432", "Teknik Mesin",
        "Malang", "Sutris", "Jl Elang 243", "Wiraswasta", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "8 Juta");

    // ---------------------------------

    // TEKNIK MESIN "21"
    mahasiswa.add_mahasiswa(
        "Ahmad Hasan ", 21191001, "TM2021", "hasan901", temp_array, 3, 4, "Teknik", "081217101323", "Teknik Mesin",
        "Lamongan", "Dadang", "Jl Merpati No 15", "Wiraswasta", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "12 Juta");

    mahasiswa.add_mahasiswa(
        "Bunga Sari  ", 21191002, "TM2021", "sari69", temp_array, 3, 4, "Teknik", "081217101432", "Teknik Mesin",
        "Bandung", "Setyo", "Jl Emprit 345", "Wiraswasta", "Perempuan", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "3 Juta");

    mahasiswa.add_mahasiswa(
        "Eko Wijaya  ", 21191003, "TM2021", "eko73", temp_array, 3, 4, "Teknik", "081217101432", "Teknik Mesin",
        "Surabaya", "Galang Rambu", "Jl Elang 243", "Kontraktor", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "5 Juta");

    mahasiswa.add_mahasiswa(
        "Indah Sari  ", 21191004, "TM2021", "sri42", temp_array, 3, 4, "Teknik", "081217101432", "Teknik Mesin",
        "Jakarta", "Sutris", "Jl Elang 243", "Wiraswasta", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "7 Juta");

    mahasiswa.add_mahasiswa(
        "Galang Seti  ", 21191005, "TM2021", "seti25", temp_array, 3, 4, "Teknik", "081217101432", "Teknik Mesin",
        "Malang", "Sutris", "Jl Elang 243", "Wiraswasta", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "8 Juta");

    // ---------------------------------

    // TEKNIK MESIN "22"
    mahasiswa.add_mahasiswa(
        "Ahmad Hasan ", 22191001, "TM2022", "hasan901", temp_array, 3, 2, "Teknik", "081217101323", "Teknik Mesin",
        "Lamongan", "Dadang", "Jl Merpati No 15", "Wiraswasta", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "12 Juta");

    mahasiswa.add_mahasiswa(
        "Bunga Sari  ", 22191002, "TM2022", "sari69", temp_array, 3, 2, "Teknik", "081217101432", "Teknik Mesin",
        "Bandung", "Setyo", "Jl Emprit 345", "Wiraswasta", "Perempuan", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "3 Juta");

    mahasiswa.add_mahasiswa(
        "Eko Wijaya  ", 22191003, "TM2022", "eko73", temp_array, 3, 2, "Teknik", "081217101432", "Teknik Mesin",
        "Surabaya", "Galang Rambu", "Jl Elang 243", "Kontraktor", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "5 Juta");

    mahasiswa.add_mahasiswa(
        "Indah Sari  ", 22191004, "TM2022", "sri42", temp_array, 3, 2, "Teknik", "081217101432", "Teknik Mesin",
        "Jakarta", "Sutris", "Jl Elang 243", "Wiraswasta", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "7 Juta");

    mahasiswa.add_mahasiswa(
        "Galang Seti  ", 22191005, "TM2022", "seti25", temp_array, 3, 2, "Teknik", "081217101432", "Teknik Mesin",
        "Malang", "Sutris", "Jl Elang 243", "Wiraswasta", "Laki-Laki", "HENDRA MAULANA, S.Kom., M.Kom.", temp_absen, "8 Juta");

    // ---------------------------------
    // ------------------------------------------------------------------------------------------------------------------------------------

    // TEKNIK INDUSTRI "19"
    mahasiswa.add_mahasiswa(
        "Anti Rahman", 19050001, "TI2019", "anti15", temp_array, 3, 8, "Fakultas Teknik", "081217101380", "Teknik Industri",
        "Kupang", "Ahmad Messi", "Jl Lontong No 20", "Wiraswasta", "Perempuan", "FITRI HANDAYANI", temp_absen, "5 Juta");
    mahasiswa.add_mahasiswa(
        "Antum Rohim", 19050002, "TI2019", "antum15", temp_array, 3, 8, "Fakultas Teknik", "081217101381", "Teknik Industri",
        "Surabaya", "Crstiano Siu", "Jl Coklat No 22", "Petani", "Laki-laki", "FITRI HANDAYANI", temp_absen, "Sudah terbayar");
    mahasiswa.add_mahasiswa(
        "Ani Fitria", 19050003, "TI2019", "ani15", temp_array, 3, 8, "Fakultas Teknik", "081217101382", "Teknik Industri",
        "Madura", "Lebron Ahmad", "Jl Mangga No 23", "Pengusaha", "Perempuan", "RETNO SRIMULAT", temp_absen, "9 Juta");
    mahasiswa.add_mahasiswa(
        "Arini Rahina", 19050004, "TI2019", "arini15", temp_array, 3, 8, "Fakultas Teknik", "081217101383", "Teknik Industri",
        "Madiun", "Kevin Narez", "Jl Apel No 24", "Apoteker", "Perempuan", "RETNO SRIMULAT", temp_absen, "6 Juta");
    mahasiswa.add_mahasiswa(
        "Xavi Er", 19050005, "TI2019", "xavi15", temp_array, 3, 6, "Fakultas Teknik", "081217101384", "Teknik Industri",
        "Blitar", "Bayu Pradana", "Jl Pisang No 25", "Progammer", "Laki-laki", "HENDRA WIJAYA", temp_absen, "Sudah terbayar");

    // ---------------------------------

    // TEKNIK INDUSTRI "20"
    mahasiswa.add_mahasiswa(
        "Banu Ramadhan", 20050001, "TI2020", "banu15", temp_array, 3, 6, "Fakultas Teknik", "081217101389", "Teknik Industri",
        "Bandung", "Ahmad Gondol", "Jl Telo No 30", "Wiraswasta", "Laki-laki", "GALUH HANDAYANI", temp_absen, "5 Juta");
    mahasiswa.add_mahasiswa(
        "Bani Hisyam", 20050002, "TI2020", "bani15", temp_array, 3, 6, "Fakultas Teknik", "081217101388", "Teknik Industri",
        "Bali", "Crstiano Ruet", "Jl Tomat No 31", "Petani", "Laki-laki", "GALUH HANDAYANI", temp_absen, "Sudah terbayar");
    mahasiswa.add_mahasiswa(
        "Bayu Setro", 20050003, "TI2020", "bayu15", temp_array, 3, 6, "Fakultas Teknik", "081217101387", "Teknik Industri",
        "Tanah Merah", "Lebron James", "Jl Buncis No 32", "Pengusaha", "Laki-laki", "GALUH HANDAYANI", temp_absen, "9 Juta");
    mahasiswa.add_mahasiswa(
        "Biba Rahma", 20050004, "TI2020", "biba15", temp_array, 3, 4, "Fakultas Teknik", "081217101386", "Teknik Industri",
        "Blitar", "Kevin Durant", "Jl Wortel No 33", "Apoteker", "Perempuan", "AJI SANTOSO", temp_absen, "6 Juta");
    mahasiswa.add_mahasiswa(
        "Bianca Alexa ", 20050005, "TI2020", "bianca15", temp_array, 3, 6, "Fakultas Teknik", "081217101385", "Teknik Industri",
        "Madiun", "Bayu Prima", "Jl Brokili No 34", "Progammer", "Perempuan", "AJI SANTOSO", temp_absen, "Sudah terbayar");

    // ---------------------------------

    // TEKNIK INDUSTRI "21"
    mahasiswa.add_mahasiswa(
        "Caca", 21050001, "TI2021", "caca15", temp_array, 3, 6, "Fakultas Teknik", "081217101390", "Teknik Industri",
        "Bandung", "Ahmad Soleh", "Jl Lintas No 30", "Wiraswasta", "Perempuan", "ARLOT ARDIANTO", temp_absen, "6 Juta");
    mahasiswa.add_mahasiswa(
        "Cici", 21050002, "TI2021", "cici15", temp_array, 3, 6, "Fakultas Teknik", "081217101391", "Teknik Industri",
        "Bali", "Crstiano Ronaldo", "Jl Rujak No 31", "Petani", "Perempuan", "ARLOT ARDIANTO", temp_absen, "Sudah terbayar");
    mahasiswa.add_mahasiswa(
        "Bedul", 21050003, "TI2021", "bedul15", temp_array, 3, 6, "Fakultas Teknik", "081217101392", "Teknik Industri",
        "Tanah Merah", "Lebron Din", "Jl Wangi No 32", "Pengusaha", "Laki-laki", "ARLOT ARDIANTO", temp_absen, "9 Juta");
    mahasiswa.add_mahasiswa(
        "Bibol", 21050004, "TI2021", "bibol15", temp_array, 3, 4, "Fakultas Teknik", "081217101393", "Teknik Industri",
        "Blitar", "Kavin Love", "Jl Sisir No 33", "Apoteker", "Perempuan", "ARLOT ARDIANTO", temp_absen, "6 Juta");
    mahasiswa.add_mahasiswa(
        "Fairus", 21050005, "TI2021", "fairus15", temp_array, 3, 6, "Fakultas Teknik", "081217101394", "Teknik Industri",
        "Madiun", "Bayu Ramdahan", "Jl Kenangan No 34", "Progammer", "Perempuan", "ARLOT SANTOSO", temp_absen, "Sudah terbayar");

    // ---------------------------------

    // TEKNIK INDUSTRI "22"
    mahasiswa.add_mahasiswa(
        "Dadang", 22050001, "TI2022", "dadang15", temp_array, 3, 6, "Fakultas Teknik", "081217101395", "Teknik Industri",
        "Jakarta", "Ahmad Subaru", "Jl Zamrut No 30", "Wiraswasta", "Laki-laki", "JOY ARDIANTO", temp_absen, "6 Juta");
    mahasiswa.add_mahasiswa(
        "Diding", 22050002, "TI2022", "dudung15", temp_array, 3, 6, "Fakultas Teknik", "081217101396", "Teknik Industri",
        "Medan", "Crstiano Adi", "Jl Kertajaya No 31", "Petani", "Laki-laki", "JOY ARDIANTO", temp_absen, "Sudah terbayar");
    mahasiswa.add_mahasiswa(
        "Diding", 22050003, "TI2022", "diding15", temp_array, 3, 6, "Fakultas Teknik", "081217101397", "Teknik Industri",
        "Cilegon", "Lebron Eja", "Jl Salju No 32", "Pengusaha", "Laki-laki", "JOY ARDIANTO", temp_absen, "9 Juta");
    mahasiswa.add_mahasiswa(
        "Dwirahma", 22050004, "TI2022", "dwirahma15", temp_array, 3, 4, "Fakultas Teknik", "081217101398", "Teknik Industri",
        "Tanggerang", "Kavin Santoso", "Jl Panas No 33", "Apoteker", "Perempuan", "JOY ARDIANTO", temp_absen, "6 Juta");
    mahasiswa.add_mahasiswa(
        "Anya", 22050005, "TI2022", "anya15", temp_array, 3, 6, "Fakultas Teknik", "081217101399", "Teknik Industri",
        "Kediri", "Bayu Skak", "Jl Hujan No 34", "Progammer", "Perempuan", "JOY ARDIANTO", temp_absen, "Sudah terbayar");

    // ---------------------------------
    // ------------------------------------------------------------------------------------------------------------------------------------

    mahasiswa.pesan();

    // Trasnkrip

    // ---

    // Angkatan 20
    // mahasiswa.add_mahasiswa("Galang Seti ", 20201001, "G2020", "seti621", temp_array);
    /*mahasiswa.add_mahasiswa("Oktavianus  ", 20201003, "G2020", "okta999", temp_array);
    mahasiswa.add_mahasiswa("Umar Hamid  ", 20201004, "G2020", "umar123", temp_array);
    mahasiswa.add_mahasiswa("Wahyu       ", 20201005, "G2020", "wahyu818", temp_array);

    // Angkatan 21
    mahasiswa.add_mahasiswa("Maulana Akbar ", 20211001, "G2021", "akbar124", temp_array);
    mahasiswa.add_mahasiswa("Akbar Putra   ", 20211002, "G2021", "put61", temp_array);
    mahasiswa.add_mahasiswa("Xpander       ", 20211003, "G2021", "xp891", temp_array);
    mahasiswa.add_mahasiswa("Qori Santoso  ", 20211004, "G2021", "qori00", temp_array);
    mahasiswa.add_mahasiswa("Slamet Riyanto", 20211005, "G2021", "slamet571", temp_array);

    // angkatan 22
    mahasiswa.add_mahasiswa("Ratna Ning    ", 20221001, "G2021", "ratna123", temp_array);
    mahasiswa.add_mahasiswa("TIti Kusuma   ", 20221002, "G2021", "titi242", temp_array);
    mahasiswa.add_mahasiswa("Vina Enngar   ", 20221003, "G2021", "vina696", temp_array);
    mahasiswa.add_mahasiswa("Avanza Press  ", 20221004, "G2021", "avan747", temp_array);
    mahasiswa.add_mahasiswa("Defender      ", 20221005, "G2021", "defe111", temp_array);*/

    int pilihan;

    do
    {

        cout << endl;
        cout << "  ------------------------------------- " << endl;
        cout << " |             SIAKAD                  |" << endl;
        cout << " |                                     |" << endl;
        cout << " |     1. Daftar Peserta Kuliah        |" << endl;
        cout << " |     2. Transkrip                    |" << endl;
        cout << " |     3. Kalender Akademik            |" << endl;
        cout << " |     4. Biodata Mahasiswa            |" << endl;
        cout << " |     5. Absen Mata Kuliah            |" << endl;
        cout << " |     6. Info UKT Mahasiswa           |" << endl;
        cout << " |     7. Ganti Password               |" << endl;
        cout << " |     8. Print Seluruh Mahasiswa      |" << endl;
        cout << " |     9. Print Mahasiswa By Angkatan  |" << endl;
        cout << " |    10. Print Mahasiswa By Semester  |" << endl;
        cout << " |    11. Pengumuman Kampus            |" << endl;
        cout << " |    12. Keluar                       |" << endl;
        cout << " -------------------------------------- " << endl;
        cout << " *       Masukkan Pilihan : ";
        cin >> pilihan;
        cout << endl;
        system("cls");

        switch (pilihan)
        {
            {
            case 1:
                int pilihan2;
                cout << "  -------------------------------- " << endl;
                cout << " |                                |" << endl;
                cout << " |         Daftar Jurusan         |" << endl;
                cout << " |         1. Infortmatika        |" << endl;
                cout << " |         2. Sistemm Iformasi    |" << endl;
                cout << " |         3. Sains Data          |" << endl;
                cout << " |         4. Teknik Mesin        |" << endl;
                cout << " |         5. Teknik Industri     |" << endl;
                cout << " |         6. Teknik Sipil        |" << endl;
                cout << " |         7. Ilmu Hukum          |" << endl;
                cout << " |         8. Manajemen          |" << endl;
                cout << " --------------------------------- " << endl;
                cout << " *       Masukkan Pilihan : ";
                cin >> pilihan2;

                if (pilihan2 == 1)
                {
                    int pilihan3;
                    cout << "  -------------------------------- " << endl;
                    cout << " |                                  |" << endl;
                    cout << " |   Daftar Angkatan Mahasiswa IT   |" << endl;
                    cout << " |         1. IF2019                |" << endl;
                    cout << " |         2. IF2020                |" << endl;
                    cout << " |         3. IF2021                |" << endl;
                    cout << " |         4. IF2022                |" << endl;
                    cout << " --------------------------------- " << endl;
                    cout << " *       Masukkan Pilihan : ";
                    cin >> pilihan3;

                    if (pilihan3 == 1)
                    {
                        mahasiswa.print_menu_by_angkatan("IF2019");
                    }

                    if (pilihan3 == 2)
                    {

                        mahasiswa.print_menu_by_angkatan("IF2020");
                    }
                    if (pilihan3 == 3)
                    {

                        mahasiswa.print_menu_by_angkatan("IF2021");
                    }
                    if (pilihan3 == 4)
                    {

                        mahasiswa.print_menu_by_angkatan("IF2022");
                    }
                };

                if (pilihan2 == 2)
                {
                    int pilihan4;
                    cout << "  -------------------------------- " << endl;
                    cout << " |                                  |" << endl;
                    cout << " |   Daftar Angkatan Mahasiswa SI   |" << endl;
                    cout << " |         1. SI2019                |" << endl;
                    cout << " |         2. SI2020                |" << endl;
                    cout << " |         3. SI2021                |" << endl;
                    cout << " |         4. SI2022                |" << endl;
                    cout << " --------------------------------- " << endl;
                    cout << " *       Masukkan Pilihan : ";
                    cin >> pilihan4;

                    if (pilihan4 == 1)
                    {
                        mahasiswa2.print_menu_by_angkatan("SI2019");
                    }

                    if (pilihan4 == 2)
                    {

                        mahasiswa2.print_menu_by_angkatan("SI2020");
                    }
                    if (pilihan4 == 3)
                    {

                        mahasiswa2.print_menu_by_angkatan("SI2021");
                    }
                    if (pilihan4 == 4)
                    {

                        mahasiswa2.print_menu_by_angkatan("SI2022");
                    }
                };

                if (pilihan2 == 3)
                {
                    int pilihan4;
                    cout << "  -------------------------------- " << endl;
                    cout << " |                                  |" << endl;
                    cout << " |   Daftar Angkatan Mahasiswa SD   |" << endl;
                    cout << " |         1. SD2019                |" << endl;
                    cout << " |         2. SD2020                |" << endl;
                    cout << " |         3. SD2021                |" << endl;
                    cout << " |         4. SD2022                |" << endl;
                    cout << " --------------------------------- " << endl;
                    cout << " *       Masukkan Pilihan : ";
                    cin >> pilihan4;

                    if (pilihan4 == 1)
                    {
                        mahasiswa.print_menu_by_angkatan("SD2019");
                    }

                    if (pilihan4 == 2)
                    {

                        mahasiswa.print_menu_by_angkatan("SD2020");
                    }
                    if (pilihan4 == 3)
                    {

                        mahasiswa.print_menu_by_angkatan("SD2021");
                    }
                    if (pilihan4 == 4)
                    {

                        mahasiswa.print_menu_by_angkatan("SD2022");
                    }
                };

                if (pilihan2 == 4)
                {
                    int pilihan3;
                    cout << "  -------------------------------- " << endl;
                    cout << " |                                             |" << endl;
                    cout << " |   Daftar Angkatan Mahasiswa Teknik Mesin    |" << endl;
                    cout << " |              1. TM2019                      |" << endl;
                    cout << " |              2. TM2020                      |" << endl;
                    cout << " |              3. TM2021                      |" << endl;
                    cout << " |              4. TM2022                      |" << endl;
                    cout << " --------------------------------- " << endl;
                    cout << " *       Masukkan Pilihan : ";
                    cin >> pilihan3;

                    if (pilihan3 == 1)
                    {
                        mahasiswa.print_menu_by_angkatan("TM2019");
                    }

                    if (pilihan3 == 2)
                    {

                        mahasiswa.print_menu_by_angkatan("TM2020");
                    }
                    if (pilihan3 == 3)
                    {

                        mahasiswa.print_menu_by_angkatan("TM2021");
                    }
                    if (pilihan3 == 4)
                    {

                        mahasiswa.print_menu_by_angkatan("TM2022");
                    }
                };

                if (pilihan2 == 5)
                {
                    int pilihan3;
                    cout << "  -------------------------------- " << endl;
                    cout << " |                                             |" << endl;
                    cout << " |   Daftar Angkatan Mahasiswa Teknik Industri |" << endl;
                    cout << " |              1. TI2019                      |" << endl;
                    cout << " |              2. TI2020                      |" << endl;
                    cout << " |              3. TI2021                      |" << endl;
                    cout << " |              4. TI2022                      |" << endl;
                    cout << " --------------------------------- " << endl;
                    cout << " *       Masukkan Pilihan : ";
                    cin >> pilihan3;

                    if (pilihan3 == 1)
                    {
                        mahasiswa.print_menu_by_angkatan("TI2019");
                    }

                    if (pilihan3 == 2)
                    {

                        mahasiswa.print_menu_by_angkatan("TI2020");
                    }
                    if (pilihan3 == 3)
                    {

                        mahasiswa.print_menu_by_angkatan("TI2021");
                    }
                    if (pilihan3 == 4)
                    {

                        mahasiswa.print_menu_by_angkatan("TI2022");
                    }
                };

                if (pilihan2 == 6)
                {
                    int pilihan3;
                    cout << "  -------------------------------- " << endl;
                    cout << " |                                             |" << endl;
                    cout << " |   Daftar Angkatan Mahasiswa Teknik Sipil    |" << endl;
                    cout << " |              1. TS2019                      |" << endl;
                    cout << " |              2. TS2020                      |" << endl;
                    cout << " |              3. TS2021                      |" << endl;
                    cout << " |              4. TS2022                      |" << endl;
                    cout << " --------------------------------- " << endl;
                    cout << " *       Masukkan Pilihan : ";
                    cin >> pilihan3;

                    if (pilihan3 == 1)
                    {
                        mahasiswa.print_menu_by_angkatan("TS2019");
                    }

                    if (pilihan3 == 2)
                    {

                        mahasiswa.print_menu_by_angkatan("TS2020");
                    }
                    if (pilihan3 == 3)
                    {

                        mahasiswa.print_menu_by_angkatan("TS2021");
                    }
                };

                if (pilihan2 == 7)
                {
                    int pilihan3;
                    cout << "  -------------------------------- " << endl;
                    cout << " |                                            |" << endl;
                    cout << " |   Daftar Angkatan Mahasiswa Ilmu Hukum     |" << endl;
                    cout << " |              1. H2019                      |" << endl;
                    cout << " |              2. H2020                      |" << endl;
                    cout << " |              3. H021                       |" << endl;
                    cout << " |              4. H2022                      |" << endl;
                    cout << " --------------------------------- " << endl;
                    cout << " *       Masukkan Pilihan : ";
                    cin >> pilihan3;

                    if (pilihan3 == 1)
                    {
                        mahasiswa.print_menu_by_angkatan("H2019");
                    }

                    if (pilihan3 == 2)
                    {

                        mahasiswa.print_menu_by_angkatan("H2020");
                    }
                    if (pilihan3 == 3)
                    {

                        mahasiswa.print_menu_by_angkatan("H2021");
                    }
                };

                if (pilihan2 == 8)
                {
                    int pilihan3;
                    cout << "  -------------------------------- " << endl;
                    cout << " |                                             |" << endl;
                    cout << " |   Daftar Angkatan Mahasiswa Manajemen       |" << endl;
                    cout << " |              1. M2019                       |" << endl;
                    cout << " |              2. M2020                       |" << endl;
                    cout << " |              3. M2021                       |" << endl;
                    cout << " |              4. M2022                       |" << endl;
                    cout << " --------------------------------- " << endl;
                    cout << " *       Masukkan Pilihan : ";
                    cin >> pilihan3;

                    if (pilihan3 == 1)
                    {
                        mahasiswa.print_menu_by_angkatan("M2019");
                    }

                    if (pilihan3 == 2)
                    {

                        mahasiswa.print_menu_by_angkatan("M2020");
                    }
                    if (pilihan3 == 3)
                    {

                        mahasiswa.print_menu_by_angkatan("M2021");
                    }
                    break;
                };
                break;

            case 2:
            {
                int flag = 0;
                int npm;
                string pass;
                cout << "Masukkan Npm Anda : ";
                cin >> npm;
                cout << "Masukkan Password : ";
                cin >> pass;

                Menu *temp_menu = head_menu;
                while (temp_menu != NULL)
                {

                    if (temp_menu->nim == npm && temp_menu->password == pass)
                    {
                        flag = 1;
                        break;
                    }
                    temp_menu = temp_menu->next_menu;
                }

                if (flag == 0)
                {
                    cout << "Npm atau Password salah" << endl;
                }
                else
                {
                    mahasiswa.Print_transkrip(npm);
                }

                cout << endl;

                break;
            }
            case 3:
            {
                cout << "Kalader Akademik 2022 - 2023" << endl;
                cout << "1. Agsutus 2022 " << endl;
                cout << "2. Semptember 2022 " << endl;
                cout << "3. Oktober 2022 " << endl;
                cout << "4. November 2022 " << endl;
                cout << "5. Desember 2022 " << endl;
                cout << "6. Januari 2023 " << endl;
                cout << "7. Febuari 2023 " << endl;
                cout << "8. Maret 2023 " << endl;
                cout << "9. April 2023 " << endl;
                cout << "10. Mei 2023 " << endl;
                cout << "11. Juni 2023 " << endl;
                cout << "12. Juli 2023 " << endl;
                int bulan;
                cout << "Masukkan Bulan Yang Ingin Anda Cari : ";
                cin >> bulan;

                if (bulan == 1)
                {
                    cout << "01-20 Agustus 2022 Pembayaran UKT " << endl;
                    cout << "17 Agustus 2022 Hari Kemerdekan Indonesia " << endl;
                    cout << "18 Agustus Pennerimaan Mahasiswa Baru Oleh Rektor " << endl;
                    cout << "19-26 Agustus 2022 PKKMB Secara Daring " << endl;
                    cout << "15-26 Agustus 2022 Pelaksanaan KRS dan Perwalian Mahasiswa " << endl;
                }
                else if (bulan == 2)
                {
                    cout << "05 September 2022 Batas Akhir Perubahan / Pembatalan Mata Kuliah" << endl;
                }
                else if (bulan == 3)
                {
                    cout << "8 Oktober 2022 Maulid Nabi Muhammad SAW 1443 H " << endl;
                    cout << "17-28 Oktober 2022 Pelaksanaan Evaluasi Tengah Semester (EAS)" << endl;
                    cout << "29 Oktober 2022 Pelaksanaan Wisuda " << endl;
                }
                else if (bulan == 4)
                {
                    cout << "Tidak ada hari nasional dan kegiatan apapun " << endl;
                }
                else if (bulan == 5)
                {
                    cout << "19-30 Desember Pelaksanaan Evaluasi Akhir Semester (UAS)" << endl;
                    cout << "24 Desember Cuti Bersama Hari Raya Natal" << endl;
                    cout << "25 Desember Hari Raya Natal" << endl;
                }
                else if (bulan == 6)
                {
                    cout << "1 Januari 2023 Tahun Baru Masehi " << endl;
                    cout << "9 Januari 2023 Batas Akhir Penyerahan Nilai EAS " << endl;
                    cout << "22 Januari 2023 Tahun Baru Imlek " << endl;
                    cout << "16-31 Januari 2023 Pembayaran UKT " << endl;
                    cout << "23 Januari - 03 Febuari 2023 Pelaksanaan KRS dan Perwalian Mahasiswa " << endl;
                }
                else if (bulan == 7)
                {
                    cout << "6 Febuari 2023 Masa Perkuliahan " << endl;
                    cout << "18 Febuari 2023 Isra' Mi'raj Nabi Muhammad SAW" << endl;
                }
                else if (bulan == 8)
                {
                    cout << "22 Maret 2023 Hari Raya Nyepi " << endl;
                    cout << "27 Maret - 7 April 2023 Pelaksanaann EAS  " << endl;
                }
                else if (bulan == 9)
                {
                    cout << "7 April 2023 Wafat Yesus Kristus " << endl;
                    cout << "22-23 April Hari Raya Idul Fitri " << endl;
                }
                else if (bulan == 10)
                {
                    cout << "1 Mei 2023 Hari Buruh Sedunia " << endl;
                    cout << "6 Mei 2023 Hari Raya Waisak " << endl;
                    cout << "18 Mei 2023 Kenaikan Yesus Kristus " << endl;
                }
                else if (bulan == 11)
                {
                    cout << "1 Juni 2023 Hari Lahir Pancasila " << endl;
                    cout << "1 Juni -14 Juli 2  023 Pendaftaran Mahasiswa Baru Jalur Mandiri " << endl;
                    cout << "5-16 Juni 2023 Pelaksanaan EAS " << endl;
                    cout << "29 Juni 2023 Hari Raya Idul Adha " << endl;
                }
                else if (bulan == 12)
                {
                    cout << "19 Juli 2023 Tahun Baru Hijriyah " << endl;
                    cout << "24 Juli 2023 Pengumuman Jalur Mandiri " << endl;
                }
                break;
            }

            case 4:
            {
                int flag = 0;
                int npm;
                string pass;
                cout << "Masukkan Npm Anda : ";
                cin >> npm;
                cout << "Masukkan Password : ";
                cin >> pass;

                Menu *temp_menu = head_menu;
                while (temp_menu != NULL)
                {

                    if (temp_menu->nim == npm && temp_menu->password == pass)
                    {
                        flag = 1;
                        break;
                    }
                    temp_menu = temp_menu->next_menu;
                }

                if (flag == 0)
                {
                    cout << "Npm atau Password salah" << endl;
                }
                else
                {
                    mahasiswa.Print_biodata(npm);
                }

                cout << endl;

                break;
            }

            case 5:
            {
                int flag = 0;
                int npm;
                string pass;
                cout << "Masukkan Npm Anda : ";
                cin >> npm;
                cout << "Masukkan Password : ";
                cin >> pass;

                Menu *temp_menu = head_menu;
                while (temp_menu != NULL)
                {

                    if (temp_menu->nim == npm && temp_menu->password == pass)
                    {
                        flag = 1;
                        break;
                    }
                    temp_menu = temp_menu->next_menu;
                }

                if (flag == 0)
                {
                    cout << "Npm atau Password salah" << endl;
                }
                else
                {
                    mahasiswa.Print_absen(npm);
                }

                cout << endl;

                break;
            }
            case 6:
            {
                int flag = 0;
                int npm;
                string pass;
                cout << "Masukkan Npm Anda : ";
                cin >> npm;
                cout << "Masukkan Password : ";
                cin >> pass;

                Menu *temp_menu = head_menu;
                while (temp_menu != NULL)
                {

                    if (temp_menu->nim == npm && temp_menu->password == pass)
                    {
                        flag = 1;
                        break;
                    }
                    temp_menu = temp_menu->next_menu;
                }

                if (flag == 0)
                {
                    cout << "Npm atau Password salah" << endl;
                }
                else
                {
                    mahasiswa.print_ukt(npm);
                }

                cout << endl;

                break;
            }
            case 7:
            {
                int flag = 0;
                int npm;
                string old_pass;
                string new_pass;
                cout << "Masukkan NPM : ";
                cin >> npm;
                cout << "Masukkan Password : ";
                cin >> old_pass;

                Menu *temp_menu = head_menu;
                while (temp_menu != NULL)
                {
                    if (temp_menu->nim == npm && temp_menu->password == old_pass)
                    {
                        flag = 1;
                        cout << "Masukkan Password Baru : ";
                        cin >> new_pass;
                        break;
                    }
                    temp_menu = temp_menu->next_menu;
                }

                if (flag == 0)
                {
                    cout << "NPM atau Password Salah!" << endl;
                }
                else
                {
                    mahasiswa.changePassword(npm, old_pass, new_pass);
                    cout << endl;
                    mahasiswa.displayPasswords(npm, new_pass);
                }
                cout << endl;
                break;
            };
            case 8:
            {
                mahasiswa.print_list_mahasiswa();
                break;
            }
            case 9:
            {
                int pilihan3;
                cout << "  ---------------------------------------" << endl;
                cout << " |                                       |" << endl;
                cout << " |   Daftar Angkatan Mahasiswa           |" << endl;
                cout << " |              1. 2019                  |" << endl;
                cout << " |              2. 2020                  |" << endl;
                cout << " |              3. 2021                  |" << endl;
                cout << " |              4. 2022                  |" << endl;
                cout << " --------------------------------------- " << endl;
                cout << " *       Masukkan Pilihan : ";
                cin >> pilihan3;

                if (pilihan3 == 1)
                {
                    mahasiswa.print_list_mahasiswa("IF2019");
                    mahasiswa.print_list_mahasiswa("SI2019");
                    mahasiswa.print_list_mahasiswa("SD2019");
                    mahasiswa.print_list_mahasiswa("TM2019");
                }

                if (pilihan3 == 2)
                {

                    mahasiswa.print_list_mahasiswa("IF2020");
                    mahasiswa.print_list_mahasiswa("SI2020");
                    mahasiswa.print_list_mahasiswa("SD2020");
                    mahasiswa.print_list_mahasiswa("TM2020");
                }
                if (pilihan3 == 3)
                {

                    mahasiswa.print_list_mahasiswa("IF2021");
                    mahasiswa.print_list_mahasiswa("SI2021");
                    mahasiswa.print_list_mahasiswa("SD2021");
                    mahasiswa.print_list_mahasiswa("TM2021");
                }
                if (pilihan3 == 4)
                {
                    mahasiswa.print_list_mahasiswa("IF2022");
                    mahasiswa.print_list_mahasiswa("SI2022");
                    mahasiswa.print_list_mahasiswa("SD2022");
                    mahasiswa.print_list_mahasiswa("TM2022");
                }
                break;
            }
            case 10:
            {
                int pilihan3;
                cout << "  ---------------------------------------- " << endl;
                cout << " |                                             |" << endl;
                cout << " |     Daftar Mahasiswa By Semester            |" << endl;
                cout << " |              1. SMT 8                       |" << endl;
                cout << " |              2. SMT 6                       |" << endl;
                cout << " |              3. SMT 4                       |" << endl;
                cout << " |              4. SMT 2                       |" << endl;
                cout << " --------------------------------- " << endl;
                cout << " *       Masukkan Pilihan : ";
                cin >> pilihan3;

                if (pilihan3 == 1)
                {
                    mahasiswa.print_list_mahasiswa(8);
                }

                if (pilihan3 == 2)
                {

                    mahasiswa.print_list_mahasiswa(6);
                }
                if (pilihan3 == 3)
                {

                    mahasiswa.print_list_mahasiswa(4);
                }
                if (pilihan3 == 4)
                {

                    mahasiswa.print_list_mahasiswa(2);
                }
                break;
            }
            case 11:
            {
                mahasiswa.print_pengumuman();
                break;
            }

            default:
                cout << "INVALID" << endl;
            }
        }
    } while (pilihan != 12);
    return 0;
}