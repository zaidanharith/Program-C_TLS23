#include <bits/stdc++.h>
using namespace std;

int main(){

     // Inisialisasi Variabel untuk Ukuran Matriks
     int m,n,p;
     // Tentukan Ukuran Matriks
     cin >> m >> n >> p;
     // Membuat Matriks A dengan Ukuran m x n dan Matriks B dengan Ukuran n x p
     int matriksA[m][n], matriksB[n][p];
     // Beri Nilai Untuk Semua Elemen di Matriks A
     for(int i=0; i<m; i++){
          for(int j=0; j<n; j++) cin >> matriksA[i][j];
     }
     // Beri Nilai Untuk Semua Elemen di Matriks B
     for(int i=0; i<n; i++){
          for(int j=0; j<p; j++) cin >> matriksB[i][j];
     }

     // Membuat Matriks Hasil Perkalian (Matriks C) dengan ukuran m x p
     int matriksC[m][p];
     // Beri Nilai untuk Semua elemen di Matriks C Berdasarkan Konsep Perkalian Sekaligus Menampilkan Matriks C
     for(int i=0; i<m; i++){
          for(int j=0; j<p; j++){
               matriksC[i][j]=0;
               for(int k=0; k<n; k++) matriksC[i][j] += (matriksA[i][k] * matriksB[k][j]);
               cout << matriksC[i][j] << " ";
          }
          cout << endl;
     }

     return 0;

}