#include <stdio.h>

int main()
{
	int cost;
	int sudan;

	printf("=== 네이버페이 결제 계산 프로그램 ===\n주문액을 입력하세요:");
	scanf("%d", &cost);

	printf("===결제 수단 목록===\na)NPay머니 네이버 통장 충전결제 b)NPay머니 일반 충전결제 c)계좌 간편결제");
	printf("\nd)네이버 현대카드 간편결제 e)청구할인 삼성카드결제 f)일반 카드결제");
	printf("\n결제 수단을 입력하세요: ");
	scanf("%d", &sudan);
	if (sudan != 'a' )
		printf("잘못 입력하셨습니다. 재입력 바랍니다.");
		scanf("%d", &sudan);





	return 0;
}