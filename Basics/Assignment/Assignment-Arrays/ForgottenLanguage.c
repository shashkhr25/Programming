#include<stdio.h>
int main(){
	int T,i;
	printf("Enter the number of test cases: ");
	scanf("%d", &T);
	
	for(i=1;i<=T;i++){
		int N,K,j;
		printf("Enter the number of words in old language : ");
		scanf("%d", &N);
		
		printf("Enter the number of modern language phrases: ");
		scanf("%d", &K);
		
		int oldLanguageWords[N];
		for(j=0;j<N;j++){
			printf("Enter the %d word of old language : ", j);
			scanf("%d", &oldLanguageWords[j]) ;
		}
		
		for(j=0;j<K;j++){
			int L, m;
			printf("Enter the no of words in modern language : ");
			scanf("%d", &L);
			
			int modernLanguageWords[L];
			for(m=0;m<L;m++){
				printf("Enter the %d modern word  : ", m+1);
				scanf("%d", &modernLanguageWords[m]);
			}
			for(m=0;m<L;m++){
				for(j=0;j<N;j++){
					if(modernLanguageWords[m] == oldLanguageWords[j]){
						printf("YES");
					}
					else{
						printf("No");
					}
				}
			}
		}
	}
	return 0;
}
