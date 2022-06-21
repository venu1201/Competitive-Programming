#include <iostream>
using namespace std;

int main() {
        
        // declaring the adj matrix
        int adj[6][6];
        
        for(int i=0 ; i<6 ; i++){
            for(int j=0 ; j<6 ; j++){
                adj[i][j]=0;
            }
        }
        
        // Making the connection edegs as 1. 
        adj[0][1]=1;
        adj[0][2]=1;
        adj[1][0]=1;
        adj[1][3]=1;
        adj[1][4]=1;
        adj[2][0]=1;
        adj[2][5]=1;
        adj[3][1]=1;
        adj[4][1]=1;
        adj[5][2]=1;
        for(int i=0;i<6;i++)
        {
            for(int j=0;j<6;j++)
            {
                cout<<adj[i][j]<<" ";
            }cout<<endl;
        }

        return 0;
}