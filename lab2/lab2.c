#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "struct.h"
#include "list.h"
#include "vector.h"

int main() {
	int g, arg;
	printf("Выберите, что хотите использовать: \n");
	printf("1. Очередь\n");
	printf("2. Вектор\n");
	scanf("%d", &arg);
	list* l = new_list(l);
	printf("Введите количество стоек регистрации: \n");
	scanf("%d", &g);
    if (arg == 1){
		queue* q = (queue *)calloc(1, sizeof(queue));
		q->sts = g;
		q->st = (stand * )calloc(q->sts, sizeof(stand));
		if (q->sts == 0){
			free(q);
			return 1;
		}
		do_everything_list(q, l);
	}
	else {
		vpas** vect = (vpas **)calloc(g, sizeof(vpas *));
		for (int i = 0; i < g; i ++){
			vect[i] = (vpas *)malloc(2 * sizeof(vpas));
		}
		do_everything_vector(vect, l, g);
	}
	delete_list(l);
	return 0;
}
