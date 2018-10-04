#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
	int n;
	float x[n],jlm=0,jlm_2,s_e2,varian;
	cout<<" Masukan Jumlah data = ";cin>>n;
	for( int i=0;i<n;i++){
		cout<<" Masukan Nilai ke- "<<i+1<<" = ";cin>>x[n];
		s_e2+=(pow(x[n], 2));//jumlah dari sejumlah data yang dikuadratkam
		jlm+=x[n];
	}
	jlm_2=pow(jlm, 2);
	varian=((n*s_e2)-jlm_2)/(n*(n-1));
	cout<<" Standar Deviasi = "<<sqrt(varian)<<endl;
	getch();
}
