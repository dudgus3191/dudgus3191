#include<stdio.h>
int main() {
	for (int i = 2; i <= 9; ++i)
		



	return 0;
}

/*#include<stdio.h>
int main() {
	//�����ϳ��� Ű����� �Է¹޾� ī��Ʈ�ٿ� ����ϱ�..0����
	int n ;
	puts("ī��Ʈ�ٿ�");
	scanf_s("%d", &n);

	for (; n >=0; --n) {
		printf("%d\n", n);
		


	}

	return 0;
}
*/
/*#include<stdio.h>
int main() {

	int dan;
//	puts("�� �Է�(2~9)!");
	//scanf_s("%d", &dan);

	for (int dan = 2; dan <= 9; dan++) {
		printf("--%d��--\n", dan);
		for (int i = 1; i <= 9; ++i) {
			printf("%d x %d=%2d\n", dan, i, dan * i);
		}
		printf("\n");
		//puts("");
	}


	return 0;
}
*/



/*#include<stdio.h>
int main() {

	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) {
			continue;// �Ʒ��������� �ʰ� �������� �̵�
		}
			printf("%d\n", i );
		
	}

	return 0;
}
*/


/*#include<stdio.h>
int main() {

	//for(�ʱⰪ;���ǹ�;������) {}
	//for(;;){//���ѷ���
	//	printf("for�ݺ�");}
	//for (int i = 1; ���ʽ����Ҷ� 1��������ȴ�
	// i <= 10; 
	// i++) { //
	//	printf("%d\n", i); �Ǥ�
	//}

	puts("---");
	int j = 1;
	while (j <= 10) {
		printf(" % d\n", j);
		j++
	}
	



	return 0;
}
*/

/*#include<stdio.h>
int main() {

	int n, m=1;
	int sum = 0;
	scanf_s("%d", &n);
	//1~n :�� �߿��� ¦���� ���� ����ϼ���.

	while (m <= n) {
		if (m % 2 == 0) {
			sum = sum + m;
			} ++m;
			
		}
	
	printf("¦���� �� : %d\n", sum);


	return 0;
}
*/

/*#include<stdio.h>
int main() {
	int i,  j= 1;
	scanf_s("%d", & i);
	//1~i Ȧ���� ����ϼ���

	while (j <= i) {
		if (j % 2 == 1) {
			printf("%d\n", j);
		}
		++j;


		

	}
	return 0;
}



*/


/*#include<stdio.h>
int main() {

	//Ű���忡�� ���� �ϳ� �Է¹ް� ... 10,9,8,7,6,5,4,3,2,1,

	int i;
	
	i = 10;
	while (i >= 1) {
		printf("%d,", i); i--;

	}


	return 0;
}
*/



/*#include<stdio.h>
int main() {
	int i;
	int dan;
	dan = 2;
	while (dan <= 9) {
		i = 1;
		while (i <= 9) {
			printf("%d X %d= %2d\n", dan, i, dan * i); i++;

		}
		puts("");
		dan++;
	}
	return 0;
}*/




/*#include<stdio.h>
int main() {
	int sum = 0;
	int i = 1;
	while (i<=100) {
		sum += i;//sum = sum + i;

		i++;
	}
	printf("sum=%d\n", sum);

	return 0;
}

*/







/*#include <stdio.h>
int main() {

	char ch;
	
	while (1) {
		scanf_s("%c", &ch, sizeof(ch));
		if (ch == 'x') {
			break; //�ݺ��� Ż��
		}
		printf("%c", ch);
		
	}

	return 0;
}*/




/*#include<stdio.h>
int main() {
	int index = 1; //�ʱⰪ

	while 
		(index<=5) { //���ǹ�
		printf("%d\n", index);
		index++;//������
		//1���� index = index+1; index +=1
	}
	
	
	return 0;



}

*/







/*#include<stdio.h>
int main() {

	int money = 54700;//50,000 10,000 5,0000 1,000 500 100 50 10
 

	return 0;
}*/






/*#include<stdio.h>
int main() {

	int n;
	puts("�����Է�(1~3)");
	scanf_s("%d", &n);
	//1�̸� ����,2����,3��
	switch (n) {
	case1:
		puts("����"); break;
	case2:
		puts("����"); break;
	case3:
		puts("��"); break;
	}
}
*/



/*#include<stdio.h>
//�� ���� Ű����� �Է¹ٴ� ū���� ����ϼ���.
int main() {
	int x, y;
	puts("�� ������ �Է��ϼ���.");
	scanf_s("%d,%d", &x, &y);
	printf("x=%d\ty=%d\n", x, y);

	//printf("���߿� ū����? %d\n", x > y ? x : y);
	if (x > y) {
		printf("���߿� ū����? %d\n", x);
	}
	else {
		printf("���߿� ū����? %d\n", y);
	}


	return 0;
}
*/



/*#include<stdio.h>

int main() {
	//���Կ�����
	//����?true:false
	
	int n = 9;

	printf("%s\n",(n%2==0)? "¦���Դϴ�.":"Ȧ���Դϴ�.");
	
	int r = n % 2 == 0 ? 100 : 999;
	return 0;
}*/








/*#include<stdio.h>
#define �����̻� 9
int main() {
	int n =50;
	
	switch (n/10) {
	case 10:
	case �����̻�:
		printf("a");
		break;//{}Ż��
	case 80:
		printf("b");
		break;
	case 70:
		printf("c");
		break;
	case 60:
		printf("d");
		break;
	
	default:
		puts("f");
	}


	return 0;
}


*/






/*#include <stdio.h>

int main() {

	int n;
	printf("�����Է� :");
	scanf_s("%d", &n);
	printf("n = %d\n", n);

	//������ 90�� �̻� a���� ���
	//������ 80�� �̻� b���� ���
	//������ 70�� �̻� c���� ���
	//������ 60�� �̻� d���� ���
	//������ 60�� �̸� f���� ���

	if (n >= 90) {
		puts("a����");
	}
	else {
		if (n >= 80) {
			puts("b����");
		}
		else {
			if (n >= 70) {
				puts("c����");
			}
			else {
				if (n >= 60) {
					puts("d����");
				}
				else {
					puts("f����");
				}
			}
		}
	}

	if (n >= 90) {
		puts("a");
	}
	else if (n >= 80) {
		puts("b");
	}
	else if (n >= 70) {
		puts("c");
	}
	else if (n >= 60) {
		puts("d");
	}
	else {
		puts("f");
	}
	

	
	



	return 0;
}
*/







/*#include <stdio.h>

int main() {

	int n;
	printf("�����Է� :");
	scanf_s("%d", &n);
	printf("n = %d\n", n);

	if (n > 0)
		printf("����Դϴ�.");
	if (n < 0)
		printf("�����Դϴ�.");
	if (n == 0)
		printf("0�Դϴ�.");
		
	if (n == 0) {
		puts("n��  0�Դϴ�.");
	}
	else {
		if (n < 0) {
			puts("n�� �����Դϴ�.");
		}
		else {
			puts("n�� ����Դϴ�.");
		}
	}

	return 0;
}*/

/*#include<stdio.h>

int main() {

	int n;
	printf("�����Է� :");

	scanf_s("%d", &n);

	printf("n = %d\n", n);

	if (n % 2 == 1)
		printf("Ȧ���Դϴ�.");
	if (n % 2== 0)
		printf("¦���Դϴ�.");

	if (n % 2 == 0) {
		puts("n�� ¦�� �Դϴ�.");
	}
	else {
		puts("n�� Ȧ���Դϴ�.");
	}

	if (n % 2 == 1) { 
		puts("n�� Ȧ�� �Դϴ�.");
	}
	else {//���ǹ��� ����� 0�϶� ����
		puts("n�� ¦���Դϴ�.");
	}
	return 0;
}*/














/*#include<stdio.h>
int main() {

	int num;
	num = 100;
	//���ǹ�
	if (num>10) {
		//���ǹ��� ����� true(1) �����ϴ� ����
		printf("���ǹ��� true(1) �����ϴ¿���!\n");
		printf("�������� ó���� �����մϴ�\n");

	}

	if (0 == num % 2) printf("num�� ¦���Դϴ�. \n");
		// {}������ 1 ���ΰ�쿡�� ���� ����
	



	if (1 == num % 2) {
		printf("num�� �Ǽ��Դϴ�. \n");

	
		if (3) {
			printf("0�� �ƴϸ� true�� �Ǵ��մϴ�.");
		}

	
	puts("���α׷�����!");


	return 0;
}*/