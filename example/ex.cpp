#include<iostream>
using namespace std;

void  Spiralprint(int arr[][100],int m,int n){
	for(int rs=0,re=m-1,cs=0,ce=n-1;rs<=re,cs<=ce;rs++,cs++,re--,ce--){for(int i=cs;i<=ce;i++){cout<< arr[rs][i]<< " ";}
for(int j=rs+1;j<=re;j++){
			cout<< arr[j][ce] << " "}
		for (int k=ce-1;k>=cs;k--){cout << arr[re][k]<<" ";}
		for (int l=re-1;l>rs;l--){
			cout << arr[l][cs]<< " ";}}}

int main(){
    int c;
    // c=case
    cin>> c;
    for(int q=0;q<c;q++){
    	int arr[100][100];


    int m,n;
    cin>> m >> n;
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){cin>> arr[i][j];}}
    
    cout << "OUTPUT : "<< endl;
    if(m==1){
    	for(int i=0;i<n;i++){cout << arr[0][i]<< " ";}}if(n==1){for(int i=0;i<m;i++){cout << arr[i][0]<< " ";}}else{Spiralprint(arr,m,n);
	}cout << endl;cout << endl;}}