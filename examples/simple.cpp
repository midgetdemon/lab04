int main (){
	int *p = new int [10];
	p[9] = 1; // correct this to size -1 = 10 -1 = 9
		
	delete[] p; //decallocate the memory from the new above 
	return 0;
}

