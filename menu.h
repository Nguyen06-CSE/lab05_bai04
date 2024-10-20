#pragma once
#include<iostream>
#include<math.h>
#include<cmath>
#include<ctime>
#include <algorithm>
#include <climits>



#define TAB '\t'
#define MAX 1000


using namespace std;

typedef int DaySo[MAX];


void hoanVi(int &a, int &b);
int randNumPo(DaySo a);
int randNumPoAndNe(DaySo a);
void nhapMang(DaySo a, int n);
void xuatMang(DaySo a, int n);
bool laSoNguyenTo(int n);
int chenPhanTu(DaySo a, int n, int x);
int chenXTaiVT(DaySo a, int n, int x, int vt);
int chenVaoPTLonNhat(DaySo a, int n, int x);
int chenVaoTruocSoNT(DaySo a, int n, int x);
int tinhTong(DaySo a, int start, int end);
int doChenhLechNhoNhat(DaySo a, int n);
int chenPhanTuXOGiua(DaySo a, int n, int x);












void choiseMenu(DaySo a, int choise) {
    int n, TD, dau;
    int x;
    cout << "hay nhap so x de thuc hien cac chuc nang: ";
    cin >> x;
    cout << endl;

    switch (choise) {





    case 1:
        int vt;
        cout << "ban hay nhap VI TRI trong mang a de chen vao mang: ";
        cin >> vt;



        cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
        cin >> TD;

        if (TD == 1) {
            cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong(am va duong nham 2, duy nhat duong nhan 1): ";
            cin >> dau;
            int phanTu, dem;
            if (dau == 1) {
                phanTu = randNumPo(a);

            }
            else {
                phanTu = randNumPoAndNe(a);

            }
            cout << "\nmang sau khi da hoan vi phan tu " << chenXTaiVT(a, phanTu, x, vt) << " tai vi tri " << vt << " cua mang la: \n";
            xuatMang(a, phanTu + 1);

        }
        else {
            cout << "nguoi dung hay nhap so n: ";
            cin >> n;
            nhapMang(a, n);
            cout << "mang sau khi da hoan vi phan tu " << chenXTaiVT(a, n, x, vt) << " tai vi tri " << vt << " cua mang la: \n";
            xuatMang(a, n + 1);
        }


        break;
    case 2:


        cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
        cin >> TD;

        if (TD == 1) {
            cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong(am va duong nham 2, duy nhat duong nhan 1): ";
            cin >> dau;
            int phanTu, dem;
            if (dau == 1) {
                phanTu = randNumPo(a);

            }
            else {
                phanTu = randNumPoAndNe(a);

            }
            cout << "\n vi tri ma x se chen vao la " << chenVaoPTLonNhat(a, phanTu, x) << " va so " << x << " se duoc chen vao mang nhu sau : \n";
            xuatMang(a, phanTu + 1);


        }
        else {
            cout << "nguoi dung hay nhap so n: ";
            cin >> n;
            nhapMang(a, n);
            chenVaoPTLonNhat(a, n, x);
            cout << "\nvi tri ma x se chen vao la" << chenVaoPTLonNhat(a, n, x) << " va so " << x << " se duoc chen vao mang nhu sau : \n";
            xuatMang(a, n + 1);
        }

        break;
    case 3:


        cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
        cin >> TD;

        if (TD == 1) {
            cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong(am va duong nham 2, duy nhat duong nhan 1): ";
            cin >> dau;
            int phanTu, dem;
            if (dau == 1) {
                phanTu = randNumPo(a);

            }
            else {
                phanTu = randNumPoAndNe(a);

            }
            cout << "\n vi tri ma x se chen vao la " << chenVaoTruocSoNT(a, phanTu, x) << " va so " << x << " se duoc chen vao mang nhu sau : \n";
            xuatMang(a, phanTu);


        }
        else {
            cout << "nguoi dung hay nhap so n: ";
            cin >> n;
            nhapMang(a, n);
            chenVaoPTLonNhat(a, n, x);
            cout << "\nvi tri ma x se chen vao la" << chenVaoPTLonNhat(a, n, x) << " va so " << x << " se duoc chen vao mang nhu sau : \n";
            xuatMang(a, n);
        }

        break;
    case 4:


        cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
        cin >> TD;

        if (TD == 1) {
            cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong(am va duong nham 2, duy nhat duong nhan 1): ";
            cin >> dau;
            int phanTu, dem;
            if (dau == 1) {
                phanTu = randNumPo(a);

            }
            else {
                phanTu = randNumPoAndNe(a);

            }

            cout << "\nvi tri ma x se chen vao la" << chenPhanTuXOGiua(a, phanTu, x) << " va so " << x << " se duoc chen vao mang nhu sau : \n";
            cout << endl;
            xuatMang(a, phanTu );


        }
        else {
            cout << "nguoi dung hay nhap so n: ";
            cin >> n;
            nhapMang(a, n);
            cout << "\nvi tri ma x se chen vao la" << chenPhanTuXOGiua(a, n, x) << " va so " << x << " se duoc chen vao mang nhu sau : \n";
            xuatMang(a, n );
        }

        break;



    }
}



int randNumPo(DaySo a) {
    int dem = 0;
    srand(time(0));
    int n = 0;
    cout << "Hay nhap pham vi SO LUONG chu so ma ban muon (min max): ";
    int minDigits, maxDigits;
    cin >> minDigits >> maxDigits;

    if (minDigits < 0 || maxDigits < 0) {
        cout << "Ban nhap sai pham vi (Pham vi phai > 0)! " << endl;
        return 0;
    }
    else {
        cout << "Hay nhap so luong so ban muon: ";
        int quantity;
        cin >> quantity;

        cout << "So duoc tao ngau nhien la: \n";
        for (int i = 0; i < quantity; i++) {
            int digitCount = rand() % (maxDigits - minDigits + 1) + minDigits;
            int randomNumber = 0;
            int multiplier = 1;

            for (int j = 0; j < digitCount; j++) {
                // if (j == 0) {
                //     randomNumber += (rand() % 9 + 1) * multiplier;
                // } else {
                randomNumber += (rand() % 10) * multiplier;
                // }
                multiplier *= 10;
            }

            a[i] = randomNumber;
            ++n;
            cout << randomNumber << TAB;
            ++dem;
            if (dem == 15) {
                cout << endl;
                dem = 0;
            }
        }
        cout << endl;
    }
    return n;
}

// Generates an array of random numbers that can be positive or negative
int randNumPoAndNe(DaySo a) {
    int dem = 0;
    srand(time(0));
    int n = 0;
    cout << "ban vua chon so am va duong \n";
    cout << "Hay nhap pham vi SO LUONG CHU SO ma ban muon (min max): ";
    int minDigits, maxDigits;
    cin >> minDigits >> maxDigits;

    if (minDigits < 0 || maxDigits < 0) {
        cout << "Ban nhap sai pham vi (Pham vi phai > 0)! " << endl;
        return 0;
    }
    else {
        cout << "Hay nhap so luong so ban muon: ";
        int quantity;
        cin >> quantity;

        cout << "So duoc tao ngau nhien la: \n";
        for (int i = 0; i < quantity; i++) {
            int digitCount = rand() % (maxDigits - minDigits + 1) + minDigits;
            int randomNumber = 0;
            int multiplier = 1;

            for (int j = 0; j < digitCount; j++) {
                // if (j == 0) {
                //     randomNumber += (rand() % 9 + 1) * multiplier;
                // } else {
                randomNumber += (rand() % 10) * multiplier;
                // }
                multiplier *= 10;
            }

            if (rand() % 2 == 0) {
                randomNumber = -randomNumber;
            }

            a[i] = randomNumber;
            ++n;
            cout << randomNumber << TAB;
            ++dem;

            if (dem == 15) {
                cout << endl;
                dem = 0;
            }
        }
        cout << endl;
    }
    return n;
}


void nhapMang(DaySo a, int n) {

    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "]=";
        cin >> a[i];
        cout << endl;
    }
}

void xuatMang(DaySo a, int n) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        cout << a[i] << TAB;
        ++dem;
        if (dem == 15) {
            cout << endl;
            dem *= 0;
        }
    }
    cout << endl;
}

void hoanVi(int &a, int &b) {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}




int chenXTaiVT(DaySo a, int n, int x, int vt) {
    a[n] = x;
    for (int i = n - 1; i >= vt; i--) {
        hoanVi(a[i], a[i + 1]);
    }

    return x;
}

int chenVaoPTLonNhat(DaySo a, int n, int x) {
    int maxVa = a[0];
    int viTri = 0;
    a[n + 1] = x;
    for (int i = 1; i < n; i++) {
        if (maxVa < a[i]) {
            maxVa = a[i];
            viTri = i;
        }
    }

    for (int i = n; i >= viTri; i--) {
        hoanVi(a[i], a[i + 1]);
    }
    return viTri;
}


bool laSoNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}



int chenVaoTruocSoNT(DaySo a, int n, int x) {
    int maxVa = a[0];
    int viTri = 0;
    a[n + 1] = x;
    for (int i = 2; i < sqrt(n); i++) {
        if (laSoNguyenTo(i)) {
            maxVa = a[i];
            viTri = i;
        }
    }

    for (int i = n; i >= viTri; i--) {
        hoanVi(a[i], a[i + 1]);
    }
    return viTri;

}


int doChenhLechNhoNhat(DaySo a, int n) {
    int sum = 0;
    int left = 0;
    int viTri = 0;
    int chenhLechMax = INT_MAX;

    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    for (int i = 0; i < n; i++) {
        int right = sum - left - a[i];
        int chenhLech = abs(left - right);

        if (chenhLech < chenhLechMax) {
            chenhLechMax = chenhLech;
            viTri = i;
        }

        left += a[i]; 
    }
    return viTri;
}

int chenPhanTuXOGiua(DaySo a, int n, int x) {
    int viTri = doChenhLechNhoNhat(a, n);

    for (int i = n; i > viTri; i--) {
        a[i] = a[i - 1];
    }

    a[viTri + 1] = x;
    ++n;

    return viTri + 1;
}



