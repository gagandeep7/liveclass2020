// wave prit col
#include <iostream>
using namespace std;
void wavepri(int a[][30], int r ,int c){
	for(int column = 0; column <c ;column++){
		if(column%2 == 0){
			//even  --> top to iche

			for(int row = 0;row<r;row++){
				cout<< a[row][column]<<" ";
			}

		}
		else{
			for(int row = r-1 ;row>=0 ; row--){
				cout<< a[row][column]<<" ";
			}

		}
	}
	return;
}



int main()
{
	int a[30][30];

	int r,c;
	cin >>r>>c;
	for(int i = 0;i<r ;i++){
		for(int j= 0;j < c; j++ ){
			cin >> a[i][j];
		}
	}
	

	wavepri(a,r,c);
	return 0;
}