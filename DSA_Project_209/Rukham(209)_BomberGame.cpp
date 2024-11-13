#include<iostream>
#include<conio.h>
using namespace std;

struct node{
	string data;
	node* up;
	node* down;
	node* right;
	node* left;
};


int main()
{
	int key=0;
	int moves=50;
    node* face;
	string f = ":)";
    node* place[10][10];
	string data = "MM";
	string keyy = "&&";
    string sp = "  ";
    string wall = "||";
    node* bomb;
    string b = "**";



   place[0][0]=new node;     place[1][0]=new node;     place[2][0]=new node;     place[3][0]=new node;     place[4][0]=new node;     place[5][0]=new node;    place[6][0]=new node;    place[7][0]=new node;    place[8][0]=new node;    place[9][0]=new node;
   place[0][1]=new node;     place[1][1]=new node;     place[2][1]=new node;     place[3][1]=new node;     place[4][1]=new node;     place[5][1]=new node;    place[6][1]=new node;    place[7][1]=new node;    place[8][1]=new node;    place[9][1]=new node; 
   place[0][2]=new node;     place[1][2]=new node;     place[2][2]=new node;     place[3][2]=new node;     place[4][2]=new node;     place[5][2]=new node;    place[6][2]=new node;    place[7][2]=new node;    place[8][2]=new node;    place[9][2]=new node;
   place[0][3]=new node;     place[1][3]=new node;     place[2][3]=new node;     place[3][3]=new node;     place[4][3]=new node;     place[5][3]=new node;    place[6][3]=new node;    place[7][3]=new node;    place[8][3]=new node;    place[9][3]=new node;
   place[0][4]=new node;     place[1][4]=new node;     place[2][4]=new node;     place[3][4]=new node;     place[4][4]=new node;     place[5][4]=new node;    place[6][4]=new node;    place[7][4]=new node;    place[8][4]=new node;    place[9][4]=new node;
   place[0][5]=new node;     place[1][5]=new node;     place[2][5]=new node;     place[3][5]=new node;     place[4][5]=new node;     place[5][5]=new node;    place[6][5]=new node;    place[7][5]=new node;    place[8][5]=new node;    place[9][5]=new node;
   place[0][6]=new node;     place[1][6]=new node;     place[2][6]=new node;     place[3][6]=new node;     place[4][6]=new node;     place[5][6]=new node;    place[6][6]=new node;    place[7][6]=new node;    place[8][6]=new node;    place[9][6]=new node;
   place[0][7]=new node;     place[1][7]=new node;     place[2][7]=new node;     place[3][7]=new node;     place[4][7]=new node;     place[5][7]=new node;    place[6][7]=new node;    place[7][7]=new node;    place[8][7]=new node;    place[9][7]=new node;
   place[0][8]=new node;     place[1][8]=new node;     place[2][8]=new node;     place[3][8]=new node;     place[4][8]=new node;     place[5][8]=new node;    place[6][8]=new node;    place[7][8]=new node;    place[8][8]=new node;    place[9][8]=new node;
   place[0][9]=new node;     place[1][9]=new node;     place[2][9]=new node;     place[3][9]=new node;     place[4][9]=new node;     place[5][9]=new node;    place[6][9]=new node;    place[7][9]=new node;    place[8][9]=new node;    place[9][9]=new node; 
   
   
   
   
   
  	place[0][0]->right = place[0][1];		 place[0][0]->down = place[1][0];										    	place[0][1]->up = NULL;
    place[0][1]->right = place[0][2];		 place[0][1]->down = place[1][1];	  place[0][1]->left = place[0][0];	    	place[0][1]->up = NULL;
	place[0][2]->right = place[0][3];		 place[0][2]->down = place[1][2];	  place[0][2]->left = place[0][1];	    	place[0][2]->up = NULL;
	place[0][3]->right = place[0][4];		 place[0][3]->down = place[1][3];	  place[0][3]->left = place[0][2];		    place[0][3]->up = NULL;
	place[0][4]->right = place[0][5];		 place[0][4]->down = place[1][4];	  place[0][4]->left = place[0][3];		    place[0][4]->up = NULL;
	place[0][5]->right = place[0][6];		 place[0][5]->down = place[1][5];	  place[0][5]->left = place[0][4];		    place[0][5]->up = NULL;
	place[0][6]->right = place[0][7];		 place[0][6]->down = place[1][6];	  place[0][6]->left = place[0][5];		    place[0][6]->up = NULL;
	place[0][7]->right = place[0][8];		 place[0][7]->down = place[1][7];	  place[0][7]->left = place[0][6];		    place[0][7]->up = NULL;
	place[0][8]->right = place[0][9];		 place[0][8]->down = place[1][8];	  place[0][8]->left = place[0][7];		    place[0][8]->up = NULL;
											 place[0][9]->down = place[1][9];	  place[0][9]->left = place[0][8];		    place[0][9]->up = NULL;
											 
											 
											 
											 
	
	place[1][0]->right = place[1][1]; 		place[1][0]->down = place[2][0];											place[1][0]->up = place[0][0];
	place[1][1]->right = place[1][2];		place[1][1]->down = place[2][1];	place[1][1]->left = place[1][0];		place[1][1]->up = place[0][1];
	place[1][2]->right = place[1][3];		place[1][2]->down = place[2][2];	place[1][2]->left = place[1][1];		place[1][2]->up = place[0][2];
	place[1][3]->right = place[1][4];		place[1][3]->down = place[2][3];	place[1][3]->left = place[1][2];		place[1][3]->up = place[0][3];
	place[1][4]->right = place[1][5];		place[1][4]->down = place[2][4];	place[1][4]->left = place[1][3];		place[1][4]->up = place[0][4];
	place[1][5]->right = place[1][6];		place[1][5]->down = place[2][5];	place[1][5]->left = place[1][4];		place[1][5]->up = place[0][5];
	place[1][6]->right = place[1][7];		place[1][6]->down = place[2][6];	place[1][6]->left = place[1][5];		place[1][6]->up = place[0][6];
	place[1][7]->right = place[1][8];		place[1][7]->down = place[2][7];	place[1][7]->left = place[1][6];		place[1][7]->up = place[0][7];
	place[1][8]->right = place[1][9];		place[1][8]->down = place[2][8];	place[1][8]->left = place[1][7];		place[1][8]->up = place[0][8];
											place[1][9]->down = place[2][9];	place[1][9]->left = place[1][8];		place[1][9]->up = place[0][9];
												
												
												

			
	place[2][0]->right = place[2][1]; 		place[2][0]->down = place[3][0];											place[2][0]->up = place[1][0];
	place[2][1]->right = place[2][2];		place[2][1]->down = place[3][1];	place[2][1]->left = place[2][0];		place[2][1]->up = place[1][1];
	place[2][2]->right = place[2][3];		place[2][2]->down = place[3][2];	place[2][2]->left = place[2][1];		place[2][2]->up = place[1][2];
	place[2][3]->right = place[2][4];		place[2][3]->down = place[3][3];	place[2][3]->left = place[2][2];		place[2][3]->up = place[1][3];
	place[2][4]->right = place[2][5];		place[2][4]->down = place[3][4];	place[2][4]->left = place[2][3];		place[2][4]->up = place[1][4];
	place[2][5]->right = place[2][6];		place[2][5]->down = place[3][5];	place[2][5]->left = place[2][4];		place[2][5]->up = place[1][5];
	place[2][6]->right = place[2][7];		place[2][6]->down = place[3][6];	place[2][6]->left = place[2][5];		place[2][6]->up = place[1][6];
	place[2][7]->right = place[2][8];		place[2][7]->down = place[3][7];	place[2][7]->left = place[2][6];		place[2][7]->up = place[1][7];
	place[2][8]->right = place[2][9];		place[2][8]->down = place[3][8];	place[2][8]->left = place[2][7];		place[2][8]->up = place[1][8];
											place[2][9]->down = place[3][9];	place[2][9]->left = place[2][8];		place[2][9]->up = place[1][9];	
											
																			
			

												
	place[3][0]->right = place[3][1]; 		place[3][0]->down = place[4][0];											place[3][0]->up = place[2][0];
	place[3][1]->right = place[3][2];		place[3][1]->down = place[4][1];	place[3][1]->left = place[3][0];		place[3][1]->up = place[2][1];
	place[3][2]->right = place[3][3];		place[3][2]->down = place[4][2];	place[3][2]->left = place[3][1];		place[3][2]->up = place[2][2];
	place[3][3]->right = place[3][4];		place[3][3]->down = place[4][3];	place[3][3]->left = place[3][2];		place[3][3]->up = place[2][3];
	place[3][4]->right = place[3][5];		place[3][4]->down = place[4][4];	place[3][4]->left = place[3][3];		place[3][4]->up = place[2][4];
	place[3][5]->right = place[3][6];		place[3][5]->down = place[4][5];	place[3][5]->left = place[3][4];		place[3][5]->up = place[2][5];
	place[3][6]->right = place[3][7];		place[3][6]->down = place[4][6];	place[3][6]->left = place[3][5];		place[3][6]->up = place[2][6];
	place[3][7]->right = place[3][8];		place[3][7]->down = place[4][7];	place[3][7]->left = place[3][6];		place[3][7]->up = place[2][7];
	place[3][8]->right = place[3][9];		place[3][8]->down = place[4][8];	place[3][8]->left = place[3][7];		place[3][8]->up = place[2][8];
											place[3][9]->down = place[4][9];	place[3][9]->left = place[3][8];		place[3][9]->up = place[2][9];
																				
			
			

			
												
	place[4][0]->right = place[4][1]; 		place[4][0]->down = place[5][0];											place[4][0]->up = place[3][0];
	place[4][1]->right = place[4][2];		place[4][1]->down = place[5][1];	place[4][1]->left = place[4][0];		place[4][1]->up = place[3][1];
	place[4][2]->right = place[4][3];		place[4][2]->down = place[5][2];	place[4][2]->left = place[4][1];		place[4][2]->up = place[3][2];
	place[4][3]->right = place[4][4];		place[4][3]->down = place[5][3];	place[4][3]->left = place[4][2];		place[4][3]->up = place[3][3];
	place[4][4]->right = place[4][5];		place[4][4]->down = place[5][4];	place[4][4]->left = place[4][3];		place[4][4]->up = place[3][4];
	place[4][5]->right = place[4][6];		place[4][5]->down = place[5][5];	place[4][5]->left = place[4][4];		place[4][5]->up = place[3][5];
	place[4][6]->right = place[4][7];		place[4][6]->down = place[5][6];	place[4][6]->left = place[4][5];		place[4][6]->up = place[3][6];
	place[4][7]->right = place[4][8];		place[4][7]->down = place[5][7];	place[4][7]->left = place[4][6];		place[4][7]->up = place[3][7];
	place[4][8]->right = place[4][9];		place[4][8]->down = place[5][8];	place[4][8]->left = place[4][7];		place[4][8]->up = place[3][8];
											place[4][9]->down = place[5][9];	place[4][9]->left = place[4][8];		place[4][9]->up = place[3][9];	
											
																			
		

			
	place[5][0]->right = place[5][1]; 		place[5][0]->down = place[6][0];											place[5][0]->up = place[4][0];
	place[5][1]->right = place[5][2];		place[5][1]->down = place[6][1];	place[5][1]->left = place[5][0];		place[5][1]->up = place[4][1];
	place[5][2]->right = place[5][3];		place[5][2]->down = place[6][2];	place[5][2]->left = place[5][1];		place[5][2]->up = place[4][2];
	place[5][3]->right = place[5][4];		place[5][3]->down = place[6][3];	place[5][3]->left = place[5][2];		place[5][3]->up = place[4][3];
	place[5][4]->right = place[5][5];		place[5][4]->down = place[6][4];	place[5][4]->left = place[5][3];		place[5][4]->up = place[4][4];
	place[5][5]->right = place[5][6];		place[5][5]->down = place[6][5];	place[5][5]->left = place[5][4];		place[5][5]->up = place[4][5];
	place[5][6]->right = place[5][7];		place[5][6]->down = place[6][6];	place[5][6]->left = place[5][5];		place[5][6]->up = place[4][6];
	place[5][7]->right = place[5][8];		place[5][7]->down = place[6][7];	place[5][7]->left = place[5][6];		place[5][7]->up = place[4][7];
	place[5][8]->right = place[5][9];		place[5][8]->down = place[6][8];	place[5][8]->left = place[5][7];		place[5][8]->up = place[4][8];
											place[5][9]->down = place[6][9];	place[5][9]->left = place[5][8];		place[5][9]->up = place[4][9];
											
											
												

			
	place[6][0]->right = place[6][1]; 		place[6][0]->down = place[7][0];											place[6][0]->up = place[5][0];
	place[6][1]->right = place[6][2];		place[6][1]->down = place[7][1];	place[6][1]->left = place[6][0];		place[6][1]->up = place[5][1];
	place[6][2]->right = place[6][3];		place[6][2]->down = place[7][2];	place[6][2]->left = place[6][1];		place[6][2]->up = place[5][2];
	place[6][3]->right = place[6][4];		place[6][3]->down = place[7][3];	place[6][3]->left = place[6][2];		place[6][3]->up = place[5][3];
	place[6][4]->right = place[6][5];		place[6][4]->down = place[7][4];	place[6][4]->left = place[6][3];		place[6][4]->up = place[5][4];
	place[6][5]->right = place[6][6];		place[6][5]->down = place[7][5];	place[6][5]->left = place[6][4];		place[6][5]->up = place[5][5];
	place[6][6]->right = place[6][7];		place[6][6]->down = place[7][6];	place[6][6]->left = place[6][5];		place[6][6]->up = place[5][6];
	place[6][7]->right = place[6][8];		place[6][7]->down = place[7][7];	place[6][7]->left = place[6][6];		place[6][7]->up = place[5][7];
	place[6][8]->right = place[6][9];		place[6][8]->down = place[7][8];	place[6][8]->left = place[6][7];		place[6][8]->up = place[5][8];
											place[6][9]->down = place[7][9];	place[6][9]->left = place[6][8];		place[6][9]->up = place[5][9];
											
											
											
			

			
	place[7][0]->right = place[7][1]; 		place[7][0]->down = place[8][0];											place[7][0]->up = place[6][0];
	place[7][1]->right = place[7][2];		place[7][1]->down = place[8][1];	place[7][1]->left = place[7][0];		place[7][1]->up = place[6][1];
	place[7][2]->right = place[7][3];		place[7][2]->down = place[8][2];	place[7][2]->left = place[7][1];		place[7][2]->up = place[6][2];
	place[7][3]->right = place[7][4];		place[7][3]->down = place[8][3];	place[7][3]->left = place[7][2];		place[7][3]->up = place[6][3];
	place[7][4]->right = place[7][5];		place[7][4]->down = place[8][4];	place[7][4]->left = place[7][3];		place[7][4]->up = place[6][4];
	place[7][5]->right = place[7][6];		place[7][5]->down = place[8][5];	place[7][5]->left = place[7][4];		place[7][5]->up = place[6][5];
	place[7][6]->right = place[7][7];		place[7][6]->down = place[8][6];	place[7][6]->left = place[7][5];		place[7][6]->up = place[6][6];
	place[7][7]->right = place[7][8];		place[7][7]->down = place[8][7];	place[7][7]->left = place[7][6];		place[7][7]->up = place[6][7];
	place[7][8]->right = place[7][9];		place[7][8]->down = place[8][8];	place[7][8]->left = place[7][7];		place[7][8]->up = place[6][8];
											place[7][9]->down = place[8][9];	place[7][9]->left = place[7][8];		place[7][9]->up = place[6][9];
											
											
											

			
	place[8][0]->right = place[8][1]; 		place[8][0]->down = place[9][0];											place[8][0]->up = place[7][0];
	place[8][1]->right = place[8][2];		place[8][1]->down = place[9][1];	place[8][1]->left = place[8][0];		place[8][1]->up = place[7][1];
	place[8][2]->right = place[8][3];		place[8][2]->down = place[9][2];	place[8][2]->left = place[8][1];		place[8][2]->up = place[7][2];
	place[8][3]->right = place[8][4];		place[8][3]->down = place[9][3];	place[8][3]->left = place[8][2];		place[8][3]->up = place[7][3];
	place[8][4]->right = place[8][5];		place[8][4]->down = place[9][4];	place[8][4]->left = place[8][3];		place[8][4]->up = place[7][4];
	place[8][5]->right = place[8][6];		place[8][5]->down = place[9][5];	place[8][5]->left = place[8][4];		place[8][5]->up = place[7][5];
	place[8][6]->right = place[8][7];		place[8][6]->down = place[9][6];	place[8][6]->left = place[8][5];		place[8][6]->up = place[7][6];
	place[8][7]->right = place[8][8];		place[8][7]->down = place[9][7];	place[8][7]->left = place[8][6];		place[8][7]->up = place[7][7];
	place[8][8]->right = place[8][9];		place[8][8]->down = place[9][8];	place[8][8]->left = place[8][7];		place[8][8]->up = place[7][8];
											place[8][9]->down = place[9][9];	place[8][9]->left = place[8][8];		place[8][9]->up = place[7][9];
											
											

			
	place[9][0]->right = place[9][1]; 		place[9][0]->down = NULL;											place[9][0]->up = place[8][0];
	place[9][1]->right = place[9][2];		place[9][1]->down = NULL;	place[9][1]->left = place[9][0];		place[9][1]->up = place[8][1];
	place[9][2]->right = place[9][3];		place[9][2]->down = NULL;	place[9][2]->left = place[9][1];		place[9][2]->up = place[8][2];
	place[9][3]->right = place[9][4];		place[9][3]->down = NULL;	place[9][3]->left = place[9][2];		place[9][3]->up = place[8][3];
	place[9][4]->right = place[9][5];		place[9][4]->down = NULL;	place[9][4]->left = place[9][3];		place[9][4]->up = place[8][4];
	place[9][5]->right = place[9][6];		place[9][5]->down = NULL;	place[9][5]->left = place[9][4];		place[9][5]->up = place[8][5];
	place[9][6]->right = place[9][7];		place[9][6]->down = NULL;	place[9][6]->left = place[9][5];		place[9][6]->up = place[8][6];
	place[9][7]->right = place[9][8];		place[9][7]->down = NULL;	place[9][7]->left = place[9][6];		place[9][7]->up = place[8][7];
	place[9][8]->right = place[9][9];		place[9][8]->down = NULL;	place[9][8]->left = place[9][7];		place[9][8]->up = place[8][8];
											place[9][9]->down = NULL;	place[9][9]->left = place[9][8];		place[9][9]->up = place[8][9];
											
											
											
											
			
	place[0][0]->data=wall	;place[1][0]->data=data;	place[2][0]->data=data;	place[3][0]->data=data;	place[4][0]->data=wall;	place[5][0]->data=data;	place[6][0]->data=wall;	place[7][0]->data=data;	place[8][0]->data=data;	place[9][0]->data=data;
	place[0][1]->data=wall	;place[1][1]->data=data;	place[2][1]->data=data;	place[3][1]->data=data;	place[4][1]->data=wall;	place[5][1]->data=data;	place[6][1]->data=data;	place[7][1]->data=data;	place[8][1]->data=data;	place[9][1]->data=wall;
	place[0][2]->data=data	;place[1][2]->data=data;	place[2][2]->data=data;	place[3][2]->data=data;	place[4][2]->data=data;	place[5][2]->data=data;	place[6][2]->data=data;	place[7][2]->data=data;	place[8][2]->data=data;	place[9][2]->data=data;
	place[0][3]->data=data	;place[1][3]->data=wall;	place[2][3]->data=wall;	place[3][3]->data=data;	place[4][3]->data=data;	place[5][3]->data=data;	place[6][3]->data=data;	place[7][3]->data=data;	place[8][3]->data=wall;	place[9][3]->data=data;
	place[0][4]->data=sp	;place[1][4]->data=wall;	place[2][4]->data=wall;	place[3][4]->data=data;	place[4][4]->data=data;	place[5][4]->data=data;	place[6][4]->data=wall;	place[7][4]->data=data;	place[8][4]->data=wall;	place[9][4]->data=data;
	place[0][5]->data=sp	;place[1][5]->data=data;	place[2][5]->data=wall;	place[3][5]->data=wall;	place[4][5]->data=data;	place[5][5]->data=wall;	place[6][5]->data=wall;	place[7][5]->data=data;	place[8][5]->data=data;	place[9][5]->data=data;
	place[0][6]->data=sp	;place[1][6]->data=data;	place[2][6]->data=data;	place[3][6]->data=data;	place[4][6]->data=data;	place[5][6]->data=data;	place[6][6]->data=data;	place[7][6]->data=data;	place[8][6]->data=data;	place[9][6]->data=data;
	place[0][7]->data=data	;place[1][7]->data=data;	place[2][7]->data=data;	place[3][7]->data=wall;	place[4][7]->data=wall;	place[5][7]->data=data;	place[6][7]->data=data;	place[7][7]->data=data;	place[8][7]->data=data;	place[9][7]->data=data;
	place[0][8]->data=data	;place[1][8]->data=data;	place[2][8]->data=data;	place[3][8]->data=data;	place[4][8]->data=data;	place[5][8]->data=data;	place[6][8]->data=data;	place[7][8]->data=wall;	place[8][8]->data=data;	place[9][8]->data=wall;
	place[0][9]->data=wall	;place[1][9]->data=data;	place[2][9]->data=data;	place[3][9]->data=data;	place[4][9]->data=wall;	place[5][9]->data=wall;	place[6][9]->data=data;	place[7][9]->data=wall;	place[8][9]->data=data;	place[9][9]->data=data;
													 
	
	for(int i=0;i<9;i++){
	   for(int j=0;j<9;j++)
	   {
	   	  cout<<place[i][j]->data;
	   }
	   cout<<endl;
    }
    bomb = new node;
    char k= 'a';
    face = new node;
    face = place[0][4];
	face->data = f;
	while(k!= 'p' &&moves>0) {
		moves--;
		system("cls");
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++)
			{
				cout<<place[i][j]->data;
			}
			cout<<endl;
		}
		cout<<"Moves Remaining: "<<moves<<endl;
		if(key>2)
		{
			cout<<"\n\t\tYou Won!"<<endl;
			exit(0);
		}
	    k=getch();
	    if(k=='a'&&face->left->data =="&&"&&face->left == place[8][8]){
	    	cout<<"\n\t\tYou Won!"<<endl;
	    	exit(0);
		} 
		else if(k=='d'&&face->right->data =="&&"&&face->right == place[8][8]){
	    	cout<<"\n\t\tYou Won!"<<endl;
	    	exit(0);
		} 
		else if(k=='w'&&face->up->data =="&&"&&face->up == place[8][8]){
	    	cout<<"\n\t\tYou Won!"<<endl;
	    	exit(0);
		} 
		else if(k=='s'&&face->down->data=="&&"&&face->down == place[8][8]){
	    	cout<<"\n\t\tYou Won!"<<endl;
	    	exit(0);
		} 
		
		
		if(k=='a'&&face->left!=NULL&&face->left->data!="MM"&&face->left->data!="||")
		{
			face->data=sp;
			face=face->left;
			face->data = f;
		}
		else if(k=='d'&&face->right!=NULL&&face->right->data!="MM"&&face->right->data!="||")
		{
			face->data=sp;
			face=face->right;
			face->data = f;
		}
		else if(k=='w'&&face->up!=NULL&&face->up->data!="MM"&&face->up->data!="||")
		{
			face->data=sp;
			face=face->up;
			face->data = f;
		}
		else if(k=='s'&&face->down!=NULL&&face->down->data!="MM"&&face->down->data!="||")
		{
			face->data=sp;
			face=face->down;
			face->data = f;
		}
    	if(k == 'b'){
		   bomb = face;
		   bomb->data = b;
		   if(face->left!=NULL)
		   {
		   	 if(face->left == place[8][8])
		   	    face->left->data = keyy;
		     if(face->left == place[5][4])
		         face->left->data = keyy;
		     if(face->left == place[9][2])
		         face->left->data = keyy;
		   }
		   if(face->up!=NULL){
				if(face->up == place[8][8])
					face->up->data = keyy;
				if(face->up == place[5][4])
					face->up->data = keyy;
				if(face->up == place[9][2])
					face->up->data = keyy;
			}
			if(face->down!=NULL){
				if(face->down == place[8][8])
					face->down->data = keyy;
				if(face->down == place[5][4])
					face->down->data = keyy;
				if(face->down == place[9][2])
					face->down->data = keyy;
			}
			if(face->right!=NULL){
				if(face->right == place[8][8])
					face->right->data = keyy;
				if(face->right == place[5][4])
					face->right->data = keyy;
				if(face->right == place[9][2])
					face->right->data = keyy;
			}
			while(true){		
				int i = rand()%9;
				int j = rand()%9;
				if(place[i][j]->data=="  "){
					face = place[i][j];
					face->data = f;
					break;
				}
			}
			if(bomb->left!=NULL){
				if(bomb->left->data == data)
					bomb->left->data = sp;
			}
			if(bomb->up!=NULL){
				if(bomb->up->data == data)
					bomb->up->data = sp;
			}
			if(bomb->down!=NULL){
				if(bomb->down->data == data)
					bomb->down->data = sp;
			}
			if(bomb->right!=NULL){
				if(bomb->right->data == data)
					bomb->right->data = sp;
			}
			if(bomb->data == data){
				bomb->data = sp;
			}
			bomb->data = "  ";
		}
	}									
}



		
		
		
		
	
												

  