#include <bits/stdc++.h>

std::string numbers[9]={"one","two","three","four","five","six","seven","eight","nine"};

int main(){
		
		int n;
		std::cin>>n;
		if(n<10){
				
			std::cout<<numbers[n-1];
			
		}else{
			
				std::cout<<"Greater than 9";
			
		}
		
}