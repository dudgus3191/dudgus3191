#include<stdio.h>
int main() {
	for (int i = 2; i <= 9; ++i)
		



	return 0;
}

/*#include<stdio.h>
int main() {
	//정수하나를 키보드로 입력받아 카운트다운 출력하기..0까지
	int n ;
	puts("카운트다운");
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
//	puts("단 입력(2~9)!");
	//scanf_s("%d", &dan);

	for (int dan = 2; dan <= 9; dan++) {
		printf("--%d단--\n", dan);
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
			continue;// 아래실행하지 않고 증감으로 이동
		}
			printf("%d\n", i );
		
	}

	return 0;
}
*/


/*#include<stdio.h>
int main() {

	//for(초기값;조건문;증감문) {}
	//for(;;){//무한루프
	//	printf("for반복");}
	//for (int i = 1; 최초시작할때 1번만실행된다
	// i <= 10; 
	// i++) { //
	//	printf("%d\n", i); 실ㅎ
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
	//1~n :수 중에서 짝수의 합을 출력하세요.

	while (m <= n) {
		if (m % 2 == 0) {
			sum = sum + m;
			} ++m;
			
		}
	
	printf("짝수의 합 : %d\n", sum);


	return 0;
}
*/

/*#include<stdio.h>
int main() {
	int i,  j= 1;
	scanf_s("%d", & i);
	//1~i 홀수만 출력하세요

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

	//키보드에서 정수 하나 입력받고 ... 10,9,8,7,6,5,4,3,2,1,

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
			break; //반복문 탈출
		}
		printf("%c", ch);
		
	}

	return 0;
}*/




/*#include<stdio.h>
int main() {
	int index = 1; //초기값

	while 
		(index<=5) { //조건문
		printf("%d\n", index);
		index++;//증감문
		//1증가 index = index+1; index +=1
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
	puts("숫자입력(1~3)");
	scanf_s("%d", &n);
	//1이면 가위,2바위,3보
	switch (n) {
	case1:
		puts("가위"); break;
	case2:
		puts("바위"); break;
	case3:
		puts("보"); break;
	}
}
*/



/*#include<stdio.h>
//두 정수 키보드로 입력바당 큰수를 출력하세요.
int main() {
	int x, y;
	puts("두 정수를 입력하세요.");
	scanf_s("%d,%d", &x, &y);
	printf("x=%d\ty=%d\n", x, y);

	//printf("둘중에 큰수는? %d\n", x > y ? x : y);
	if (x > y) {
		printf("둘중에 큰수는? %d\n", x);
	}
	else {
		printf("둘중에 큰수는? %d\n", y);
	}


	return 0;
}
*/



/*#include<stdio.h>

int main() {
	//삼함연산자
	//조건?true:false
	
	int n = 9;

	printf("%s\n",(n%2==0)? "짝수입니다.":"홀수입니다.");
	
	int r = n % 2 == 0 ? 100 : 999;
	return 0;
}*/








/*#include<stdio.h>
#define 구십이상 9
int main() {
	int n =50;
	
	switch (n/10) {
	case 10:
	case 구십이상:
		printf("a");
		break;//{}탈출
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
	printf("숫자입력 :");
	scanf_s("%d", &n);
	printf("n = %d\n", n);

	//점수가 90점 이상 a학점 출력
	//점수가 80점 이상 b학점 출력
	//점수가 70점 이상 c학점 출력
	//점수가 60점 이상 d학점 출력
	//점수가 60점 미만 f학점 출력

	if (n >= 90) {
		puts("a학점");
	}
	else {
		if (n >= 80) {
			puts("b학점");
		}
		else {
			if (n >= 70) {
				puts("c학점");
			}
			else {
				if (n >= 60) {
					puts("d학점");
				}
				else {
					puts("f학점");
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
	printf("숫자입력 :");
	scanf_s("%d", &n);
	printf("n = %d\n", n);

	if (n > 0)
		printf("양수입니다.");
	if (n < 0)
		printf("음수입니다.");
	if (n == 0)
		printf("0입니다.");
		
	if (n == 0) {
		puts("n은  0입니다.");
	}
	else {
		if (n < 0) {
			puts("n은 음수입니다.");
		}
		else {
			puts("n은 양수입니다.");
		}
	}

	return 0;
}*/

/*#include<stdio.h>

int main() {

	int n;
	printf("숫자입력 :");

	scanf_s("%d", &n);

	printf("n = %d\n", n);

	if (n % 2 == 1)
		printf("홀수입니다.");
	if (n % 2== 0)
		printf("짝수입니다.");

	if (n % 2 == 0) {
		puts("n은 짝수 입니다.");
	}
	else {
		puts("n은 홀수입니다.");
	}

	if (n % 2 == 1) { 
		puts("n은 홀수 입니다.");
	}
	else {//조건문의 결과가 0일때 실행
		puts("n은 짝수입니다.");
	}
	return 0;
}*/














/*#include<stdio.h>
int main() {

	int num;
	num = 100;
	//조건문
	if (num>10) {
		//조건문의 결과가 true(1) 실행하는 영역
		printf("조건문이 true(1) 실행하는영역!\n");
		printf("여러문장 처리가 가능합니다\n");

	}

	if (0 == num % 2) printf("num은 짝수입니다. \n");
		// {}내용이 1 줄인경우에는 생략 가능
	



	if (1 == num % 2) {
		printf("num은 훌수입니다. \n");

	
		if (3) {
			printf("0이 아니면 true로 판단합니다.");
		}

	
	puts("프로그램종료!");


	return 0;
}*/