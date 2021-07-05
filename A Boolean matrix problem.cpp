#include <bits/stdc++.h>
using namespace std;


void modifyMatrix(vector<vector<int>> mat,int R,int C)
{
	// variables to check if there are any 1
	// in first row and column
	bool row_flag = false;
	bool col_flag = false;

	// updating the first row and col if 1
	// is encountered
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			if (i == 0 && mat[i][j] == 1)
				row_flag = true;

			if (j == 0 && mat[i][j] == 1)
				col_flag = true;

			if (mat[i][j] == 1) {

				mat[0][j] = 1;
				mat[i][0] = 1;
			}
		}
	}

	// Modify the input matrix mat[] using the
	// first row and first column of Matrix mat
	for (int i = 1; i < R; i++) {
		for (int j = 1; j < C; j++) {

			if (mat[i][0] == 1) {
				mat[i][j] = 1;
			}
		}
	}

	// modify first row if there was any 1
	if (row_flag == true) {
		for (int i = 0; i < C; i++) {
			mat[0][i] = 1;
		}
	}

	

    for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cout << mat[i][j]<<" ";
		}
		cout << "\n";
	}
}



// Driver function to test the above function
int main()
{
    
    int t;
    cin>>t;
    while(t--) 
    {
        int R,C;
        cin>>R>>C;
	    vector<vector<int>> mat;
        vector<int> temp;
        int val;
    
        for(int i=0; i<R; i++)
        { 
            for( int j=0; j<C; j++)
            {   
                cin>>val;
                temp.push_back(val);
            }
            mat.push_back(temp);
            temp.clear();
        }
	

	modifyMatrix(mat,R,C);

	
	
}
return 0;
}


