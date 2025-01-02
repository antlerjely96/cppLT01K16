/*
	19. Nhap 1 so nguyen n.
	Hien thi cac so trong khoang tu 1 den n thoa man dieu kien:
	So do chia het cho cac chu so cua chinh no.
	Vi du: nhap n = 50 se hien thi:
	1 2 3 4 5 6 7 8 9 11 12 15 22 24 33 36 44 48
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "n = ";
    cin >> n;

    if (n < 1) {
        cout << "Khong co gia tri thoa man" << endl;
    } else {
        int chuSo;
        int soTam;
        int soChuSo;
        int soCanKiemTra;
        int dem;

        for (int i = 1; i <= n; i++) {
            soTam = i;
            soChuSo = 0;
            do {
                soChuSo++;
                soTam /= 10;
            } while (soTam > 0);

            soCanKiemTra = i;
            dem = 0;

            while (soCanKiemTra > 0) {
                chuSo = soCanKiemTra % 10;
                soCanKiemTra /= 10;

                if (chuSo != 0 && i % chuSo == 0) {
                    dem++;
                }
            }

            if (dem == soChuSo) {
                cout << i << "\t" << endl;
            }
        }
    }
    return 0;
}
