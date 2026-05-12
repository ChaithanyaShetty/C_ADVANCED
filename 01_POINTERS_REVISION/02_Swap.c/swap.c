void SWAP(int *p)
{
	int temp=*p;
	*p=*(p+1);
	*(p+1)=temp;
}
