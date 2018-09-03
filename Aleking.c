#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int *vec,n,i,o,j,min,aux;
	scanf("%d",&n);
	vec=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&vec[i]);
	}
	scanf("%d",&o);
	switch(o){
	case 1:
		for(i=n-1;i>=0;i--){
			printf("%d ",vec[i]);
		}
		break;
	case 2:
		for(i=0;i<n;i++){
			printf("%d ",vec[i]);
		}
		break;
	case 3:
		for(i=0;i<n;i++){
			min=i;
			for(j=i+1;j<n;j++){
				if(vec[j]<vec[min]){
					min=j;
				}
			}
			aux=vec[i];
			vec[i]=vec[min];
			vec[min]=aux;
		}
		for(i=n-1;i>=0;i--){
			printf("%d ",vec[i]);
		}
		break;
	default:
		break;
	}
	free(vec);
	return 0;
}

