#include <stdio.h>

struct Alamat {
    char NamaJalan[40];
    int NomorRumah;
    char Kota[20];
    char Provinsi[20];
};

struct TanggalLahir {
    int Tanggal, Bulan, Tahun;
};

struct DataDosen {
    int NoDosen;
    int NIDN;
    char nama[20];
    struct Alamat alamat;
    char TempatLahir[10];
    struct TanggalLahir tanggal_lahir;
};

int main()
{
    const int SIZE = 5;
    struct DataDosen data_dosen[SIZE];

    printf("================================\n");
    printf("=  MASUKKAN DATA DARI 5 DOSEN  =\n");
    printf("================================\n");
    for(int i = 0; i < SIZE; i++)
    {
        printf("Input data dosen ke-%d\n", i+1);
        printf("  No Dosen      = ");
        scanf("%d", &data_dosen[i].NoDosen);
        printf("  NIDN          = ");
        scanf("%d", &data_dosen[i].NIDN);
        printf("  Nama Dosen    = ");
        scanf("%s", data_dosen[i].nama);
        printf("  Alamat \n");
        printf("    Nama Jalan  = ");
        scanf("%s", data_dosen[i].alamat.NamaJalan);
        printf("    Nomor Rumah = ");
        scanf("%d", &data_dosen[i].alamat.NomorRumah);
        printf("    Kota        = ");
        scanf("%s", data_dosen[i].alamat.Kota);
        printf("    Provinsi    = ");
        scanf("%s", data_dosen[i].alamat.Provinsi);
        printf("  Tempat Lahir  = ");
        scanf("%s", data_dosen[i].TempatLahir);
        printf("  Tanggal Lahir \n");
        printf("    Tanggal     = ");
        scanf("%d", &data_dosen[i].tanggal_lahir.Tanggal);
        printf("    Bulan       = ");
        scanf("%d", &data_dosen[i].tanggal_lahir.Bulan);
        printf("    Tahun       = ");
        scanf("%d", &data_dosen[i].tanggal_lahir.Tahun);
        printf("\n");
    }

    printf("======================================\n");
    printf("=  DATA DOSEN YANG SUDAH DIMASUKKAN  =\n");
    printf("======================================\n");
    for(int i = 0; i < SIZE; i++)
    {
        printf("Data dosen ke-%d\n", i+1);
        printf("  No Dosen      = %d\n", data_dosen[i].NoDosen);
        printf("  NIDN          = %d\n", data_dosen[i].NIDN);
        printf("  Nama Dosen    = %s\n", data_dosen[i].nama);
        printf("  Alamat \n");
        printf("    Nama Jalan  = %s\n", data_dosen[i].alamat.NamaJalan);
        printf("    Nomor Rumah = %d\n", data_dosen[i].alamat.NomorRumah);
        printf("    Kota        = %s\n", data_dosen[i].alamat.Kota);
        printf("    Provinsi    = %s\n", data_dosen[i].alamat.Provinsi);
        printf("  Tempat Lahir  = %s\n", data_dosen[i].TempatLahir);
        printf("  Tanggal Lahir \n");
        printf("    Tanggal     = %d\n", data_dosen[i].tanggal_lahir.Tanggal);
        printf("    Bulan       = %d\n", data_dosen[i].tanggal_lahir.Tanggal);
        printf("    Tahun       = %d\n", data_dosen[i].tanggal_lahir.Tahun);
        printf("\n");
    }

    return 0;
}
