//��Ϸ������������������������Ŷ��壩

#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 4
#define COL 4

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char board[ROW][COL], int row, int col);

//��������
//�ҿհ�λ�������
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж���Ӯ
// 
//���Ӯ---'*'
//����Ӯ---'#'
//ƽ��---'Q'
//����----'C'
//
char Judge(char board[ROW][COL], int row, int col);

