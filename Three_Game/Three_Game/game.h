#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define  ROW 3
#define  COL 3
#include<stdio.h>
#include<windows.h>
#include<time.h>

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);
//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);
//�������
void PlayerMove(char board[ROW][COL], int row, int col);
//��������
void ComputerMove(char board[ROW][COL], int row, int col);
//�ж���Ӯ
char IsWin(char board[ROW][COL], int row, int col);