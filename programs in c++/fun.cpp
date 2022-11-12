int main(){

int i,j,q=0 , grade=0;
	int x=5;
	int z=10;
	char answer, Answer;
	string M[x];
	char A[z]={'A','D','A','C','B','C','D','B','C','A'};
	ifstream program;

ifstream program1;
program.open("chapter5.txt");

for (j=0;j<10;j++){

for (i=0;i<x;i++)
{
	program>>M[i];
	getline( program, M[i]);
	
	cout<<M[i]<<endl;
}
cin>>answer;
Answer=toupper(answer);
	if (Answer==A[q]){
		grade++;}
q++;
 return 0;

}}
