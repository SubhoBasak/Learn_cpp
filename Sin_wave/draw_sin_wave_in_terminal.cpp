#include <iostream>
#include <string>
#include <cmath>
#include <unistd.h>

using namespace std;

void show_frame(int start){
	system("clear");
	int height = 20, width = 180, std = 20;
	int half_h = int(height/2);
	short int mat[height][width] = {0};
	int i, j;
	
	for(i = 0; i < width; i++){
		j = int(sin((width/std)*(i+start)*3.14/180)*half_h);
		if(j > 0)
			mat[half_h-j][i] = 1;
		else if(j == 0)
			mat[half_h][i] = 1;
		else
			mat[half_h-j][i] = 1;
	}
	
	for(i = 0; i < height; i++){
		for(j = 0; j < width; j++){
			if(mat[i][j] == 0){
				cout << ' ';
			}
			else{
				cout << '#';
			}
		}
		cout << endl;
	}
}

int main(){
	for(int i = 0; i < 200; i++){
		show_frame(i);
		usleep(50000);
	}
	
	return 0;
}
