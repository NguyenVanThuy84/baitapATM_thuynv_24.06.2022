#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	/* Bai toan ATM don gian */
	int card,chon,sotien,stk,sodu;
	char tieptuc;
	sodu=1000000;
	printf (" Xin vui long dua the ATM cua ban vao \n ");
	printf ("Xin vui long nhap ma PIN: \n");\
	scanf("%d",&card);
if (card ==456)
{
	do
{
		printf ("chon 1: Rut tien \n");
		printf ("chon 2: chuyen khoan \n");
		printf ("chon 3: kiem tra so du \n");
		printf ("chon 4: ket thuc \n");
		printf ("Moi ban chon: \n");
		scanf ("%d", &chon);\
	switch (chon)
{
		case 1:
			printf ("Nhap so tien can rut: \n");
			scanf("%d",&sotien);
			if (sotien <= sodu)
		{
			printf("So tien ban da rut la: %d \n",sotien);
			printf ("So du trong tai khoan cua ban la: %d \n",sodu-sotien);
		}
			else
			printf ("So tien ban khong du de rut \n");
			break;
		case 2:
			printf ("Nhap so tai khoan can chuyen khoan: \n");
			scanf ("%d",&stk);
			printf ("Nhap so tien can chuyen khoan: \n");
			scanf ("%d",&sotien);
			if (sotien <= sodu)
{
			printf ("so tien ban da chuyen khoan la:  %d \n",sotien);
			printf ("So du trong tai khoan cua ban la: %d \n",sodu-sotien);
}
			else
			printf ("So tien vuot qua so du \n");
			break;
		case 3:
			printf ("So du cua ban la: %d \n",sodu);
			break;
		case 4:
			break;
}
		printf ("Chon y de tiep tuc: \n");
		fflush(stdin); 
		scanf ("%c",&tieptuc);
}
	while (tieptuc ='y');
}
else
	printf ("Ban nhap sai mat khau, moi ban nhap lai: \n");
while (card !=456);
	return 0;
}
