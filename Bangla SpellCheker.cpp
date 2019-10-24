
#include "stdafx.h"
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

#pragma warning(disable : 4996)

int k;
char output[100][100];
//char **output;

int factorial(int n)
{
	if (n<=1){
		return 1;
	}
	else
		return n*factorial(n-1);
}

/*
void print(char *v, const int n){
	//sprintf(output[k++],"%s",v);
	//strcpy(output[k],v);
	//k++;
}
*/

void permute(char *v, const int start, const int n)
{
  if (start == n-1) {
    //print(v,n);
	  sprintf(output[k++],"%s",v);

  }
  else {
    for (int i = start; i < n; i++) {
      int tmp = v[i];

      v[i] = v[start];
      v[start] = tmp;
      permute(v, start+1, n);
      v[start] = v[i];
      v[i] = tmp;

    }
  }
}

void dictionary(int m)
{
	ifstream infile("dictionary.txt");
	string *list= new string[267751];
	//char list[267751][5];
	//string list[267751];
	if (infile.is_open()){
		for (int i=0; i <267751; i++)
		{
			//infile>>list[i];
			getline(infile, list[i]);
			//cout<<list[i]<<endl;
		}
	}

	infile.close();
	for (int i=0; i<267751; i++)
	{
		for (int j=0; j<m; j++)
		{

		if(output[j]==list[i])
		{
		printf("Spelling suggestions: %s \n", list[i]);
		}
		}
	}

}





int main()
{
	//read in word
	char word[100];
	 printf ("Enter a word: ");
	 scanf("%s",word);
	 int n=strlen(word);
	 int i,m=factorial(n);

	 for(int j=0; j<n; j++)
	 {
		word[j]=toupper(word[j]);
	 }
	//generate permutations of the word
	//char** output=(char**)malloc(m*sizeof(char*));
	//for (i=0; i<m; i++){
		//output[i]=(char*)malloc((n+2)*sizeof(char));
	//}
	k=0;
	permute(word,0,n);

	for (i=0; i<m; i++){
		printf("%d %s\n",i,output[i]);
	}


	//for each word in the permutation list, search it in the dictionary. if match, store in an output array
	dictionary(m);
	//give names for output
	system("pause");
}
