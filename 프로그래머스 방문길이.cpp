#include <string>
#include <iostream>
using namespace std;
int x = 5, y = 5;
int nx, ny;
int c[11][11][4];//UDLR¼ø 

bool bound(int x, int y) {
	if(10<x || 10<y || x<0 || y<0) return false;
	return true;
}

int solution(string dirs) {
	int answer = 0;
	
	for(int i = 0; i < dirs.length(); i++) {
		if(dirs[i] == 'U') {
			nx = x;
			ny = y+1;
			if(!bound(nx, ny)) continue;
			if(c[x][y][0] == 0) {
				answer++;
				c[x][y][0] = c[nx][ny][1] = 1;
			}
		}
		else if(dirs[i] == 'D') {
			nx = x;
			ny = y-1;
			if(!bound(nx, ny)) continue;
			if(c[x][y][1] == 0) {
				answer++;
				c[x][y][1] = c[nx][ny][0] = 1;
			}
		}
		else if(dirs[i] == 'L') {
			nx = x-1;
			ny = y;
			if(!bound(nx, ny)) continue;
			if(c[x][y][2] == 0 ) {
				answer++;
				c[x][y][2] = c[nx][ny][3] = 1;
			}
		}
		else if(dirs[i] == 'R') {
			nx = x+1;
			ny = y;
			if(!bound(nx, ny)) continue;
			if(c[x][y][3] == 0) {
				answer++;
				c[x][y][3] = c[nx][ny][2] = 1;
			}

		}
        	x = nx;
			y = ny;
	}
	return answer;
}
