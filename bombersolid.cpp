#include<iostream>
#include<conio.h>
using namespace std;

struct brick{
	string data;
	brick* up;
	brick* down;
	brick* right;
	brick* left;
};



class bomber{
	private:
		int key = 0;
		brick* face;
		//brick* org11;
		string f = ":)";
		brick* axis[10][10];
		string d = "MM";
		string s = "  ";
		string w = "||";
	public:
		bomber(){
			
			axis[0][0]=new brick;	axis[1][0]=new brick;	axis[2][0]=new brick;	axis[3][0]=new brick;	axis[4][0]=new brick;	axis[5][0]=new brick;	axis[6][0]=new brick;	axis[7][0]=new brick;	axis[8][0]=new brick;	axis[9][0]=new brick;
			axis[0][1]=new brick;	axis[1][1]=new brick;	axis[2][1]=new brick;	axis[3][1]=new brick;	axis[4][1]=new brick;	axis[5][1]=new brick;	axis[6][1]=new brick;	axis[7][1]=new brick;	axis[8][1]=new brick;	axis[9][1]=new brick;
			axis[0][2]=new brick;	axis[1][2]=new brick;	axis[2][2]=new brick;	axis[3][2]=new brick;	axis[4][2]=new brick;	axis[5][2]=new brick;	axis[6][2]=new brick;	axis[7][2]=new brick;	axis[8][2]=new brick;	axis[9][2]=new brick;
			axis[0][3]=new brick;	axis[1][3]=new brick;	axis[2][3]=new brick;	axis[3][3]=new brick;	axis[4][3]=new brick;	axis[5][3]=new brick;	axis[6][3]=new brick;	axis[7][3]=new brick;	axis[8][3]=new brick;	axis[9][3]=new brick;
			axis[0][4]=new brick;	axis[1][4]=new brick;	axis[2][4]=new brick;	axis[3][4]=new brick;	axis[4][4]=new brick;	axis[5][4]=new brick;	axis[6][4]=new brick;	axis[7][4]=new brick;	axis[8][4]=new brick;	axis[9][4]=new brick;
			axis[0][5]=new brick;	axis[1][5]=new brick;	axis[2][5]=new brick;	axis[3][5]=new brick;	axis[4][5]=new brick;	axis[5][5]=new brick;	axis[6][5]=new brick;	axis[7][5]=new brick;	axis[8][5]=new brick;	axis[9][5]=new brick;
			axis[0][6]=new brick;	axis[1][6]=new brick;	axis[2][6]=new brick;	axis[3][6]=new brick;	axis[4][6]=new brick;	axis[5][6]=new brick;	axis[6][6]=new brick;	axis[7][6]=new brick;	axis[8][6]=new brick;	axis[9][6]=new brick;
			axis[0][7]=new brick;	axis[1][7]=new brick;	axis[2][7]=new brick;	axis[3][7]=new brick;	axis[4][7]=new brick;	axis[5][7]=new brick;	axis[6][7]=new brick;	axis[7][7]=new brick;	axis[8][7]=new brick;	axis[9][7]=new brick;
			axis[0][8]=new brick;	axis[1][8]=new brick;	axis[2][8]=new brick;	axis[3][8]=new brick;	axis[4][8]=new brick;	axis[5][8]=new brick;	axis[6][8]=new brick;	axis[7][8]=new brick;	axis[8][8]=new brick;	axis[9][8]=new brick;
			axis[0][9]=new brick;	axis[1][9]=new brick;	axis[2][9]=new brick;	axis[3][9]=new brick;	axis[4][9]=new brick;	axis[5][9]=new brick;	axis[6][9]=new brick;	axis[7][9]=new brick;	axis[8][9]=new brick;	axis[9][9]=new brick;
			
			
			
			
			// 1st row
			
			axis[0][0]->right = NULL;			axis[0][0]->down = axis[1][0];	axis[0][0]->left = NULL;			axis[0][1]->up = NULL;
			axis[0][1]->right = axis[0][2];		axis[0][1]->down = axis[1][1];	axis[0][1]->left = axis[0][0];		axis[0][1]->up = NULL;
			axis[0][2]->right = axis[0][3];		axis[0][2]->down = axis[1][2];	axis[0][2]->left = NULL;			axis[0][2]->up = NULL;
			axis[0][3]->right = axis[0][4];		axis[0][3]->down = NULL;		axis[0][3]->left = axis[0][2];		axis[0][3]->up = NULL;
			axis[0][4]->right = axis[0][5];		axis[0][4]->down = axis[1][4];	axis[0][4]->left = axis[0][3];		axis[0][4]->up = NULL;
			axis[0][5]->right = axis[0][6];		axis[0][5]->down = axis[1][5];	axis[0][5]->left = axis[0][4];		axis[0][5]->up = NULL;
			axis[0][6]->right = axis[0][7];		axis[0][6]->down = axis[1][6];	axis[0][6]->left = axis[0][5];		axis[0][6]->up = NULL;
			axis[0][7]->right = axis[0][8];		axis[0][7]->down = axis[1][7];	axis[0][7]->left = axis[0][6];		axis[0][7]->up = NULL;
			axis[0][8]->right = axis[0][9];		axis[0][8]->down = axis[1][8];	axis[0][8]->left = axis[0][7];		axis[0][8]->up = NULL;
			axis[0][9]->right = NULL;			axis[0][9]->down = axis[1][9];	axis[0][9]->left = axis[0][8];		axis[0][9]->up = NULL;
												
			// 2nd row
			
			axis[1][0]->right = axis[1][1]; 	axis[1][0]->down = NULL;		axis[1][0]->left = NULL;			axis[1][0]->up = axis[0][0];
			axis[1][1]->right = axis[1][2];		axis[1][1]->down = axis[2][1];	axis[1][1]->left = axis[1][0];		axis[1][1]->up =NULL;
			axis[1][2]->right = NULL;			axis[1][2]->down = axis[2][2];	axis[1][2]->left = axis[1][1];		axis[1][2]->up = axis[0][2];
			axis[1][3]->right = axis[1][4];		axis[1][3]->down = axis[2][3];	axis[1][3]->left = axis[1][2];		axis[1][3]->up = axis[0][3];
			axis[1][4]->right = axis[1][5];		axis[1][4]->down = axis[2][4];	axis[1][4]->left = NULL;			axis[1][4]->up = axis[0][4];
			axis[1][5]->right = axis[1][6];		axis[1][5]->down = axis[2][5];	axis[1][5]->left = axis[1][4];		axis[1][5]->up = axis[0][5];
			axis[1][6]->right = axis[1][7];		axis[1][6]->down = NULL;		axis[1][6]->left = axis[1][5];		axis[1][6]->up = axis[0][6];
			axis[1][7]->right = axis[1][8];		axis[1][7]->down = axis[2][7];	axis[1][7]->left = axis[1][6];		axis[1][7]->up = axis[0][7];
			axis[1][8]->right = axis[1][9];		axis[1][8]->down = axis[2][8];	axis[1][8]->left = axis[1][7];		axis[1][8]->up = axis[0][8];
			axis[1][9]->right = NULL;			axis[1][9]->down = axis[2][9];	axis[1][9]->left = axis[1][8];		axis[1][9]->up = axis[0][9];
														
			// 3rd row
			
			axis[2][0]->right = axis[2][1]; 	axis[2][0]->down = axis[3][0];	axis[2][0]->left = NULL;			axis[2][0]->up = axis[1][0];
			axis[2][1]->right = axis[2][2];		axis[2][1]->down = axis[3][1];	axis[2][1]->left = NULL;		axis[2][1]->up = axis[1][1];
			axis[2][2]->right = axis[2][3];		axis[2][2]->down = axis[3][2];	axis[2][2]->left = axis[2][1];		axis[2][2]->up = axis[1][2];
			axis[2][3]->right = axis[2][4];		axis[2][3]->down = axis[3][3];	axis[2][3]->left = axis[2][2];		axis[2][3]->up = NULL;
			axis[2][4]->right = axis[2][5];		axis[2][4]->down = NULL;		axis[2][4]->left = axis[2][3];		axis[2][4]->up = axis[1][4];
			axis[2][5]->right = NULL;			axis[2][5]->down = axis[3][5];	axis[2][5]->left = axis[2][4];		axis[2][5]->up = axis[1][5];
			axis[2][6]->right = axis[2][7];		axis[2][6]->down = axis[3][6];	axis[2][6]->left = axis[2][5];		axis[2][6]->up = axis[1][6];
			axis[2][7]->right = axis[2][8];		axis[2][7]->down = axis[3][7];	axis[2][7]->left = NULL;			axis[2][7]->up = axis[1][7];
			axis[2][8]->right = axis[2][9];		axis[2][8]->down = axis[3][8];	axis[2][8]->left = axis[2][7];		axis[2][8]->up = axis[1][8];
			axis[2][9]->right = NULL;			axis[2][9]->down = axis[3][9];	axis[2][9]->left = axis[2][8];		axis[2][9]->up = axis[1][9];									
			
			// 4th row 
												
			axis[3][0]->right = axis[3][1]; 	axis[3][0]->down = axis[4][0];	axis[3][0]->left = NULL;			axis[3][0]->up = NULL;
			axis[3][1]->right = axis[3][2];		axis[3][1]->down = axis[4][1];	axis[3][1]->left = axis[3][0];		axis[3][1]->up = axis[2][1];
			axis[3][2]->right = axis[3][3];		axis[3][2]->down = axis[4][2];	axis[3][2]->left = axis[3][1];		axis[3][2]->up = axis[2][2];
			axis[3][3]->right = NULL;		axis[3][3]->down = axis[4][3];	axis[3][3]->left = axis[3][2];		axis[3][3]->up = axis[2][3];
			axis[3][4]->right = axis[3][5];		axis[3][4]->down = axis[4][4];	axis[3][4]->left = axis[3][3];		axis[3][4]->up = axis[2][4];
			axis[3][5]->right = axis[3][6];		axis[3][5]->down = NULL;		axis[3][5]->left = NULL;		axis[3][5]->up = axis[2][5];
			axis[3][6]->right = axis[3][7];		axis[3][6]->down = axis[4][6];	axis[3][6]->left = axis[3][5];		axis[3][6]->up = NULL;
			axis[3][7]->right = axis[3][8];		axis[3][7]->down = axis[4][7];	axis[3][7]->left = axis[3][6];		axis[3][7]->up = axis[2][7];
			axis[3][8]->right = axis[3][9];		axis[3][8]->down = axis[4][8];	axis[3][8]->left = axis[3][7];		axis[3][8]->up = axis[2][8];
			axis[3][9]->right = NULL;			axis[3][9]->down = axis[4][9];	axis[3][9]->left = axis[3][8];		axis[3][9]->up = axis[2][9];									
			
			
			// 5th row
			
												
			axis[4][0]->right = axis[4][1]; 	axis[4][0]->down = axis[5][0];	axis[4][0]->left = NULL;			axis[4][0]->up = axis[3][0];
			axis[4][1]->right = axis[4][2];		axis[4][1]->down = axis[5][1];	axis[4][1]->left = axis[4][0];		axis[4][1]->up = axis[3][1];
			axis[4][2]->right = axis[4][3];		axis[4][2]->down = NULL;		axis[4][2]->left = axis[4][1];		axis[4][2]->up = axis[3][2];
			axis[4][3]->right = axis[4][4];		axis[4][3]->down = axis[5][3];	axis[4][3]->left = axis[4][2];		axis[4][3]->up = axis[3][3];
			axis[4][4]->right = NULL;			axis[4][4]->down = axis[5][4];	axis[4][4]->left = axis[4][3];		axis[4][4]->up = NULL;
			axis[4][5]->right = axis[4][6];		axis[4][5]->down = axis[5][5];	axis[4][5]->left = axis[4][4];		axis[4][5]->up = axis[3][5];
			axis[4][6]->right = axis[4][7];		axis[4][6]->down = NULL;		axis[4][6]->left = NULL;			axis[4][6]->up = axis[3][6];
			axis[4][7]->right = axis[4][8];		axis[4][7]->down = axis[5][7];	axis[4][7]->left = axis[4][6];		axis[4][7]->up = axis[3][7];
			axis[4][8]->right = axis[4][9];		axis[4][8]->down = axis[5][8];	axis[4][8]->left = axis[4][7];		axis[4][8]->up = axis[3][8];
			axis[4][9]->right = NULL;			axis[4][9]->down = axis[5][9];	axis[4][9]->left = axis[4][8];		axis[4][9]->up = axis[3][9];									
			
			// 6th row
			
			axis[5][0]->right = axis[5][1]; 	axis[5][0]->down = axis[6][0];	axis[5][0]->left = NULL;			axis[5][0]->up = axis[4][0];
			axis[5][1]->right = NULL;			axis[5][1]->down = axis[6][1];	axis[5][1]->left = axis[5][0];		axis[5][1]->up = axis[4][1];
			axis[5][2]->right = axis[5][3];		axis[5][2]->down = axis[6][2];	axis[5][2]->left = axis[5][1];		axis[5][2]->up = axis[4][2];
			axis[5][3]->right = axis[5][4];		axis[5][3]->down = axis[6][3];	axis[5][3]->left = NULL;			axis[5][3]->up = axis[4][3];
			axis[5][4]->right = axis[5][5];		axis[5][4]->down = axis[6][4];	axis[5][4]->left = axis[5][3];		axis[5][4]->up = axis[4][4];
			axis[5][5]->right = NULL;			axis[5][5]->down = axis[6][5];	axis[5][5]->left = axis[5][4];		axis[5][5]->up = NULL;
			axis[5][6]->right = axis[5][7];		axis[5][6]->down = axis[6][6];	axis[5][6]->left = axis[5][5];		axis[5][6]->up = axis[4][6];
			axis[5][7]->right = axis[5][8];		axis[5][7]->down = axis[6][7];	axis[5][7]->left = NULL;			axis[5][7]->up = axis[4][7];
			axis[5][8]->right = axis[5][9];		axis[5][8]->down = axis[6][8];	axis[5][8]->left = axis[5][7];		axis[5][8]->up = axis[4][8];
			axis[5][9]->right = NULL;			axis[5][9]->down = axis[6][9];	axis[5][9]->left = axis[5][8];		axis[5][9]->up = axis[4][9];
												
			// 7th row
			
			axis[6][0]->right = axis[6][1]; 	axis[6][0]->down = axis[7][0];	axis[6][0]->left = NULL;			axis[6][0]->up = axis[5][0];
			axis[6][1]->right = axis[6][2];		axis[6][1]->down = axis[7][1];	axis[6][1]->left = axis[6][0];		axis[6][1]->up = axis[5][1];
			axis[6][2]->right = axis[6][3];		axis[6][2]->down = axis[7][2];	axis[6][2]->left = axis[6][1];		axis[6][2]->up = NULL;
			axis[6][3]->right = axis[6][4];		axis[6][3]->down = axis[7][3];	axis[6][3]->left = axis[6][2];		axis[6][3]->up = axis[5][3];
			axis[6][4]->right = axis[6][5];		axis[6][4]->down = NULL;		axis[6][4]->left = axis[6][3];		axis[6][4]->up = axis[5][4];
			axis[6][5]->right = axis[6][6];		axis[6][5]->down = axis[7][5];	axis[6][5]->left = axis[6][4];		axis[6][5]->up = axis[5][5];
			axis[6][6]->right = axis[6][7];		axis[6][6]->down = axis[7][6];	axis[6][6]->left = axis[6][5];		axis[6][6]->up = NULL;
			axis[6][7]->right = axis[6][8];		axis[6][7]->down = axis[7][7];	axis[6][7]->left = axis[6][6];		axis[6][7]->up = axis[5][7];
			axis[6][8]->right = axis[6][9];		axis[6][8]->down = NULL;		axis[6][8]->left = axis[6][7];		axis[6][8]->up = axis[5][8];
			axis[6][9]->right = NULL;			axis[6][9]->down = axis[7][9];	axis[6][9]->left = axis[6][8];		axis[6][9]->up = axis[5][9];
											
			
			// 8th row
			
			axis[7][0]->right = axis[7][1]; 	axis[7][0]->down = axis[8][0];	axis[7][0]->left = NULL;			axis[7][0]->up = axis[6][0];
			axis[7][1]->right = axis[7][2];		axis[7][1]->down = axis[8][1];	axis[7][1]->left = axis[7][0];		axis[7][1]->up = axis[6][1];
			axis[7][2]->right = axis[7][3];		axis[7][2]->down = axis[8][2];	axis[7][2]->left = axis[7][1];		axis[7][2]->up = axis[6][2];
			axis[7][3]->right = NULL;			axis[7][3]->down = axis[8][3];	axis[7][3]->left = axis[7][2];		axis[7][3]->up = axis[6][3];
			axis[7][4]->right = axis[7][5];		axis[7][4]->down = axis[8][4];	axis[7][4]->left = axis[7][3];		axis[7][4]->up = axis[6][4];
			axis[7][5]->right = axis[7][6];		axis[7][5]->down = axis[8][5];	axis[7][5]->left = NULL;			axis[7][5]->up = axis[6][5];
			axis[7][6]->right = axis[7][7];		axis[7][6]->down = axis[8][6];	axis[7][6]->left = axis[7][5];		axis[7][6]->up = axis[6][6];
			axis[7][7]->right = NULL;			axis[7][7]->down = axis[8][7];	axis[7][7]->left = axis[7][6];		axis[7][7]->up = axis[6][7];
			axis[7][8]->right = axis[7][9];		axis[7][8]->down = axis[8][8];	axis[7][8]->left = axis[7][7];		axis[7][8]->up = axis[6][8];
			axis[7][9]->right = NULL;			axis[7][9]->down = axis[8][9];	axis[7][9]->left = NULL;			axis[7][9]->up = axis[6][9];
											
			// 9th row
			
			axis[8][0]->right = axis[8][1]; 	axis[8][0]->down = axis[9][0];	axis[8][0]->left = NULL;			axis[8][0]->up = axis[7][0];
			axis[8][1]->right = axis[8][2];		axis[8][1]->down = axis[9][1];	axis[8][1]->left = axis[8][0];		axis[8][1]->up = axis[7][1];
			axis[8][2]->right = axis[8][3];		axis[8][2]->down = axis[9][2];	axis[8][2]->left = axis[8][1];		axis[8][2]->up = axis[7][2];
			axis[8][3]->right = axis[8][4];		axis[8][3]->down = axis[9][3];	axis[8][3]->left = axis[8][2];		axis[8][3]->up = axis[7][3];
			axis[8][4]->right = axis[8][5];		axis[8][4]->down = axis[9][4];	axis[8][4]->left = axis[8][3];		axis[8][4]->up = NULL;
			axis[8][5]->right = axis[8][6];		axis[8][5]->down = axis[9][5];	axis[8][5]->left = axis[8][4];		axis[8][5]->up = axis[7][5];
			axis[8][6]->right = axis[8][7];		axis[8][6]->down = axis[9][6];	axis[8][6]->left = axis[8][5];		axis[8][6]->up = axis[7][6];
			axis[8][7]->right = axis[8][8];		axis[8][7]->down = axis[9][7];	axis[8][7]->left = axis[8][6];		axis[8][7]->up = axis[7][7];
			axis[8][8]->right = axis[8][9];		axis[8][8]->down = axis[9][8];	axis[8][8]->left = axis[8][7];		axis[8][8]->up = NULL;
			axis[8][9]->right = NULL;			axis[8][9]->down = axis[9][9];	axis[8][9]->left = axis[8][8];		axis[8][9]->up = axis[7][9];
			
			// 10th row
			
			axis[9][0]->right = axis[9][1]; 	axis[9][0]->down = NULL;	axis[9][0]->left = NULL;			axis[9][0]->up = axis[8][0];
			axis[9][1]->right = axis[9][2];		axis[9][1]->down = NULL;	axis[9][1]->left = axis[9][0];		axis[9][1]->up = axis[8][1];
			axis[9][2]->right = axis[9][3];		axis[9][2]->down = NULL;	axis[9][2]->left = axis[9][1];		axis[9][2]->up = axis[8][2];
			axis[9][3]->right = axis[9][4];		axis[9][3]->down = NULL;	axis[9][3]->left = axis[9][2];		axis[9][3]->up = axis[8][3];
			axis[9][4]->right = axis[9][5];		axis[9][4]->down = NULL;	axis[9][4]->left = axis[9][3];		axis[9][4]->up = axis[8][4];
			axis[9][5]->right = axis[9][6];		axis[9][5]->down = NULL;	axis[9][5]->left = axis[9][4];		axis[9][5]->up = axis[8][5];
			axis[9][6]->right = axis[9][7];		axis[9][6]->down = NULL;	axis[9][6]->left = axis[9][5];		axis[9][6]->up = axis[8][6];
			axis[9][7]->right = axis[9][8];		axis[9][7]->down = NULL;	axis[9][7]->left = axis[9][6];		axis[9][7]->up = axis[8][7];
			axis[9][8]->right = axis[9][9];		axis[9][8]->down = NULL;	axis[9][8]->left = axis[9][7];		axis[9][8]->up = axis[8][8];
			axis[9][9]->right = NULL;			axis[9][9]->down = NULL;	axis[9][9]->left = axis[9][8];		axis[9][9]->up = axis[8][9];
			
			axis[0][0]->data=w;axis[1][0]->data=d;axis[2][0]->data=d;axis[3][0]->data=d;axis[4][0]->data=w;axis[5][0]->data=w;axis[6][0]->data=w;axis[7][0]->data=w;axis[8][0]->data=d;axis[9][0]->data=d;
			axis[0][1]->data=w;axis[1][1]->data=d;axis[2][1]->data=d;axis[3][1]->data=d;axis[4][1]->data=d;axis[5][1]->data=d;axis[6][1]->data=d;axis[7][1]->data=d;axis[8][1]->data=d;axis[9][1]->data=w;
			axis[0][2]->data=d;axis[1][2]->data=w;axis[2][2]->data=w;axis[3][2]->data=w;axis[4][2]->data=d;axis[5][2]->data=w;axis[6][2]->data=d;axis[7][2]->data=d;axis[8][2]->data=w;axis[9][2]->data=w;
			axis[0][3]->data=d;axis[1][3]->data=d;axis[2][3]->data=w;axis[3][3]->data=d;axis[4][3]->data=w;axis[5][3]->data=d;axis[6][3]->data=d;axis[7][3]->data=d;axis[8][3]->data=d;axis[9][3]->data=d;
			axis[0][4]->data=s;axis[1][4]->data=d;axis[2][4]->data=w;axis[3][4]->data=d;axis[4][4]->data=w;axis[5][4]->data=d;axis[6][4]->data=w;axis[7][4]->data=w;axis[8][4]->data=d;axis[9][4]->data=d;
			axis[0][5]->data=s;axis[1][5]->data=d;axis[2][5]->data=d;axis[3][5]->data=d;axis[4][5]->data=d;axis[5][5]->data=d;axis[6][5]->data=d;axis[7][5]->data=w;axis[8][5]->data=w;axis[9][5]->data=w;
			axis[0][6]->data=s;axis[1][6]->data=d;axis[2][6]->data=d;axis[3][6]->data=d;axis[4][6]->data=d;axis[5][6]->data=w;axis[6][6]->data=d;axis[7][6]->data=w;axis[8][6]->data=d;axis[9][6]->data=d;
			axis[0][7]->data=d;axis[1][7]->data=w;axis[2][7]->data=d;axis[3][7]->data=w;axis[4][7]->data=d;axis[5][7]->data=w;axis[6][7]->data=d;axis[7][7]->data=d;axis[8][7]->data=d;axis[9][7]->data=d;
			axis[0][8]->data=d;axis[1][8]->data=w;axis[2][8]->data=w;axis[3][8]->data=d;axis[4][8]->data=w;axis[5][8]->data=d;axis[6][8]->data=w;axis[7][8]->data=w;axis[8][8]->data=w;axis[9][8]->data=w;
			axis[0][9]->data=d;axis[1][9]->data=d;axis[2][9]->data=d;axis[3][9]->data=d;axis[4][9]->data=d;axis[5][9]->data=d;axis[6][9]->data=d;axis[7][9]->data=d;axis[8][9]->data=d;axis[9][9]->data=w;
			//cout<<"const";
			/*
			axis[0][1]->data="||";axis[4][5]->data="||";axis[5][6]->data="||";axis[7][8]->data="||";axis[3][4]->data="||";
			axis[1][3]->data="||";axis[2][6]->data="||";axis[5][2]->data="||";axis[7][4]->data="||";axis[2][0]->data="||";
			*/
			for(int i=0;i<9;i++){
				for(int j=0;j<9;j++){
					cout<<axis[i][j]->data;
				}
				cout<<endl;
			}
			char k='a';
			face = new brick;
			face = axis[0][4];
			face->data = f;
			while(k!='p'){
				system("cls");
				for(int i=0;i<10;i++){
					for(int j=0;j<10;j++){
						cout<<axis[i][j]->data;
					}
					cout<<endl;
				}
				cout<<endl<<endl<<endl;
				//cout<<face->data;
				k=getche();
				if(k=='a'&&face->left!=NULL&&face->left->data!="MM"){
					face->data=s;
					face=face->left;
					face->data = f;
				}
				else if(k=='d'&&face->right!=NULL&&face->right->data!="MM"){
					face->data=s;
					face=face->right;
					face->data = f;
				}
				else if(k=='w'&&face->up!=NULL&&face->up->data!="MM"){
					face->data=s;
					face=face->up;
					face->data = f;
				}
				else if(k=='s'&&face->down!=NULL&&face->down->data!="MM"){
					face->data=s;
					face=face->down;
					face->data = f;
				}
			}									
		}
};










int main(){
	bomber game;
	return 0;
}