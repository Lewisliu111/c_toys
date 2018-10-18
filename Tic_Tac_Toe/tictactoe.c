#include <stdio.h>
/*------游戏状态的表示-------*/
typedef struct {
	int board[3][3];            // -1 = empty, 0 = O, 1 = X,   用二维数组存储一个棋盘(board)
	int turn;
}state;   //使用结构体而不是使用全局变量，增强可读性和内聚性

void init(state *s)
{
	int i, j;
	for (j = 0; j < 3; j++ )
		for (i = 0; i < 3; i++)
			s->board[j][i] = -1;
		s->turn = 0;
}


/*------显示游戏状态------*/
void display(const state *s)    //dispaly只读而不改变游戏状态，所以参数类型为”““”
{
	int i, j;
	for (j = 0; j < 3; j++) {
		for (i = 0; i < 3; i++) {
		switch(s->board[j][i]) {
		case -1: printf(" %d ", j * 3 + i + 1);
			 break;
		case 0: printf(" O ");
			break;
		case 1: printf(" X ");
			break;
		default:
			break;
		}
		if (i < 2)
			printf("|");
		else 
			printf("\n");
		}
		if (j < 2)
			printf("---+---+---\n");
		else 
			printf("\n");
	}



}
/******实现下棋*****/
/*
 *return value:如果该位置有棋子返回0：表示失败;如果该位置没有棋子则返回1：表示成功
 *function:
 * 
 *
 */

int move(state *s, int i, int j)
{
	if (s->board[j][i] != -1) {
		return 0;
	else
	       s->board[j][i] = s->turn++ % 2;
			return 1;	
	}
}

/******处理输入*****/

void human(state *s)
{
	char c;
	do {
		printf("%c: ", "OX"[s->turn % 2 ]);
		c = getchar();
		while (getchar != )
	
	
	
	
	
	
	};
  	








}

int main(void) 
{
	state s;
	init(&s);
	display(&s);





}
