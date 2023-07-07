void LengthofString(int n,char *string){
	if (string[n] == '\0'){
		printf("%i",n);
		return;
	}
	
	LengthofString(n+1,string);
	//printf("%c",string[n]);
}