#include<stdio.h>
#include<conio.h>
int hello;
void tinhgiaithua(int n);
void tinhtong(int a,int b);
void tinhdtHCN(int a,int b);
void timUCLN(int a,int b);

int main()
{
	int n;
	int a;
	int b;
	printf("\n\tHello World!!");
	tinhgiaithua(n);
	tinhtong(a,b);
	tinhdtHCN(a,b);
	timUCLN(a,b);
return 0;
}

void tinhgiaithua(int n)
{
	printf("\n\n\tNhap so nguyen duong N= ");
	scanf("%d",&n);
		int gt=1;
		for(int i=1;i<=n;i++)
			gt=gt*i;
	printf("\n\tGiai thua cua so nguyen duong %d! la: %d",n,gt);
}

void tinhtong(int a,int b)
{
	int tong=0;
	printf("\n\n  TINH TONG HAI SO NGUYEN DUONG");
	printf("\n\n\tNhap so nguyen thu nhat= ");
	scanf("%d",&a);
	printf("\n\tNhap so nguyen thu hai= ");
	scanf("%d",&b);
	tong=a+b;
	printf("\n\tTong hai so nguyen vua nhap la: %d",tong);
}

void tinhdtHCN(int a,int b)
{
	int dt=0;
	printf("\n\n  TINH DIEN TICH HINH CHU NHAT");
	printf("\n\n\tNhap chieu dai HCN= ");
	scanf("%d",&a);
	printf("\n\tNhap chieu rong HCN= ");
	scanf("%d",&b);
	dt=a*b;
	printf("\n\tDien tich HCN la: %d",dt);
}


void timUCLN(int a,int b)
{	
	printf("\n\nTIM UOC CHUNG LON NHAT");
	printf("\n\n\tNhap so nguyen thu nhat= ");
	scanf("%d",&a);
	printf("\n\tNhap so nguyen thu hai= ");
	scanf("%d",&b);
	{
	int k=b;
    if(a>b)
        k=a;
        {
        	for(int i=k;i>0;i++)
        	{
        		if(a%i==0&&b%i==0);
        	}
        }
    }
}


















