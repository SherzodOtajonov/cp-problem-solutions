// phi, that is using Euler totient function, Sieve of Eratosthenes. 
int phi(int n){
	int res=n;
	for (int i==2; i*i <=n; i++){
		if (n%i==0){
			while (n%i==0)
				n/=i;
			res -= res/n;
		}
	}
	if (n>1)
		res -= res/n;
	return res;
	// sample: phi(900) -> 240
}