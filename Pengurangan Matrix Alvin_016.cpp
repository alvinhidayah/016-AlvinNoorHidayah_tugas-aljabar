#include <iostream>
using namespace std;
int main() {
  int a, b, c, d, matriks1[10][10], matriks2[10][10], hasil[10][10];
  cout << "Masukkan jumlah baris matriks: ";
  cin >> c;
  cout << "Masukkan jumlah kolom matriks: ";
  cin >> d;
  cout << "Masukkan elemen matrix pertama: \n";
  
  //Menyimpan Elemen Matriks
  for(a = 0; a < c; a++){
    for(b = 0; b < d; b++){
      cin >> matriks1[a][b];
    }
  }
  //Mencetak Matriks
  cout << "\nMasukkan Matrix: " << endl;
   for (int a = 0; a< c; ++a) {
      for (int b = 0; b < d; ++b) {
         cout << " " << matriks1[a][b];
         if (b == d - 1)
            cout << endl << endl;
    	}
	}
  cout << "Masukkan elemen matrix kedua: \n";
  
  //Menyimpan Elemen Matriks
  for(a = 0; a< c; a++){
    for(a = 0; a < c; a++){
      cin >> matriks2[a][b];
    }
  }
  //Mencetak Matriks
  cout << "\nMasukkan Matrix: " << endl;
   for (int a = 0; a < c; ++a) {
      for (int b = 0; b < d; ++b) {
         cout << " " << matriks2[a][b];
         if (b == d - 1)
            cout << endl << endl;
    	}
	}
  
  //cetak hasil pengurangan Matriks
  cout << "hasil pengurangan matrix: \n";
  for(a = 0; a < c; a++){
    for(b = 0; b < d; b++){
      hasil[a][b] = matriks1[a][b] - matriks2[a][b];
      cout << hasil[a][b] << "\t";
    }
    cout << endl;
  }
  
  return 0;
}
