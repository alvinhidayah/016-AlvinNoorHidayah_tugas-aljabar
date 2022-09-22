#include <iostream>
using namespace std;
int main() {
  int i, j, m, n, matriks1[5][5], matriks2[5][5], hasil[5][5];
  cout << "Masukkan banyak baris matriks: ";
  cin >> m;
  cout << "Masukkan banyak kolom matriks: ";
  cin >> n;
  cout << "Masukkan elemen matrix pertama: \n";
  
  //Menyimpan Elemen Matriks
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      cin >> matriks1[i][j];
    }
  }
  //Mencetak Matriks
  cout << "\n Matrix ke 1: " << endl;
   for (int i = 0; i < m; ++i) {
      for (int j = 0; j < n; ++j) {
         cout << " " << matriks1[i][j];
         if (j == n - 1)
            cout << endl << endl;
    	}
	}
  cout << "Masukkan elemen matrix kedua: \n";
  
  //Menyimpan Elemen Matriks
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      cin >> matriks2[i][j];
    }
  }
  //Mencetak Matriks
  cout << "\n Matrix ke 2: " << endl;
   for (int i = 0; i < m; ++i) {
      for (int j = 0; j < n; ++j) {
         cout << " " << matriks2[i][j];
         if (j == n - 1)
            cout << endl << endl;
    	}
	}
  
  //mencetak hasil penjumlahan Matriks
  cout << "hasil penjumlahan matrix: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      hasil[i][j] = matriks1[i][j] + matriks2[i][j];
      cout << hasil[i][j] << "\t";
    }
    cout << endl;
  }
  
  return 0;
}
