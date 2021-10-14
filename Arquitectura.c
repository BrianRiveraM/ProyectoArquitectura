#define B 10
int array[B] = {1, 10, 3, 8, 6, 2, 9, 4, 7, 5};

int result(){
	int resultAdd = add();
	int resultSub = sub();
	return resultAdd-resultSub;
}

int add(){
	int i;
	int addition = array[0];
	for(i = 1; i < 5; i++){
		addition += array[i]; 
	}
	return addition;
}

int sub(){
	int i;
	int substracction = array[5];
	for(i = 6; i < 10; i++){
		substracction += array[i];
	}
	return substracction;
}

int main(){
	int resultado = result();
	return 0;
}
//The expected result is 1
