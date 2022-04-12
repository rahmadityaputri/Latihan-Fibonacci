#include <iostream>
using namespace std;

int main(){
	
	// gunanya yaitu untuk mencari nilai yang diinginkan
	int n, f1 = 1, f2 = 1, berikutnya = 0;

    cout << "Masukan Batas Deret Bilangan Fibonacci :  ";
    cin >> n; // Untuk menerima input
	cout<<endl; // membuat enter
    cout << "Deret Fibonacci: ";
    
    // kalau int i dimulai dari 0
    // 0 1 2 3 4 5 6 7 8 9
    
    // kalau int i dimulai  dari 1
    // 1 2 3 4 5 6 7 8 9 10
    for (int i = 1; i <= n; ++i) // perulangan terhadap deret fibonacci
    {
        // Mencetak dua deret bilangan fibonacci pertama.
        if(i == 1){
            cout << " " << f1 <<" ";
            continue;
        } // mencetak angka pertama fibonacii
        
        if(i == 2){
            cout << f2 << " ";
            continue;
        } // mencetak angka kedua fibonacii
        
        berikutnya = f1 + f2;
        //yaitu rumus umum fibonacci 2 nilai sebelumnya dijumlahkan
        f1 = f2;            
        f2 = berikutnya;
        
		// Mencetak deret bilangan fibonacci berikutnya.
        cout << berikutnya << " "; // mencetak hasil
    }
    return 0;
    
}
