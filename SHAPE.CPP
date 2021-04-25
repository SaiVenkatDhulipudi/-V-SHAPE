

#include <iostream>

using namespace std;

int main() {
	int n,i,j,c=0;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==j||(i+j)==(n+1)){
				cout<<j;
				c++;
			}
			else{
				cout<<" ";
			}
		}
		cout<<"\n";
		if(c==n){
			break;
		}
	}		
}						
