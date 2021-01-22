#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){
	int medidas = 0, i = 0;
	bool true_false = true;
	scanf("%d", &medidas);
	int array[medidas];
	for (i = 0; i < medidas; i++)
		scanf("%d", &array[i]);
	if(medidas > 1){
		if (medidas == 2 && array[0] == array[1])
			true_false = false;
		else{
			for (i = 1; i < medidas - 1; i++){
				if (array[i - 1] >= array[i] && array[i] >= array[i + 1]){
					true_false = false;
					break;
				}
				else if (array[i - 1] <= array[i] && array[i] <= array[i + 1]){
					true_false = false;
					break;
				}
			}
		}
	}
	if (true_false == true) printf("%d\n", 1);
	else printf("%d\n", 0);
	return 0;
}