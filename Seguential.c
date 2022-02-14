#include <stdio.h>

int main() {
    
    int n, i, Data[10], cari, jumlah=0;
    
    printf("Mau input berapa data? ");
    scanf("%d", &n);
    printf("Masukkan %d integer (s) \n", n);
    scanf("%d", &Data[i]);
    
    printf("Cari angka berapa? ");
    scanf("%d", &cari);
    for(i=0; i<n; i++)
    {
        if(Data[i]==cari) //cek apakah data yang dicari ada dalam array
        {
            printf("Angka %d KETEMU, dan tersimpan di lokasi/indeks %d", cari, i);
            jumlah++; //semisall data yang ditemukan lebih dari satu lokasi
        }
    }
        if (jumlah==0)
            printf("Angka %d TIDAK DITEMUKAN!", cari);
        else
            printf("Angka %d KETEMU sebanyak %d kali dalam array", cari, jumlah);
        
    return 0;
}