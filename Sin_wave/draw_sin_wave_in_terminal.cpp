#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main(){
	int height = 20, width = 180, std = 20;
	int half_h = int(height/2);
	short int mat[height][width] = {0};
	int i, j;
	
	for(i = 0; i < width; i++){
		j = int(sin((width/std)*i*3.14/180)*half_h);
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
	
	return 0;
}
