#include<stdio.h>

int main() {
	int A, B, C, i = 0, a, b, c;
	scanf_s("%d %d %d", &A, &B, &C);
	if (A >= 1 && A <= 1000000 && B >= 1 && B <= 1000000 && C >= 1 && C <= 1000000) {
		while (A >= 1 && B >= 1 && C >= 1) {
			a = A % 2;
			b = B % 2;
			c = C % 2;
			//A
			if (A > B && A > C) {
				if (a == 0) {
					A = A / 2;
					
				}
				else {
					A = A - 1;
					A = A / 2;
					
				}
			}
			else if (A == B && A > C) {
				if (a == 0) {
					A = A / 2;
					
				}
				else {
					A = A - 1;
					A = A / 2;
					
				}
			}
			else if (A == C && A > B) {
				if (a == 0) {
					A = A / 2;
					
				}
				else {
					A = A - 1;
					A = A / 2;
					
				}
			}
			//B
			else if (B > A && B > C) {
				if (b == 0) {
					B = B / 2;
					
				}
				else {
					B = B - 1;
					B = B / 2;
					
				}
			}
			else if (B == C && B > A) {
				if (b == 0) {
					B = B / 2;
					
				}
				else {
					B = B - 1;
					B = B / 2;
					
				}
			}
			//C
			else {
				if (c == 0) {
					C = C / 2;
					
				}
				else if (C == 1) {
					break;
				}
				else {
					C = C - 1;
					C = C / 2;
					
				}
			}
			i++;
		}
		printf("%d", i);
	}
	
	return 0;
}