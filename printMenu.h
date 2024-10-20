#pragma once
#include<iostream>
#include<math.h>
#include <iomanip>

#define MAX 1000
#define TAB '\t'

using namespace std;


typedef int DaySo[MAX];



void print() {
    cout << "\n====================================================MENU====================================================\n"
        << "0. thoat khoi CT \n"
        << "1. chen phan tu x vao mang a tai vi tri cho truoc \n"
        << "2. chen phan tu x vao sau phan tu lon nhat (dau tien tim duoc) trong mang \n"
        << "3. chen phan tu x vao so NT dau tien trong mang \n"
        << "4. chen phan tu x vao mang a sao cho do chenh lech giua tong cac phan tu ben trai va ben phai la nho nhat  \n"
        << "5. chen phan tu x vao sau moi phan tu y cho truoc, Neu mang ko chua y thi chen tai vi tri 0 \n"
        << "6. thay the phan tu y boi phan tu x cho truoc\n"
        << "==================================================================================================================\n \n";

}