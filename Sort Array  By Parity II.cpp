vector<int> V{10,9,7,18,13,19,4,20,21,14};
int j = 1;
	for(int i=0;i<V.size();i=i+2)
	{
		if(V[i]%2!=0)
		{
			while(V[j]%2!=0)
			j=j+2;

			swap(V[j],V[i]);
		}
	
