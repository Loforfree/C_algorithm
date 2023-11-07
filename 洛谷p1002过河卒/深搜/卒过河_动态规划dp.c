#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define max 25
int Tu[max][max] = {0};
long long int dp[max][max] = {0};
int endx, endy, hx, hy;
int main()
{
	scanf("%d%d%d%d", &endx, &endy, &hx, &hy);
	endx += 2; endy += 2; hx += 2; hy += 2;
	Tu[hx][hy] = 1;
	Tu[hx-1][hy-2] = 1;
	Tu[hx-2][hy-1] = 1;
	Tu[hx+1][hy+2] = 1;
	Tu[hx+2][hy+1] = 1;
	Tu[hx+1][hy-2] = 1;
	Tu[hx+2][hy-1] = 1;
	Tu[hx-2][hy+1] = 1;
	Tu[hx-1][hy+2] = 1;
	dp[2][2] = 1;
	for (int i = 2; i <= endx; i++)
	{
		for (int j = 2; j <= endy; j++)
		{
			if (1 == Tu[i][j]||(2==i&2==j)) continue;
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
		}
	}
	printf("%lld", dp[endx][endy]);
	return 0;
}