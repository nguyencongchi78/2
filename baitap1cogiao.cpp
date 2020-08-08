//viet chuong trinh thuc hien 1 trong cac phep toan +,-,*,/,^.
//input : nhap vao hai so a va b.
//xu ly : thuc hien cac phep toan. 
//output : xuat ra man hinh ket qua cua cac phep toan.
#include <stdio.h>
#include<stdlib.h>
//#include<string.h>
#include<conio.h>
void Nhap (int &a , int &b);//dinh nghia ham 
int Tinhcong (int a , int b);//dinh nghia ham
void Xuatcong (int a , int b);//dinh nghia ham 
int Tinhtru (int a , int b);//dinh nghia ham
void Xuattru (int a , int b);//dinh nghia ham
int Tinhnhan (int a , int b);//dinh nghia ham
void Xuatnhan (int a , int b);//dinh nghia ham
int Tinhchia (int a , int b);//dinh nghia ham
void Xuatchia (int a , int b);//dinh nghia ham
int Tinhmu (int a , int b);//dinh nghia ham
void Xuatmu (int a , int b);//dinh nghia ham
void Hamxuly (int a , int b);//dinh nghia ham
int main (){
	int a,b;
	Hamxuly (a,b);
	return 0;
}
//xay dun ham nhap
void Nhap(int &a ,int &b){
	printf ("\nNhap a tu ban phim: ");
	scanf ("%d",&a);
	printf ("\nNhap b tu ban phim: ");
	scanf ("%d",&b);
}
//xay dung ham tinh cong 
int Tinhcong(int a , int b){
	return a + b ;
}
//xay dung ham tinh cong 
void Xuatcong(int a,int b){
	printf ("\n\t%d + %d = %d",a,b,a+b);
}
//xay dung ham tinh tru
int Tinhtru (int a , int b){
	return a - b ;
}
//xay dung ham xuat tru 
void Xuattru (int a,int b){
	printf ("\n\t%d - %d = %d",a,b,a-b);
}
//xay dung ham tinh nhan
int Tinhnhan (int a , int b){
	return a * b ;
}
//xay dung ham xuat nhan
void Xuatnhan (int a , int b){
	printf ("\t%d * %d = %d",a,b,a*b);
}
//xay dung ham tinh chia
int Tinhchia (int a, int b){
	return a / b;
}
//xay dung ham xuat chia
void Xuatchia (int a , int b){
	printf ("\t%d / %d = %d",a,b,a/b);
}
//xay dung ham tinh mu
int Tinhmu (int a , int b){
	return a ^ b ;
}
//xay dung ham xuat mu
void Xuatmu (int a , int b){
	printf ("\t%d^%d = %d",a,b,a^b);
}
//xay dung ham xu ly
void Hamxuly (int a , int b){
	int key ;
	bool Danhap = false;
	while(true){
		system("cls");
		printf("\n\t ===============================");
		printf("\n\t =========== MENU ==============");
		printf("\n\t == 1.Nhap a,b tu ban phim =====");
		printf("\n\t =========== 2.Tinh cong =======");
		printf("\n\t =========== 3.Tinh tru ========");
		printf("\n\t =========== 4.Tinh nhan =======");
		printf("\n\t =========== 5.Tinh chia =======");
		printf("\n\t =========== 6.Tinh mu =========");
		printf("\n\t =========== 7.thoat ===========");
		printf("\n\t ===============================\n");
		printf ("\nMOI BAN NHAP LUA CHON : ");
		scanf("%d",&key); 
		switch(key){
			case 1:
				printf("\nBan da chon nhap a,b.\n");
				Nhap(a,b);
		        printf("\nDa nhap thanh cong.");
				Danhap = true;
				printf("\nNhan phim bat ky de tiep tuc.");
				getch();
				break;
			case 2:
				if(Danhap){
				printf ("\nBan da chon tinh cong.");
				Tinhcong(a,b);
				Xuatcong (a,b);
				printf ("\nDa tinh thanh cong");
				
			}else
				printf("\nBan phai nhap a b truoc.");
				printf("\nNhan phim bat ky de tiep tuc.");
				getch();
				break;
			case 3 : 
			   if(Danhap){
				printf ("\nBan da chon tinh tru.");
				Tinhtru(a,b);
				Xuattru (a,b);
				printf ("\nDa tinh thanh cong");
				
			}else
				printf("\nBan phai nhap a b truoc.");
				printf("\nNhan phim bat ky de tiep tuc.");
				getch();
				break;
			case 4 : 
			   if(Danhap){
				printf ("\nBan da chon tinh nhan.");
				Tinhnhan (a,b);
				Xuatnhan (a,b);
				printf ("\nDa tinh thanh cong");
				
			}else
				printf("\nBan phai nhap a b truoc.");
				printf("\nNhan phim bat ky de tiep tuc.");
				getch();
				break;
			case 5 :
				if (Danhap){
					printf ("\nBan da chon tinh chia\n");
					Tinhchia(a,b);
					Xuatchia(a,b);
					printf ("\nDa tinh thanh cong");
					
				}else 
				printf ("\nBan phai nhap a b truoc");
				printf("\nNhan phim bat ky de tiep tuc.");
				getch();
				break;
			case 6 :
				if (Danhap){
					printf ("\nBan da chon tinh mu\n");
					Tinhmu(a,b);
					Xuatmu(a,b);
					printf ("\nDa tinh thanh cong");
					
				}else 
				printf ("\nBan phai nhap a b truoc");
				printf("\nNhan phim bat ky de tiep tuc.");
				getch();
				break;
			case 7:
				system("cls");
			    printf("\nBan da chon thoat chuong trinh.");
			    printf("\nNhan phim bat ky de tiep tuc.");
			    getch();
			default:
			    printf("\nKhong co chuc nang nay...");
				printf("\nNhan phim bat ky de tiep tuc...");
				getch();
				break;	
}
}
}
