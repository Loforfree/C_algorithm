//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#define max 25
//Tu[max][max] = { 0 };
//int endx, endy, hx, hy,ans=0;
//void dfs(int x, int y)
//{
//	if (x > endx || y > endy||1==Tu[x][y])return;
//	if (x == endx && y == endy) { ans++; return; }
//	dfs(x, y + 1);
//	dfs(x + 1, y);
//}
//int main()
//{
//	scanf("%d%d%d%d", &endx, &endy, &hx, &hy);	
//	endx += 2; endy += 2; hx += 2; hy += 2;
//	Tu[hx][hy] = 1;
//	Tu[hx-1][hy-2] = 1;
//	Tu[hx-2][hy-1] = 1;
//	Tu[hx+1][hy+2] = 1;
//	Tu[hx+2][hy+1] = 1;
//	Tu[hx+1][hy-2] = 1;
//	Tu[hx+2][hy-1] = 1;
//	Tu[hx-2][hy+1] = 1;
//	Tu[hx-1][hy+2] = 1;
//	dfs(2, 2);
//	printf("%d", ans);
//	return 0;
//}