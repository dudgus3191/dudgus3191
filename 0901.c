//키보드로 부터 정수 1개를 입력받아서 입력받은 수가 홀수인지 짝수인지 판단하는 프로그램을 작성하세요.
#include <stdio.h>

int main() {




	return 0;
}





/*#include <stdio.h>

int main() {
	int n;//로컬변수 (초기화해야 사용 가능)
	do {
		puts("메뉴선택(1,실행 2,종료)");
		scanf_s("%d", &n);
		switch (n) {
		case 1:
			puts("프로그램을 시작합니다.!");
			puts("-----------");
			puts("게임 끝");
			break;
		case 2:
			puts("프로그램 종료!");
			break;
		default:
			puts("잘못눌렀어요..메뉴는 1,2만...");	
		}
	} while (n  != 2);

	return 0;
}*/




/*#include <stdio.h>

int main() {
	//do~while 조건에 상관없이 최소 1번은 실행한다.
	do {
		puts("do ~while문 실행!");
	} while (0);//조건문

	while (0) {
		puts("while문 실행!");
	}

	return 0;
}
*/


/*#include <stdio.h>

int main() {

	for (int j = 1; j <= 9; j++) {
		for (int i = 2; i <= 9; i++) {
			printf("%d*%d=%2d\t", i, j, j * i);
			
		}
		puts("");
	}
	return 0;
}
*/